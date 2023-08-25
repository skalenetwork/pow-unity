using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Nethereum.Web3.Accounts;
using System;

public class AnonymousWallet: WalletPow
{

    public AnonymousWallet(Chains chain): base(GenerateRandomAccount(), chain)
    {
    }

    public static Account GenerateRandomAccount()
    {
        var ecKey = Nethereum.Signer.EthECKey.GenerateKey();
        byte[] privateKey = ecKey.GetPrivateKeyAsBytes();
        string hexString = BitConverter.ToString(privateKey).Replace("-", string.Empty);

        return new Account(hexString);
    }
}
