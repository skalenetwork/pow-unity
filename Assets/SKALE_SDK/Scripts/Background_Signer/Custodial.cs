using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Nethereum.Web3;
using Nethereum.RPC.Eth.DTOs;
using Nethereum.Unity.Rpc;
using Nethereum.Web3.Accounts;
using Nethereum.Hex.HexTypes;
using System.Threading.Tasks;


public class Custodial
{
    Custodian custodian;
    int nonce = 0;  

    public Custodial()
    {

        Debug.Log("Request_Manager.instance.pk " + Request_Manager.instance.pk);
        this.custodian = new Custodian(new Account(Request_Manager.instance.pk), Request_Manager.instance.current_chain);
    }

    public Custodian getCustodian()
    {
        return custodian;
    }

    public int getNonce()
    {
        return nonce;
    }

    public IEnumerator isValidCustodian()
    {
        var balanceRequest = new EthGetBalanceUnityRequest(Request_Manager.instance.current_chain.rpc);
        yield return balanceRequest.SendRequest(custodian.GetAccount().Address, BlockParameter.CreateLatest());
        var balanceInEther = Web3.Convert.FromWei(balanceRequest.Result.Value);

        float balance = float.Parse(balanceInEther.ToString());
            
        if (balance < float.Parse("0.00005"))
        {
            Debug.Log("Custodian Balance must be > 0.00005");
        }

        var nonceRequest = new EthGetTransactionCountUnityRequest(Request_Manager.instance.current_chain.rpc);
        yield return nonceRequest.SendRequest(custodian.GetAccount().Address, BlockParameter.CreateLatest());

        nonce = (int)nonceRequest.Result.Value;

    }

    public async Task distribute(sFUEL_Distribution type, string to)
    {
        switch (type)
        {
            case sFUEL_Distribution.transfer:

                Web3 custodian_web3 = custodian.GetCustodian();

                TransactionReceipt receipt_ = await custodian_web3.Eth.GetEtherTransferService().TransferEtherAndWaitForReceiptAsync(to, 0.0000002m, 0.0001m);

                Debug.Log("receipt_transfer " + receipt_.TransactionHash);

                nonce++;
                break;
            case sFUEL_Distribution.pow:

                AnonymousWallet wallet = new AnonymousWallet(Request_Manager.instance.current_chain);

                TransactionReceipt transactionReceipt = await wallet.Send(to);

                Debug.Log("receipt_pow " + transactionReceipt.TransactionHash);

                break;
        }
            
    }
}
