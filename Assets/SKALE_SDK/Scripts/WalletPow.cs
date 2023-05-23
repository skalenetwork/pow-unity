using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;
using Nethereum.Web3;
using Nethereum.RPC.Eth.DTOs;
using Nethereum.Hex.HexTypes;
using System.Numerics;
using Nethereum.Web3.Accounts;

public class WalletPow : Miner
{
    private Account account;
    private Web3 web3;
    private Chains current_chain;

    public WalletPow(Account new_account, Chains chain)
    {
        account = new_account;
        current_chain = chain;
        web3 = new Web3(this.account, current_chain.rpc);
    }

    public async Task<TransactionReceipt> Send(string receiver_address)
    {
        //Run the pow algorithm and get the new gas price
        TransactionInput tx = await SetTransaction(web3, current_chain, account.Address, receiver_address);
        var pow_gasprice = await MineGasForTransaction(web3, tx);

        //Set the new gas price
        tx.GasPrice = new HexBigInteger(BigInteger.Parse(pow_gasprice));

        //Send the request to the blockchain
         return await web3.Eth.TransactionManager.SendTransactionAndWaitForReceiptAsync(tx);
    }

    public async Task<TransactionInput> SetTransaction(Web3 web3, Chains chain_object, string caller, string receiver)
    {
        string faucetAddress = chain_object.address;

        string address = receiver.Remove(0, 2);

        string data = chain_object.functionSignature + "000000000000000000000000" + address;

        string addressTo = faucetAddress;
        string addressFrom = caller;
        HexBigInteger gas = new HexBigInteger("65000");
        HexBigInteger value = new HexBigInteger("0");

        TransactionInput tx = new TransactionInput(data, addressTo, addressFrom, gas, value);

        tx.Nonce = await web3.Eth.Transactions.GetTransactionCount.SendRequestAsync(caller);
        return tx;
    }

    public string GetAddress()
    {
        return account.Address;
    }
}
