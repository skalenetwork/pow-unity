using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Threading.Tasks;
using Nethereum.Web3;
using Nethereum.RPC.Eth.DTOs;
using System;
using Nethereum.Unity.Rpc;

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
        
        SetChain();

        btn.onClick.AddListener(OnButtonClick);

    }

    private void OnButtonClick()
    {
        SkaleManager.instance.SendFuel();
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
    public void SetChain()
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
        StartCoroutine(SetFuelBalance());
    }

    public IEnumerator SetFuelBalance()
    {
        Chains chain_object = SkaleManager.instance.GetChainByName(currentChain);

        var balanceRequest = new EthGetBalanceUnityRequest(chain_object.rpc);
        yield return balanceRequest.SendRequest(SkaleManager.instance.account_receiver, BlockParameter.CreateLatest());
        var balanceInEther = Web3.Convert.FromWei(balanceRequest.Result.Value);

        float newVal = float.Parse(balanceInEther.ToString());

        sfuelBalance.text = newVal.ToString();
    }


    public void SetTransactionUI(TransactionReceipt transactionReceipt)
    {
        transaction_block.text = SkaleManager.instance.account_receiver;

        transaction_hash.text = transactionReceipt.BlockHash.ToString();
    }

    public ChainName GetCurrentChain_name()
    {
        return currentChain;
    }
}
