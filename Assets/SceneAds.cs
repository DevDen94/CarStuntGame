using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneAds : MonoBehaviour
{
    public GameObject HintButton;

    private void Awake()
    {
        

    }

    private void Start()
    {
        System.DateTime dateCurrent = System.DateTime.Now;
        HintButton = GameObject.Find("Hints");
        GoogleAdMobController.instance.DestroyBannerAd();
        Invoke(nameof(showBanner), 1f);
        if (dateCurrent.Year >= 2023 && dateCurrent.Month >= 8 && dateCurrent.Day >= 19)
        {
            HintButton.SetActive(true);
        }
        else
        {
            HintButton.SetActive(false);
        }
    }
    public void showBanner()
    {
        GoogleAdMobController.instance.RequestBannerAd();
    }

    public void ShowRewardedVideoForHint()
    {
        GoogleAdMobController.instance.ShowRewardedAd();
    }

}
