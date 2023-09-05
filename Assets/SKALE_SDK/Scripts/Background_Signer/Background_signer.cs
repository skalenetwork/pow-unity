using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Nethereum.Web3.Accounts;
using Nethereum.Web3;
using System.Threading.Tasks;
using Nethereum.RPC.Eth.DTOs;
using Nethereum.Hex.HexTypes;
using Nethereum.Unity.Rpc;
using System;

public class Background_signer
{

    string contract_abi = "[{\"inputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"constructor\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":true,\"internalType\":\"address\",\"name\":\"owner\",\"type\":\"address\"},{\"indexed\":true,\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"indexed\":false,\"internalType\":\"uint256\",\"name\":\"value\",\"type\":\"uint256\"}],\"name\":\"Approval\",\"type\":\"event\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":true,\"internalType\":\"address\",\"name\":\"from\",\"type\":\"address\"},{\"indexed\":true,\"internalType\":\"address\",\"name\":\"to\",\"type\":\"address\"},{\"indexed\":false,\"internalType\":\"uint256\",\"name\":\"value\",\"type\":\"uint256\"}],\"name\":\"Transfer\",\"type\":\"event\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"owner\",\"type\":\"address\"},{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"}],\"name\":\"allowance\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"amount\",\"type\":\"uint256\"}],\"name\":\"approve\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"account\",\"type\":\"address\"}],\"name\":\"balanceOf\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"uint256\",\"name\":\"amount\",\"type\":\"uint256\"}],\"name\":\"burn\",\"outputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"decimals\",\"outputs\":[{\"internalType\":\"uint8\",\"name\":\"\",\"type\":\"uint8\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"subtractedValue\",\"type\":\"uint256\"}],\"name\":\"decreaseAllowance\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"addedValue\",\"type\":\"uint256\"}],\"name\":\"increaseAllowance\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"to\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"amount\",\"type\":\"uint256\"}],\"name\":\"mint\",\"outputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"name\",\"outputs\":[{\"internalType\":\"string\",\"name\":\"\",\"type\":\"string\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"score\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"symbol\",\"outputs\":[{\"internalType\":\"string\",\"name\":\"\",\"type\":\"string\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"totalSupply\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"to\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"amount\",\"type\":\"uint256\"}],\"name\":\"transfer\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"from\",\"type\":\"address\"},{\"internalType\":\"address\",\"name\":\"to\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"amount\",\"type\":\"uint256\"}],\"name\":\"transferFrom\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"}]";
    string contract_address = "0xCD1cb5032F4C854cbc4646214eD9ab3BbDe37062";

    Custodial custodial;
    List<Account> signers;


    public Background_signer(Custodial _custodial)
    {
        signers = new List<Account>();
        custodial = _custodial;
    }

    public async Task<string> GetUser(int userId)
    {
        if (signers.Count <= userId) {
            Account signer = Signer.GenerateSigner();
            signers.Add(signer);

            if(Request_Manager.instance.sfuel_distribution == sFUEL_Distribution.transfer)
            {
                await custodial.distribute(sFUEL_Distribution.transfer, signer.Address);

            }else if(Request_Manager.instance.sfuel_distribution == sFUEL_Distribution.pow)
            {
                await custodial.distribute(sFUEL_Distribution.pow, signer.Address);
            }

            return signers[userId].Address;

        }else
        {
            return signers[userId].Address;
        }

    }

    public async Task Remove(int userId)
    {
        string account = signers[userId].Address;
        if (account == null) return;

        var tx = new TransactionInput()
        {
            From = account,
            To = custodial.getCustodian().GetAccount().Address,
            Value= new HexBigInteger(1)
        };

#if UNITY_EDITOR
        Web3 web3 = new Web3(signers[userId], Request_Manager.instance.current_chain.rpc);
#else
        Web3 web3 = new Web3(signers[userId], new UnityWebRequestRpcTaskClient(new Uri(Request_Manager.instance.current_chain.rpc)));
#endif
        await web3.Eth.TransactionManager.SendTransactionAndWaitForReceiptAsync(tx);


    }

    public async Task BackgroundSignerAction(int userId, string functionName, params object[] functionInput)
    {
        string account = signers[userId].Address;
        if (account == null) return;

#if UNITY_EDITOR
        Web3 web3 = new Web3(signers[userId], Request_Manager.instance.current_chain.rpc);
#else
        Web3 web3 = new Web3(signers[userId], new UnityWebRequestRpcTaskClient(new Uri(Request_Manager.instance.current_chain.rpc)));
#endif


        var contract = web3.Eth.GetContract(contract_abi, contract_address);
        var function = contract.GetFunction(functionName);

        var transactionInput = new TransactionInput()
        {
            From = account,
            To = contract_address,
            Gas = new HexBigInteger("65000"),
            Value = new HexBigInteger("0"),
            Nonce = await web3.Eth.Transactions.GetTransactionCount.SendRequestAsync(account),
            GasPrice = await web3.Eth.GasPrice.SendRequestAsync()
        };


        TransactionReceipt trns = await function.SendTransactionAndWaitForReceiptAsync(transactionInput, null, functionInput);
        Debug.Log("Receipt Background signing " + trns.TransactionHash);
    }



}
