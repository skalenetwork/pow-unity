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

/**
 * In this class is where intended to send sFuel to a specific address. The send Fuel is associated with the main screen button.
 */
public class Skale_Send_sFuel : MonoBehaviour
{
    public Skale_POW powScript;
    public Skale_Networks networks;
    public string receiverAddress;
    public Button btn;

    private void Start()
    {
        btn.onClick.AddListener(OnButtonClick);
    }


    private async void OnButtonClick()
    {
        await Send_sFuel();
    }

    public async Task Send_sFuel()
    {
        //For now I had my pk hardcoded in here
        string pk = "";

        NetworkDetails sNetwork_details = networks.GetNetworkDetails(NetworkName.chaos, NetworkType.testnet);

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

