using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using Nethereum.Web3;
using Nethereum.RPC.Eth.DTOs;
using Nethereum.Hex.HexTypes;
using Nethereum.Signer;
using Nethereum.Web3.Accounts;
using UnityEngine.UI;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using TMPro;

/**
 * In this class is where intended to send sFuel to a specific address. The send Fuel is associated with the main screen button.
 */
public class Skale_Send_sFuel : MonoBehaviour
{
    public Skale_POW powScript;
    public Skale_Networks networks;
    public string receiverAddress;
    public Button btn;

    public TextMeshProUGUI address;
    public TextMeshProUGUI slected_chainLabel;
    public TextMeshProUGUI chainInfo_url;

    ChainName currentChain;

    private void Start()
    {
        btn.onClick.AddListener(OnButtonClick);
        SetChain();
    }


    private async void OnButtonClick()
    {
        await Send_sFuel();
    }

    public void SetChain()
    {
        string chain = slected_chainLabel.text;


        ChainName name ;
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
                name = ChainName.chaos;
                break;
        }

       // Debug.Log("aqui 2" + name.ToString());

        currentChain = name;

        NetworkDetails sNetwork_details = networks.GetNetworkDetails(currentChain, NetworkType.testnet);

//        Debug.Log("aqui " + sNetwork_details.getChainInfoUrl());
        chainInfo_url.text = sNetwork_details.getChainInfoUrl();
    }

    public async Task Send_sFuel()
    {
        //For now I had my pk hardcoded in here
        string pk = "";

        NetworkDetails sNetwork_details = networks.GetNetworkDetails(currentChain, NetworkType.testnet);

        Web3 web3 = new Web3(sNetwork_details.getRpc());

        TransactionInput tx = await SetTx(web3, sNetwork_details);

        //await powScript.MineGasForTransaction(web3, tx);

        var ethECKey = new EthECKey(pk);
        byte[] txEncoded = ConvertTransactionToBytes(tx);
        var signedTransaction = ethECKey.Sign(txEncoded);


        string signTest = EthECDSASignature.CreateStringSignature(signedTransaction);

        var transaction = await web3.Eth.Transactions.SendRawTransaction.SendRequestAsync(signTest);
        Debug.Log(transaction);
    }


    private async Task<TransactionInput> SetTx(Web3 web3, NetworkDetails network)
    {
        string faucetAddress = network.getAddress();

        string data = network.getFunctionSignature() + "000000000000000000000000" + receiverAddress;
        string addressTo = faucetAddress;
        string addressFrom = receiverAddress;
        HexBigInteger gas = new HexBigInteger("65000");
        HexBigInteger value = new HexBigInteger("0");


        TransactionInput tx = new TransactionInput(data, addressTo, addressFrom, gas, value);
        tx.Nonce = await web3.Eth.Transactions.GetTransactionCount.SendRequestAsync(faucetAddress);
        return tx;
    }

    public static byte[] ConvertTransactionToBytes(TransactionInput transaction)
    {
        using (MemoryStream ms = new MemoryStream())
        {
            BinaryFormatter bf = new BinaryFormatter();
            bf.Serialize(ms, transaction);
            return ms.ToArray();
        }
    }
}

