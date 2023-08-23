using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelShowAd : MonoBehaviour
{
    private void OnEnable()
    {
        GoogleAdMobController.instance.RequestBigBannerAd();
    }
}
