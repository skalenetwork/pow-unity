using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;
using Nethereum.RPC.Eth.DTOs;
using System;

public class SkaleManager : MonoBehaviour
{
    public static SkaleManager instance;

    public List<Chains> chains_list;

    //Wallet address of the user (currently hardcoded it will be retrived from the connected wallet)
    public string account_receiver;

    public UIController ui_script;

    //public Miner pow_miner;

    //Using a faster miner package written in cpp
    public MinerCpp minercpp;

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

    public async void SendFuel()
    {

        Chains currentChain = GetChainByName(ui_script.GetCurrentChain_name());

        if (account_receiver == "")
        {
            account_receiver = new AnonymousWallet(currentChain).GetAddress();
        }

        
        AnonymousWallet wallet = new AnonymousWallet(currentChain);

        TransactionReceipt transactionReceipt = await wallet.Send(account_receiver);

        ui_script.setLoading(false);

        if (ui_script != null)
        {          
           StartCoroutine(ui_script.SetFuelBalance());
           ui_script.SetTransactionUI(transactionReceipt);
         }
    }

}
