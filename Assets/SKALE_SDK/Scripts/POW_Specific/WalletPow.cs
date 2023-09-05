using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;
using Nethereum.Web3;
using Nethereum.RPC.Eth.DTOs;
using Nethereum.Hex.HexTypes;
using System.Numerics;
using Nethereum.Web3.Accounts;
using Nethereum.Unity.Rpc;
using System;
using Nethereum.Unity.Contracts;

public class WalletPow : Miner
{
    private Account account;
    private Web3 web3;
    private Chains current_chain;
    private string pow_contract_abi = "[{\"type\":\"constructor\",\"stateMutability\":\"payable\",\"inputs\":[]},{\"type\":\"event\",\"name\":\"AmountUpdated\",\"inputs\":[{\"type\":\"uint256\",\"name\":\"originalAmount\",\"internalType\":\"uint256\",\"indexed\":true},{\"type\":\"uint256\",\"name\":\"newAmount\",\"internalType\":\"uint256\",\"indexed\":true},{\"type\":\"address\",\"name\":\"signer\",\"internalType\":\"address\",\"indexed\":true}],\"anonymous\":false},{\"type\":\"event\",\"name\":\"OwnershipTransferred\",\"inputs\":[{\"type\":\"address\",\"name\":\"previousOwner\",\"internalType\":\"address\",\"indexed\":true},{\"type\":\"address\",\"name\":\"newOwner\",\"internalType\":\"address\",\"indexed\":true}],\"anonymous\":false},{\"type\":\"event\",\"name\":\"Payed\",\"inputs\":[{\"type\":\"address\",\"name\":\"payee\",\"internalType\":\"address\",\"indexed\":true},{\"type\":\"uint256\",\"name\":\"amount\",\"internalType\":\"uint256\",\"indexed\":true},{\"type\":\"uint256\",\"name\":\"timestamp\",\"internalType\":\"uint256\",\"indexed\":true}],\"anonymous\":false},{\"type\":\"event\",\"name\":\"StateToggled\",\"inputs\":[{\"type\":\"address\",\"name\":\"signer\",\"internalType\":\"address\",\"indexed\":true},{\"type\":\"bool\",\"name\":\"newState\",\"internalType\":\"bool\",\"indexed\":true}],\"anonymous\":false},{\"type\":\"fallback\",\"stateMutability\":\"payable\"},{\"type\":\"function\",\"stateMutability\":\"nonpayable\",\"outputs\":[],\"name\":\"deprecate\",\"inputs\":[]},{\"type\":\"function\",\"stateMutability\":\"view\",\"outputs\":[{\"type\":\"uint256\",\"name\":\"\",\"internalType\":\"uint256\"}],\"name\":\"getAmount\",\"inputs\":[]},{\"type\":\"function\",\"stateMutability\":\"view\",\"outputs\":[{\"type\":\"uint256\",\"name\":\"\",\"internalType\":\"uint256\"}],\"name\":\"getBalance\",\"inputs\":[]},{\"type\":\"function\",\"stateMutability\":\"view\",\"outputs\":[{\"type\":\"bool\",\"name\":\"\",\"internalType\":\"bool\"}],\"name\":\"getState\",\"inputs\":[]},{\"type\":\"function\",\"stateMutability\":\"view\",\"outputs\":[{\"type\":\"address\",\"name\":\"\",\"internalType\":\"address\"}],\"name\":\"owner\",\"inputs\":[]},{\"type\":\"function\",\"stateMutability\":\"payable\",\"outputs\":[],\"name\":\"pay\",\"inputs\":[{\"type\":\"address\",\"name\":\"receiver\",\"internalType\":\"address payable\"}]},{\"type\":\"function\",\"stateMutability\":\"nonpayable\",\"outputs\":[],\"name\":\"renounceOwnership\",\"inputs\":[]},{\"type\":\"function\",\"stateMutability\":\"nonpayable\",\"outputs\":[],\"name\":\"toggleState\",\"inputs\":[]},{\"type\":\"function\",\"stateMutability\":\"nonpayable\",\"outputs\":[],\"name\":\"transferOwnership\",\"inputs\":[{\"type\":\"address\",\"name\":\"newOwner\",\"internalType\":\"address\"}]},{\"type\":\"function\",\"stateMutability\":\"nonpayable\",\"outputs\":[],\"name\":\"updateAmount\",\"inputs\":[{\"type\":\"uint256\",\"name\":\"_newAmount\",\"internalType\":\"uint256\"}]},{\"type\":\"function\",\"stateMutability\":\"nonpayable\",\"outputs\":[],\"name\":\"withdraw\",\"inputs\":[]},{\"type\":\"receive\",\"stateMutability\":\"payable\"}]";

    public WalletPow(Account new_account, Chains chain)
    {
        account = new_account;
        current_chain = chain;

#if UNITY_EDITOR
        web3 = new Web3(account, current_chain.rpc);
#else 
        web3 = new Web3(account, new UnityWebRequestRpcTaskClient(new Uri(current_chain.rpc)));
#endif
    }


    public async Task<TransactionReceipt> Send(string receiver_address)
    {
        web3.TransactionReceiptPolling.SetPollingRetryIntervalInMilliseconds(300);
        web3.TransactionManager.UseLegacyAsDefault = true;
        var contract = web3.Eth.GetContract(pow_contract_abi, current_chain.address);
        var powFunction = contract.GetFunction("pay");

        Debug.Log("aqui ");


        var transactionInput = new TransactionInput() {
            From = account.Address,
            To = current_chain.address,
            Nonce = await web3.Eth.Transactions.GetTransactionCount.SendRequestAsync(account.Address),
            Gas = new HexBigInteger("65000"),
            Value = new HexBigInteger("0"),
        };

        transactionInput.GasPrice = new HexBigInteger(BigInteger.Parse(await MineGasForTransaction(current_chain, transactionInput)));

        Debug.Log("transactionInput.GasPrice "+ transactionInput.GasPrice);

        return await powFunction.SendTransactionAndWaitForReceiptAsync(transactionInput,null, receiver_address);
    }

    public string GetAddress()
    {
        return account.Address;
    }
}
