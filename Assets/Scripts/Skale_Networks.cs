using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * Class has the details about some of the testnets chains
 */
public class Skale_Networks: MonoBehaviour
{

    public NetworkDetails GetNetworkDetails(NetworkName name, NetworkType type)
    {
        NetworkDetails details = new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-fast-active-bellatrix", "0x2edF5af1896D3d259a1a535e87f18312858E448F", "0x0c11dedd");

        switch (name)
        {
            case NetworkName.calypson:
                if (type == NetworkType.testnet) details = new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-utter-unripe-menkar", "0xa9eC34461791162Cae8c312C4237C9ddd1D64336", "0x0c11dedd");
                break;
            case NetworkName.chaos:
                if (type == NetworkType.testnet) details = new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-fast-active-bellatrix", "0x2edF5af1896D3d259a1a535e87f18312858E448F", "0x0c11dedd");
                break;
            case NetworkName.europa:
                if (type == NetworkType.testnet) details = new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-legal-crazy-castor", "0xa9eC34461791162Cae8c312C4237C9ddd1D64336", "0x0c11dedd");
                break;
            case NetworkName.nebula:
                if (type == NetworkType.testnet) details = new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-faint-slimy-achird", "0xfd56A3456fbAB0fc013213edCc830B9d32403C8B", "0x0c11dedd");
                break;
            case NetworkName.titan:
                if (type == NetworkType.testnet) details = new NetworkDetails("https://staging-v3.skalenodes.com/v1/staging-aware-chief-gianfar", "", "0x0c11dedd");
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

    public NetworkDetails(string _rpc, string _address,string _functionSignature)
    {
        rpc = _rpc;
        address = _address;
        functionSignature = _functionSignature;
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

}

public enum NetworkName
{
    calypson, chaos, europa, nebula, titan
}

public enum NetworkType
{
    testnet//,mainnet
}

