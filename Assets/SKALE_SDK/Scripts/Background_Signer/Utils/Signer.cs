using System.Collections;
using System.Collections.Generic;
using Nethereum.Web3.Accounts;
using UnityEngine;
using System;
using Nethereum.Web3;


public class Signer
{
    public static Account GenerateSigner()
    {
        var ecKey = Nethereum.Signer.EthECKey.GenerateKey();
        byte[] privateKey = ecKey.GetPrivateKeyAsBytes();
        string hexString = BitConverter.ToString(privateKey).Replace("-", string.Empty);

        return new Account(hexString);
    }

}
