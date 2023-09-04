using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Nethereum.Web3.Accounts;
using Nethereum.Web3;


public class Custodian
{
    Web3 web3;
    Account account;

    public Custodian(Account _account, Chains _chain)
    {
        account = _account;
        web3 = new Web3(_account, _chain.rpc);
    }

    public Web3 GetCustodian()
    {
        return web3;
    }

    public Account GetAccount()
    {
        return account;
    }

}
