using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Threading.Tasks;
using Nethereum.Web3;
using Nethereum.RPC.Eth.DTOs;
using System;

public class UIController : MonoBehaviour
{
    public Image background;

    public Sprite[] backgrounds_formats;
    //Btn to request sFuel
    public Button btn;

    //Name of the chain selected
    public TextMeshProUGUI slected_chainLabel;
    //General chain info url
    public TextMeshProUGUI chainInfo_url;

    //sFuel wallet balance
    public TextMeshProUGUI sfuelBalance;
    //block number of the transaction 
    public TextMeshProUGUI transaction_block;
    //hash of the transaction
    public TextMeshProUGUI transaction_hash;

    //Current selected chain
    ChainName currentChain;

    private void Awake()
    {
        SetBackground();
    }

    private void Start()
    {
        btn.onClick.AddListener(OnButtonClick);

        SetChain();
    }

    private async void OnButtonClick()
    {
        await SkaleManager.instance.SendFuel();
    }

    public void SetBackground()
    {
     
        if (Screen.width <= Screen.height)
        {
            background.sprite = backgrounds_formats[0];
        }
        else
        {
            background.sprite = backgrounds_formats[1];
        }
    }

    //Set chain variables
    public async void SetChain()
    {
        string chain = slected_chainLabel.text;

        ChainName name;
        switch (chain)
        {
            case "calypso":
                name = ChainName.calypso;
                break;
            case "chaos":
                name = ChainName.chaos;
                break;
            case "europa":
                name = ChainName.europa;
                break;
            case "nebula":
                name = ChainName.nebula;
                break;
            case "titan":
                name = ChainName.titan;
                break;
            default:
                name = ChainName.calypso;
                break;
        }

        currentChain = name;

        Chains chain_object = SkaleManager.instance.GetChainByName(currentChain);

        chainInfo_url.text = chain_object.chainInfo_URL;

        await SetFuelBalance();
    }


    //Set the sFuel wallet balance
    public async Task SetFuelBalance()
    {
        //Variable that contains the diferent chains details
        Chains chain_object = SkaleManager.instance.GetChainByName(currentChain);

        Console.WriteLine("currentChain " + currentChain);
        Console.WriteLine("chain_object.rpc " + chain_object.rpc);

        Web3 web3 = new Web3(chain_object.rpc);


        Console.WriteLine("SkaleManager.instance.account_receiver " + SkaleManager.instance.account_receiver);


        var balance = await web3.Eth.GetBalance.SendRequestAsync(SkaleManager.instance.account_receiver);

        var balanceInEther = Web3.Convert.FromWei(balance.Value);

        float newVal = float.Parse(balanceInEther.ToString());

        sfuelBalance.text = newVal.ToString();
    }

    public void SetTransactionUI(TransactionReceipt transactionReceipt)
    {
        transaction_block.text = SkaleManager.instance.account_receiver;

        Debug.Log("transactionReceipt.BlockHash.ToString() " + transactionReceipt.BlockHash.ToString());
        transaction_hash.text = transactionReceipt.BlockHash.ToString();
    }

    public ChainName GetCurrentChain_name()
    {
        return currentChain;
    }
}
