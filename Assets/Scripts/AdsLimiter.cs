using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdsLimiter : MonoBehaviour
{
    public GameObject Ad;
    private void OnEnable()
    {
        if (PlayerPrefs.GetInt("AdValue") == 0)
        {
           // Yodo1MasExample.Instance.showInterstitial();

            PlayerPrefs.SetInt("AdValue", 1);
        }
        else
        {
            PlayerPrefs.SetInt("AdValue", 0);
        }
    }
}
