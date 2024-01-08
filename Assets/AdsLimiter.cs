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
            Ad.SetActive(true);
            PlayerPrefs.SetInt("AdValue", 1);
        }
        else
        {
            PlayerPrefs.SetInt("AdValue", 0);
        }
    }
}
