using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
using TMPro;

public class ChainsFiller : MonoBehaviour
{
    public TMP_Dropdown dropdwn;
    // Start is called before the first frame update
    void Start()
    {
        FillDropDown();
    }

    //Fills the dropdown UI with the available chains - only the app starts
    public void FillDropDown()
    {
        Type enumType = typeof(ChainName);

        if (enumType.IsEnum)
        {

            List<Chains> chains = SkaleManager.instance.chains_list;
            List<TMP_Dropdown.OptionData> options = new List<TMP_Dropdown.OptionData>();
            foreach (var chain in chains)
            {
                options.Add(new TMP_Dropdown.OptionData(chain.name.ToString()));
            }

            dropdwn.AddOptions(options);

        }

    }
}
