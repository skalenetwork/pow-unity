
using UnityEngine;
using UnityEngine.UI;


public class Request_Manager : MonoBehaviour
{
    public static Request_Manager instance;

    public Chains current_chain;

    public Button mint_btn;
    public Button burn_btn;

    Background_signer back_sign;

    public sFUEL_Distribution sfuel_distribution;

    public string pk;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        InitializeBackgroundSigning();

        mint_btn.onClick.AddListener(delegate {
            Call("mint");
        });

        burn_btn.onClick.AddListener(delegate {
            Call("burn");
        });
    }


    public void InitializeBackgroundSigning()
    {
        Custodial cust = new Custodial();

        StartCoroutine(cust.isValidCustodian());

        back_sign = new Background_signer(cust);
    }


    public async void Call(string function)
    {
        string address = await back_sign.GetUser(0);

        if (function == "mint")
        {
            await back_sign.BackgroundSignerAction(0, function, address,1);
        }
        else if (function == "burn")
        {
            await back_sign.BackgroundSignerAction(0, function,1);
        }
        else
        {
            Debug.Log("NO FUNCTION CALLED");
        }
    }
}


public enum sFUEL_Distribution
{
    transfer, pow
}