using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class Chains: ScriptableObject
{
    public ChainName name;
    public NetworkType type;
    public string rpc;
    public string address;
    public string functionSignature;
    public int chain_id;
}

public enum ChainName
{
    calypso, chaos, europa, nebula, titan
}

public enum NetworkType
{
    testnet,mainnet
}
