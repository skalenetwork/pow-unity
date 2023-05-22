using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkaleManager : MonoBehaviour
{
    public static SkaleManager instance;

    public Skale_POW pow_algorithm;

    public List<Chains> chains_list;

    public void Awake()
    {
        instance = this;
    }

    public Chains GetChainByName(ChainName name)
    {
        foreach (var chain in chains_list)
        {
            if (name == chain.name)
            {
                return chain;
            }
        }

        return chains_list[0];
    }
}
