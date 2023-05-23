using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

public class LoadingController : MonoBehaviour
{
    public Image wheel;
    public GameObject background;

    private void Awake()
    {
        UIEnter();
    }

    // Start is called before the first frame update
    void Start()
    {
        LoadingAnim();
    }

    public void UIEnter() 
    {
        background.GetComponent<Image>().DOFade(0.6f,0.2f);
    }

    public void UIExit()
    {
        background.GetComponent<Image>().DOFade(0, 0.2f).OnComplete(KillGameObject);

    }

    public void LoadingAnim()
    {
        wheel.transform.DORotate(new Vector3(0, 0, -10000), 35, RotateMode.FastBeyond360).SetLoops(-1);
    }

    public void KillGameObject()
    {
        Destroy(this.gameObject);
    }
}
