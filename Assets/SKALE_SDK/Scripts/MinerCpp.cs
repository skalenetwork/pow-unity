using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Nethereum.Signer;
using Nethereum.RPC.Eth.DTOs;

public class MinerCpp : MonoBehaviour
{

    /// <summary>
    /// Hash rate delegate
    /// </summary>
    /// <param name="hashRate"></param>
    public delegate void HashRateDelegate(ulong hashRate);

    /// <summary>
    /// Response delegate
    /// </summary>
    /// <param name="success"></param>
    /// <param name="result"></param>
    /// <param name="error"></param>
    public delegate void ResultDelegate(bool success, string result, string error);

    /// <summary>
    /// True if mining
    /// </summary>
    /// <returns></returns>
    [DllImport("Cryptopia.SkaleGasMiner", EntryPoint = "IsMining", CallingConvention = CallingConvention.StdCall)]
    private static extern bool _IsMining();

    /// <summary>
    /// Get hash rate
    /// </summary>
    /// <returns></returns>
    [DllImport("Cryptopia.SkaleGasMiner", EntryPoint = "GetHashRate", CallingConvention = CallingConvention.StdCall)]
    private static extern ulong _GetHashRate();

    /// <summary>
    /// Mine gas
    /// </summary>
    /// <param name="amount"></param>
    /// <param name="fromAddress"></param>
    /// <param name="nonce"></param>
    /// <param name="difficulty"></param>
    /// <param name="hashRateCallback"></param>
    /// <param name="resultCallback"></param>
    /// <param name="maxThreads"></param>
    [DllImport("Cryptopia.SkaleGasMiner", EntryPoint = "MineGas", CallingConvention = CallingConvention.StdCall)]
    private static extern void _MineGas(ulong amount, string fromAddress, ulong nonce, uint difficulty, HashRateDelegate hashRateCallback, ResultDelegate resultCallback, uint maxThreads = 0);

    /// <summary>
    /// Stop mining
    /// </summary>
    [DllImport("Cryptopia.SkaleGasMiner", EntryPoint = "Stop", CallingConvention = CallingConvention.StdCall)]
    private static extern void _Stop();

    public IEnumerator MineCall(System.Action<string> callback, ulong gasPrice, string fromAddress, ulong nonce, uint difficulty = 1, uint maxThreads = 2)
    {
        bool isMiningCompleted = false;

        string gasResult = "";

        // Start the mining operation
        Task.Run(() =>
        {
            _MineGas(
                gasPrice,
                fromAddress,
                nonce,
                difficulty,
                (nextHashRate) =>
                {
                    // Display 'nextHashRate' to player
                },
                (success, result, error) =>
                {
                    if (success)
                    {
                        gasResult = result;
                    }

                    isMiningCompleted = true;
                },
                maxThreads);
        });

        // Wait for the mining operation to complete
        yield return new WaitUntil(() => isMiningCompleted);
        callback(gasResult);
    }

    public async Task<string> Mine(TransactionInput txInput, uint difficulty = 1, uint maxThreads = 2) {
        string minedGas = null;

        ulong gas = ((ulong)txInput.Gas.Value);
        string fromAddress = txInput.From;
        ulong nonce = ((ulong)txInput.Nonce.Value);

        StartCoroutine(MineCall((result_) =>
        {
            minedGas = result_;
        }, gas, fromAddress, nonce));

        while (minedGas == null)
        {
            await Task.Yield(); // Yield to the main Unity thread
        }

        return minedGas;
    }
}
