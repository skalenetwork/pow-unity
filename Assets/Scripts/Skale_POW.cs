using System;
using System.Numerics;
using System.Security.Cryptography;
using System.Threading.Tasks;
using Nethereum.Hex.HexConvertors.Extensions;
using Nethereum.RPC.Eth.DTOs;
using Nethereum.Util;
using Nethereum.Web3;
using UnityEngine;
using Nethereum.Hex.HexTypes;
using System.Text;



/**
 * This class implements the POW skale algorithm and is called in the Skale_Send_sFuel script
 */
public class Skale_POW : MonoBehaviour
{
    private static readonly BigInteger DIFFICULTY = new BigInteger(1);

    /**
     * Receives the transaction and returns the new gas price
     */
    public async Task<BigInteger> MineGasForTransaction(Web3 web3, TransactionInput tx)
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
    private async Task<BigInteger> MineFreeGas(long gasAmount, string address,long nonce)
    {

        var externalGas = new BigInteger(0);

        var sha3 = new Sha3Keccack();


       // Debug.Log("Nonce hash "  + sha3.CalculateHash(nonce.ToString()));
        

        ulong convertedNoceValue = Convert.ToUInt64(sha3.CalculateHash(nonce.ToString()));
        BigInteger nonceHash = new BigInteger(convertedNoceValue);

        Debug.Log(nonceHash);

        byte[] addressBytes = address.HexToByteArray();
        byte[] sha3HashBytes;
        sha3HashBytes = sha3.CalculateHash(addressBytes);
        byte[] paddedHashBytes = new byte[sha3HashBytes.Length + 1];
        Buffer.BlockCopy(sha3HashBytes, 0, paddedHashBytes, 1, sha3HashBytes.Length);


        ulong convertedAddressValue = Convert.ToUInt64(sha3.CalculateHash(nonce.ToString()));

        BigInteger addressHash = new BigInteger(addressBytes);
        addressHash = BigInteger.Abs(addressHash);

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

            string hexString = BitConverter.ToString(candidateBytes).Replace("-","").ToLowerInvariant();

            candidate = new BigInteger(hexString.HexToByteArray());
            candidate = BigInteger.Abs(candidate);
        
        
            BigInteger candidateHash = new BigInteger(sha3.CalculateHash(candidate.ToString()).HexToByteArray());
            candidateHash = BigInteger.Abs(candidateHash);

            var resultHash = nonceAddressXOR^candidateHash;
            externalGas = BigInteger.Divide(divConstant, resultHash);

            if (externalGas >= gasAmount)
            {
                //Debug.Log("hexString " + hexString);
                //Debug.Log("nonceAddressXOR " + nonceAddressXOR);
                //Debug.Log("candidateHash " + candidateHash);
                 break;
            }

            if (iterations++ % 2_000 == 0)
            {
                await Task.Delay(0);
            }
            if (iterations>= 10)
            {
                break;
            }

        }
        return candidate;
    }

    static string ComputeSha256Hash(string rawData)
    {
        // Create a SHA256   
        using (SHA256 sha256Hash = SHA256.Create())
        {
            // ComputeHash - returns byte array  
            byte[] bytes = sha256Hash.ComputeHash(Encoding.UTF8.GetBytes(rawData));

            // Convert byte array to a string   
            StringBuilder builder = new StringBuilder();
            for (int i = 0; i < bytes.Length; i++)
            {
                builder.Append(bytes[i].ToString("x2"));
            }
            return builder.ToString();
        }
    }

}
