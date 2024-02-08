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
       
            if (Advertisements.Instance.IsInterstitialAvailable())
            {
                Advertisements.Instance.ShowInterstitial();
                show = false;
            }
       
            
    }
    CatLock _unlock;
    /// <summary>
    /// Show rewarded video, assigned from inspector
    /// </summary>
    public void ShowRewardedVideo(CatLock unlock = null)
    {
        if (unlock != null)
        {
            _unlock = unlock;
        }
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
        if (PlayerPrefs.GetInt("Rewarded") == 0)
        {
            Debug.Log("Rewrded Play");
            //  CatLock.Instance.setAdsCounter();
            if (_unlock != null)
            {
                _unlock.setAdsCounter();
            }
        }
        else if (PlayerPrefs.GetInt("Rewarded") == 1)
        {
            BridgeBuilderGUI.Instance.showHintBtn();
        }else if (PlayerPrefs.GetInt("Rewarded") == 2)
        {
            BridgeBuilderGUI.Instance.skipLevel();
        }
    }
}
