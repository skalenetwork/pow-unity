using System;
using System.Numerics;
using System.Security.Cryptography;
using System.Threading.Tasks;
using Nethereum.Hex.HexConvertors.Extensions;
using Nethereum.RPC.Eth.DTOs;
using Nethereum.Util;
using Nethereum.Web3;
using UnityEngine;
using BNSharp;
using Nethereum.ABI.Encoders;
using Nethereum.ABI;

/**
 * This class implements the POW skale algorithm and is called in the Skale_Send_sFuel script
 */
public class Skale_POW : MonoBehaviour
{
    private static Sha3Keccack kecckak = new Sha3Keccack();

    /**
     * Receives the transaction and returns the new gas price
     */
    public async Task<string> MineGasForTransaction(Web3 web3, TransactionInput tx)
    {
        if (tx.From == null || tx.Nonce == null)
        {
            throw new ArgumentException("Not enough fields for mining gas (from, nonce)");
        }
        if (tx.Gas == null)
        {
            tx.Gas = await web3.TransactionManager.EstimateGasAsync(tx);
        }

        var address = tx.From;
        var nonce = (long)(tx.Nonce).Value;
        var gas = (long)(tx.Gas).Value;

        return await MineFreeGas(gas, address, nonce);

    }

    /**
     * This function generates a unice gas price
     */
    private async Task<string> MineFreeGas(long gasAmount, string address,long nonce)
    {
        long externalGas = 0;

        var sha3 = new Sha3Keccack();

        BN bn_noce_hash = new BN(GetSoliditySha3(nonce),16);

        string newAdress = address.Remove(0, 2);

        BN bn_address_hash = new BN(GetSoliditySha3(newAdress.HexToByteArray()), 16);

        var nonceAddressXOR = bn_noce_hash.Xor(bn_address_hash);

        var maxNumber = new BN(2).Pow(new BN(256)).Sub(new BN(1));
        var DIFFICULTY = new BN(1);
        var divConstant = maxNumber.Div(DIFFICULTY);
        var candidate = new BN(0);

        long iterations = 0;

        while (true)
        {
            var candidateBytes = new byte[32];
            using (var random = new RNGCryptoServiceProvider())
            {
                random.GetBytes(candidateBytes);
            }

            string hexString = BitConverter.ToString(candidateBytes).Replace("-","").ToLowerInvariant();

            candidate = new BN(hexString,16);
        
            BN candidateHash = new BN(GetSoliditySha3((candidate.ToString()).HexToByteArray()),16);

            var resultHash = nonceAddressXOR.Xor(candidateHash);


            externalGas = divConstant.Div(resultHash).ToNumber();

            if (externalGas >= gasAmount)
            {
                Debug.Log("externalGas " + externalGas);
                Debug.Log("candidate " + candidate);
                 break;
            }

            if (iterations++ % 2_000 == 0)
            {
                await Task.Delay(0);
            }
            

        }

        return candidate.ToString();
    }

   

    /**
     * It works like the function soliditySha3 from the JS package web3-utils 
     */
    private string GetSoliditySha3(object val)
    {
        var abiEncode = new ABIEncode();
        var result = abiEncode.GetSha3ABIEncodedPacked(val);
        return result.ToHex();

    }

}
