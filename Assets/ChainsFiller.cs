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

    public void FillDropDown()
    {
        Type enumType = typeof(ChainName);

        if (enumType.IsEnum)
        {
            Array enumValues = Enum.GetValues(enumType);
            List<TMP_Dropdown.OptionData> options = new List<TMP_Dropdown.OptionData>();
            foreach (var value in enumValues)
            {
                options.Add(new TMP_Dropdown.OptionData(value.ToString()));
            }

            dropdwn.AddOptions(options);

        }

    }
}
