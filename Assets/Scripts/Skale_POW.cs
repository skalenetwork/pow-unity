using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Numerics;
using System.Globalization;
using Nethereum.Util;
using Nethereum.Hex.HexConvertors.Extensions;
using System.Security.Cryptography;
using System;
using System.Threading.Tasks;
using Nethereum.Web3;
using Nethereum.RPC.Eth.DTOs;

using Nethereum.ABI.Encoders;
using System.Linq;

/**
 * This class implements the POW skale algorithm and is called in the Skale_Send_sFuel script
 */
public class Skale_POW : MonoBehaviour
{
    private static readonly BigInteger DIFFICULTY = new BigInteger(1);


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
        //var nonce = Web3.IsNumber(tx.Nonce) ? BigInteger.Parse(tx.Nonce) : new BigInteger(tx.Nonce.HexToByteArray());
        //var gas = Web3.IsNumber(tx.Gas) ? BigInteger.Parse(tx.Gas) : new BigInteger(tx.Gas.HexToByteArray());
        var nonce = (long)(tx.Nonce).Value;
        var gas = (long)(tx.Gas).Value;


       // var BI = new BigInteger(Sha3Keccack.Current.CalculateHash(Encoding.UTF8.GetBytes(MineFreeGas(gas, address, nonce))));
        //tx.GasPrice = new HexBigInteger(BI);

        return await MineFreeGas(gas, address, nonce);

    }

    private async Task<string> MineFreeGas(long gasAmount, string address,long nonce,string bytes="")
    {
        var sha3 = new Sha3Keccack();
        

        var nonceIntTypeEncoder = new IntTypeEncoder().Encode(BigInteger.Parse(nonce.ToString()));
        var nonceHash = BigInteger.Parse(sha3.CalculateHash(nonceIntTypeEncoder).ToHex(), NumberStyles.HexNumber);

        byte[] addressBytes = address.HexToByteArray();
        byte[] sha3HashBytes;

        sha3HashBytes = sha3.CalculateHash(addressBytes);
        byte[] paddedHashBytes = new byte[sha3HashBytes.Length + 1];
        Buffer.BlockCopy(sha3HashBytes, 0, paddedHashBytes, 1, sha3HashBytes.Length);

        BigInteger addressHash = new BigInteger(paddedHashBytes.Reverse().ToArray());

        var nonceAddressXOR = nonceHash ^ addressHash;

        var maxNumber = BigInteger.Pow(2, 256) - 1;
        var divConstant = maxNumber / DIFFICULTY;
        var candidate = BigInteger.Zero;

        long iterations = 0;

        while (true)
        {
            var candidateBytes = new byte[32];
            using (var random = new RNGCryptoServiceProvider())
            {
                random.GetBytes(candidateBytes);
            }

            byte[] sha3HashBytes_candidate = sha3.CalculateHash(bytes.HexToByteArray() ?? candidateBytes);

            string valToGo = bytes != "" ? bytes : sha3.CalculateHash(candidateBytes).ToHex();

            candidate = BigInteger.Parse(valToGo, NumberStyles.HexNumber);

            byte[] paddedHashBytes2 = new byte[sha3HashBytes.Length + 1];

            Buffer.BlockCopy(sha3HashBytes_candidate, 0, paddedHashBytes2, 1, sha3HashBytes_candidate.Length);

            BigInteger candidateHash = new BigInteger(paddedHashBytes2.Reverse().ToArray());
            var resultHash = nonceAddressXOR^candidateHash;

            var externalGas = BigInteger.Divide(divConstant, resultHash);

            if (externalGas >= gasAmount)
            {
                break;
            }

            if (iterations++ % 2_000 == 0)
            {
                await Task.Delay(0);
            }

        }

        Debug.Log(candidate.ToString());
        return candidate.ToString();
    }

}
