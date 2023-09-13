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
using Nethereum.Unity.Rpc;
using System.Collections;

/**
 * This class implements the POW skale algorithm and is called in the Skale_Send_sFuel script
 */
public class Miner: MonoBehaviour
{
   

    /**
    * Receives the transaction and returns the new gas price
    */
    public IEnumerator MineGasForTransaction(System.Action<string> callback,Chains schain, TransactionInput tx)
    {
        //Web3 web3 = new Web3(new UnityWebRequestRpcTaskClient(new Uri(schain.rpc)));

        if (tx.From == null || tx.Nonce == null)
        {
            throw new ArgumentException("Not enough fields for mining gas (from, nonce)");
        }
        if (tx.Gas == null)
        {
            Debug.Log("OOOOOO");
           // tx.Gas = await web3.TransactionManager.EstimateGasAsync(tx);
        }

        var address = tx.From;
        var nonce = (long)(tx.Nonce).Value;
        var gas = (long)(tx.Gas).Value;


        string result = null;

        StartCoroutine(MineFreeGas((value) =>{result = value;}, gas, address, nonce));

        while (result == null)
        {
            yield return null;
        }

        callback(result);

    }

    /**
     * This function generates a unice gas price
     */
    public IEnumerator MineFreeGas(System.Action<string> callback,long gasAmount, string address,long nonce)
    {

        BN bn_noce_hash = new BN(GetSoliditySha3(nonce),16);

        BN bn_address_hash = new BN(GetSoliditySha3(address.HexToByteArray()), 16);

        BN nonceAddressXOR = bn_noce_hash.Xor(bn_address_hash);

        BN maxNumber = new BN(2).Pow(new BN(256)).Sub(new BN(1));
        BN DIFFICULTY = new BN(1);
        BN divConstant = maxNumber.Div(DIFFICULTY);
        BN candidate = new BN(0);

        double iterations = 0;

        while (true)
        {
            var candidateBytes = new byte[32];
            using (var random = new RNGCryptoServiceProvider())
            {
                random.GetBytes(candidateBytes);
            }

            string hexString = BitConverter.ToString(candidateBytes).Replace("-","").ToLowerInvariant();

            candidate = new BN(hexString, 16);

            BigInteger candidate_to_bi = BigInteger.Parse(candidate.ToString());

            BN candidateHash = new BN(GetSoliditySha3(candidate_to_bi),16);


            BN resultHash = nonceAddressXOR.Xor(candidateHash);

            long externalGas = divConstant.Div(resultHash).ToNumber();

            if (externalGas >= gasAmount)
            { 
                 break;
            }

            if (iterations++ % 1_00 == 0)
            {
                yield return null;
            }

        }


        callback(candidate.ToString());
    }

    public async Task<string> POW_Caller(Chains schain, TransactionInput tx)
    {
        string result = null;


        StartCoroutine(MineGasForTransaction((result_) =>
        {
            result = result_;
        }, schain, tx));

        while (result == null)
        {
            await Task.Yield(); // Yield to the main Unity thread
        }

        return result;
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
