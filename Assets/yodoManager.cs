using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yodo1.MAS;
public class yodoManager : MonoBehaviour
{
    // Start is called before the first frame update
    private Yodo1U3dBannerAdView bannerAdView;

    public static yodoManager Instance;


    private void Awake()
    {

        if (Instance != null)
        {
            Destroy(this.gameObject);
        }
        Instance = this;
        DontDestroyOnLoad(this);
    }


    void Start()
    {

        Yodo1AdBuildConfig config =
        new Yodo1AdBuildConfig().enableUserPrivacyDialog(false);
        Yodo1U3dMas.SetAdBuildConfig(config);

        Yodo1U3dInterstitialAd.GetInstance().autoDelayIfLoadFail = true;


        Yodo1U3dMasCallback.OnSdkInitializedEvent += (success, error) =>
        {
            Debug.Log("[Yodo1 Mas] OnSdkInitializedEvent, success:" + success + ", error: " + error.ToString());
            if (success)
            {
                Debug.Log("[Yodo1 Mas] The initialization has succeeded");
            }
            else
            {
                Debug.Log("[Yodo1 Mas] The initialization has failed");
            }
        };
        Yodo1U3dMas.InitializeMasSdk();
        Yodo1U3dRewardAd.GetInstance();

        Yodo1U3dRewardAd.GetInstance().OnAdEarnedEvent += OnRewardAdEarnedEvent;


        this.RequestBanner();
        Yodo1U3dInterstitialAd.GetInstance().LoadAd();
        Yodo1U3dRewardAd.GetInstance().LoadAd();
        Yodo1U3dAppOpenAd.GetInstance().LoadAd();

    }

    private void RequestBanner()
    {
        // Clean up banner before reusing
        if (bannerAdView != null)
        {
            bannerAdView.Destroy();
        }

        // Create a 320x50 banner at top of the screen
        bannerAdView = new Yodo1U3dBannerAdView(Yodo1U3dBannerAdSize.Banner, Yodo1U3dBannerAdPosition.BannerTop | Yodo1U3dBannerAdPosition.BannerHorizontalCenter);
        bannerAdView.LoadAd();
    }


    public void showInterstatialAd()
    {
        bool isLoaded = Yodo1U3dInterstitialAd.GetInstance().IsLoaded();

        if (isLoaded) Yodo1U3dInterstitialAd.GetInstance().ShowAd();
    }

    public void ShowRewarded()
    {
        bool isLoaded = Yodo1U3dRewardAd.GetInstance().IsLoaded();

        if (isLoaded) Yodo1U3dRewardAd.GetInstance().ShowAd();
    }

    //Reward User Here
    private void OnRewardAdEarnedEvent(Yodo1U3dRewardAd ad)
    {
        Debug.Log("[Yodo1 Mas] OnRewardAdEarnedEvent event received");
        // Add your reward code here

        if (PlayerPrefs.GetInt("Ad") == 0)
        {
            BridgeBuilderGUI.Instance.showHintBtn();
        }else if (PlayerPrefs.GetInt("Ad") == 1)
        {
            BridgeBuilderGUI.Instance.skipLevel();
        }


    }

    public void ShowAppOpen()
    {
        Yodo1U3dAppOpenAd.GetInstance().ShowAd();
    }


}
