using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Nethereum.Web3.Accounts;
using System;

public class AnonymousWallet
{

    public AnonymousWallet()
    {

    }

    public Account GenerateRandomAccount()
    {
        var ecKey = Nethereum.Signer.EthECKey.GenerateKey();
        byte[] privateKey = ecKey.GetPrivateKeyAsBytes();
        string hexString = BitConverter.ToString(privateKey).Replace("-", string.Empty);

        return new Account(hexString);
    }
}
