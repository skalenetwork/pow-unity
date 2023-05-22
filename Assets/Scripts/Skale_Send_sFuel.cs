
using System.Threading.Tasks;
using UnityEngine;
using Nethereum.Web3;
using Nethereum.RPC.Eth.DTOs;
using Nethereum.Hex.HexTypes;
using Nethereum.Web3.Accounts;
using UnityEngine.UI;
using TMPro;
using System.Text;
using System;
using System.Numerics;
using Nethereum.Hex.HexConvertors.Extensions;
using Nethereum.KeyStore;

using Nethereum.HdWallet;


/**
 * In this class is where intended to send sFuel to a specific address. The send Fuel is associated with the main screen button.
 */
public class Skale_Send_sFuel : MonoBehaviour
{
    //Skale_POW script pointer
    private Skale_POW powScript;
    //Wallet address of the user (currently hardcoded it will be retrived from the connected wallet)
    public string receiverAddress;
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


    void Start()
    {
        //Add listerner to button click
        btn.onClick.AddListener(OnButtonClick);
        //Add POW algorithm script to variable
        powScript = SkaleManager.instance.pow_algorithm;
        //Set current init chain
        SetChain();
    }


    private async void OnButtonClick()
    {
        await Send_sFuel();
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

    //Make sFuel request to blockchain
    public async Task Send_sFuel()
    {

        //Variable that contains the diferent chains details
        Chains chain_object = SkaleManager.instance.GetChainByName(currentChain);


        //Setup of the web3 variable to communicate with blockchain
        //var mnemonic = new MnemonicUtil().GenerateRandomMnemonic();
        var ecKey = Nethereum.Signer.EthECKey.GenerateKey();
        byte[] privateKey = ecKey.GetPrivateKeyAsBytes();
        string hexString = BitConverter.ToString(privateKey).Replace("-", string.Empty);

        var account = new Account(hexString);

        Debug.Log("ADDRESS " + account.Address);
        Debug.Log("PRIVATE KEY " + account.PrivateKey);

        Web3 web3 = new Web3(account, chain_object.rpc);

        //Run the pow algorithm and get the new gas price
        TransactionInput tx = await SetTx(web3, chain_object, account.Address);
        var pow_gasprice = await powScript.MineGasForTransaction(web3, tx);

        //Set the new gas price
        tx.GasPrice = new HexBigInteger(BigInteger.Parse(pow_gasprice));


         Debug.Log("tx.Gas " + tx.Gas);

        //Send the request to the blockchain
         var transactionReceipt = await web3.Eth.TransactionManager.SendTransactionAndWaitForReceiptAsync(tx);

         //Set UI data - sFuel, block, hash
         await SetFuelBalance();
         transaction_block.text = transactionReceipt.BlockNumber.ToString();
         transaction_hash.text = transactionReceipt.BlockHash.ToString();
    }

    private async Task<TransactionInput> SetTx(Web3 web3, Chains chain_object, string caller)
    {
        string faucetAddress = chain_object.address;

        string address = receiverAddress.Remove(0, 2);

        string caller_aux = caller.Remove(0, 2);

        string data = chain_object.functionSignature + "000000000000000000000000" + address;

        string addressTo = faucetAddress;
        string addressFrom = caller_aux.ToUpper();
        HexBigInteger gas = new HexBigInteger("65000");
        HexBigInteger value = new HexBigInteger("0");


        TransactionInput tx = new TransactionInput(data, addressTo, addressFrom, gas, value);

        tx.Nonce = await web3.Eth.Transactions.GetTransactionCount.SendRequestAsync(caller);
        return tx;
    }

    //Set the sFuel wallet balance
    async Task SetFuelBalance()
    {

        //Variable that contains the diferent chains details
        Chains chain_object = SkaleManager.instance.GetChainByName(currentChain);
        Web3 web3 = new Web3(chain_object.rpc);

        var balance = await web3.Eth.GetBalance.SendRequestAsync(receiverAddress);

        var balanceInEther = Web3.Convert.FromWei(balance.Value);

        float newVal = float.Parse(balanceInEther.ToString());

        sfuelBalance.text = newVal.ToString();
    }

}