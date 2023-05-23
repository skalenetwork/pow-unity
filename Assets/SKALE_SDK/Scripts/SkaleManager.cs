using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;
using Nethereum.RPC.Eth.DTOs;


public class SkaleManager : MonoBehaviour
{
    public static SkaleManager instance;

    public List<Chains> chains_list;

    //Wallet address of the user (currently hardcoded it will be retrived from the connected wallet)
    public string account_receiver;

    public UIController ui_script;

    public void Awake()
    {
        instance = this;
        Chains currentChain = GetChainByName(ui_script.GetCurrentChain_name());

        if (account_receiver == "")
        {
            account_receiver = new AnonymousWallet(currentChain).GetAddress();
        }

    }

    public Chains GetChainByName(ChainName name)
    {
        foreach (var chain in chains_list)
        {
            if (name == chain.name)
            {
                return chain;
            }
        }

        return chains_list[0];
    }

    public async Task SendFuel()
    {
        Chains currentChain = GetChainByName(ui_script.GetCurrentChain_name());

        if (account_receiver == "")
        {
            account_receiver = new AnonymousWallet(currentChain).GetAddress();
        }

        AnonymousWallet wallet = new AnonymousWallet(currentChain);

        TransactionReceipt transactionReceipt = await wallet.Send(account_receiver);


        if(ui_script != null)
        {
           await ui_script.SetFuelBalance();
           ui_script.SetTransactionUI(transactionReceipt);
        }
    } 

}
