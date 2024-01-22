using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Implementation : MonoBehaviour
{
    public static Implementation Instance;

    /// <summary>
    /// Initialize the ads
    /// </summary>
    void Awake()
    {

        if (Instance == null)
            Instance = this;
        else
            Destroy(this.gameObject);


        DontDestroyOnLoad(this);

        Advertisements.Instance.Initialize();
    }


    void Start()
    {
        show = true;
    }

    /// <summary>
    /// Show banner, assigned from inspector
    /// </summary>
    public void ShawBanner()
    {
        Advertisements.Instance.ShowBanner(BannerPosition.TOP,BannerType.Banner);
    }

    public void HideBanner()
    {
        Advertisements.Instance.HideBanner();
    }


    /// <summary>
    /// Show Interstitial, assigned from inspector
    /// </summary>
    bool show;
    public void ShowInterstitial()
    {
        if (show)
        {
            Advertisements.Instance.ShowInterstitial();
            show = false;
        }
        else
        {
            show = true;
        }
            
    }

    /// <summary>
    /// Show rewarded video, assigned from inspector
    /// </summary>
    public void ShowRewardedVideo()
    {
        Advertisements.Instance.ShowRewardedVideo(CompleteMethod);
    }


    /// <summary>
    /// This is for testing purpose
    /// </summary>
    void Update()
    {
        
    }

    private void CompleteMethod(bool completed)
    {
        Debug.Log("Complete");
        
    }
}
