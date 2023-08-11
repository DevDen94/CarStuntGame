using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneAds : MonoBehaviour
{
    private void Start()
    {
        GoogleAdMobController.instance.DestroyBannerAd();
        Invoke(nameof(showBanner), 1f);
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
