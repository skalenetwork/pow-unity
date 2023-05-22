
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
    public Skale_POW powScript;
    //Skale_Networks script pointer
    public Skale_Networks networks;
    //Wallet address of the user (currently hardcoded it will be retrived from the connected wallet)
    public string receiverAddress;

    public string private_key ;
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

        Debug.Log(chain);

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

        NetworkDetails sNetwork_details = networks.GetNetworkDetails(currentChain, NetworkType.testnet);

        chainInfo_url.text = sNetwork_details.getChainInfoUrl();

        await SetFuelBalance();
    }

    //Make sFuel request to blockchain
    public async Task Send_sFuel()
    {

        //Variable that contains the diferent chains details
        NetworkDetails sNetwork_details = networks.GetNetworkDetails(currentChain, NetworkType.testnet);

        
        //Setup of the web3 variable to communicate with blockchain
        //var mnemonic = new MnemonicUtil().GenerateRandomMnemonic();
        var ecKey = Nethereum.Signer.EthECKey.GenerateKey();
        byte[] privateKey = ecKey.GetPrivateKeyAsBytes();
        string hexString = BitConverter.ToString(privateKey).Replace("-", string.Empty);

        var account = new Account(hexString, 344106930);

        Debug.Log("ADDRESS " + account.Address);
        Debug.Log("PRIVATE KEY " + account.PrivateKey);


        Web3 web3 = new Web3(account, sNetwork_details.getRpc());
        Debug.Log("balance " + await web3.Eth.GetBalance.SendRequestAsync(account.Address));


        //Run the pow algorithm and get the new gas price
        TransactionInput tx = await SetTx(web3, sNetwork_details, account.Address);
        var pow_gasprice = await powScript.MineGasForTransaction(web3, tx);
        //Set the new gas price
        tx.GasPrice = new HexBigInteger(pow_gasprice);
       /* Debug.Log("tx.GasPrice " + tx.GasPrice);

        //Send the request to the blockchain
        var transactionReceipt = await web3.Eth.TransactionManager.SendTransactionAndWaitForReceiptAsync(tx);

        //Set UI data - sFuel, block, hash
        await SetFuelBalance();
        transaction_block.text = transactionReceipt.BlockNumber.ToString();
        transaction_hash.text = transactionReceipt.BlockHash.ToString();*/
    }

    private async Task<TransactionInput> SetTx(Web3 web3, NetworkDetails network, string caller)
    {
        string faucetAddress = network.getAddress();

        string address = receiverAddress.Remove(0, 2);

        string caller_aux = caller.Remove(0, 2);

        string data = network.getFunctionSignature() + "000000000000000000000000" + address;

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
        NetworkDetails sNetwork_details = networks.GetNetworkDetails(currentChain, NetworkType.testnet);
        Web3 web3 = new Web3(sNetwork_details.getRpc());

        var balance = await web3.Eth.GetBalance.SendRequestAsync(receiverAddress);

        var balanceInEther = Web3.Convert.FromWei(balance.Value);

        float newVal = float.Parse(balanceInEther.ToString());

        sfuelBalance.text = newVal.ToString();


    }

}