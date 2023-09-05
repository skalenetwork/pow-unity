using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Nethereum.Web3.Accounts;
using Nethereum.Web3;
using Nethereum.Unity.Rpc;
using System;

public class Custodian
{
    Web3 web3;
    Account account;

    public Custodian(Account _account, Chains _chain)
    {
        account = _account;

#if UNITY_EDITOR
        web3 = new Web3(_account, _chain.rpc);
#else
        web3 = new Web3(_account, new UnityWebRequestRpcTaskClient(new Uri(_chain.rpc)));
#endif
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
