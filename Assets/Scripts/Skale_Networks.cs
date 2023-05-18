using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * Class has the details about some of the testnets chains
 */
public class Skale_Networks: MonoBehaviour
{
    //By giving a name of the chain (and in the future a newtork type) it returns a class with the chain properties;
    public NetworkDetails GetNetworkDetails(ChainName name, NetworkType type)
    {
        NetworkDetails details = new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-utter-unripe-menkar", "0xa9eC34461791162Cae8c312C4237C9ddd1D64336", "0x0c11dedd", "https://staging-v3.skalenodes.com/#/chains/staging-utter-unripe-menkar");

        switch (name)
        {
            case ChainName.calypso:
                if (type == NetworkType.testnet) details =new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-utter-unripe-menkar", "0xa9eC34461791162Cae8c312C4237C9ddd1D64336", "0x0c11dedd", "https://staging-v3.skalenodes.com/#/chains/staging-utter-unripe-menkar");
                break;
            case ChainName.chaos:
                if (type == NetworkType.testnet) details = new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-fast-active-bellatrix", "0x2edF5af1896D3d259a1a535e87f18312858E448F", "0x0c11dedd", "https://staging-v3.skalenodes.com/#/chains/staging-fast-active-bellatrix");
                break;
            case ChainName.europa:
                if (type == NetworkType.testnet) details = new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-legal-crazy-castor", "0xa9eC34461791162Cae8c312C4237C9ddd1D64336", "0x0c11dedd", "https://staging-v3.skalenodes.com/#/chains/staging-legal-crazy-castor");
                break;
            case ChainName.nebula:
                if (type == NetworkType.testnet) details = new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-faint-slimy-achird", "0xfd56A3456fbAB0fc013213edCc830B9d32403C8B", "0x0c11dedd", "https://staging-v3.skalenodes.com/#/chains/staging-faint-slimy-achird");
                break;
            case ChainName.titan:
                if (type == NetworkType.testnet) details = new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-aware-chief-gianfar", "", "0x0c11dedd", "https://staging-v3.skalenodes.com/#/chains/staging-aware-chief-gianfar");
                break;
        }

        return details;
    }
}



public class NetworkDetails
{
    string rpc;
    string address;
    string functionSignature;
    string chainInfo_URL;
    

    public NetworkDetails(string _rpc, string _address,string _functionSignature,string _chaiInfo_URL)
    {
        rpc = _rpc;
        address = _address;
        functionSignature = _functionSignature;
        chainInfo_URL = _chaiInfo_URL;
    }

    public string getRpc()
    {
        return rpc;
    }

    public string getAddress()
    {
        return address;

    }

    public string getFunctionSignature()
    {
        return functionSignature;

    }
    public string getChainInfoUrl()
    {
        return chainInfo_URL;

    }
}

public enum ChainName
{
    calypso, chaos, europa, nebula, titan
}

public enum NetworkType
{
    testnet//,mainnet
}

