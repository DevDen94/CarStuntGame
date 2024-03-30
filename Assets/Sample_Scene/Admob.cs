using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;

public class Admob : MonoBehaviour
{
    [Header("Banner Ads")]
    public string Banner1 = "";
    

    [Header("Big Banner Ads")]
    public string BigBanner1 = "";
    


    [Header("Interstatial Ads")]
    public string Interstitial1 = "";
    public string Interstitial2 = "";
    public string Interstitial3 = "";

    [Header("Rewarded Ads")]
    public string Rewarded1 = "";
    public string Rewarded2 = "";
    public string Rewarded3 = "";

    [Header("Rewarded Interstatial Ads")]
    public string RewardedInterstatial1 = "";
    public string RewardedInterstatial2 = "";
    public string RewardedInterstatial3 = "";

    

    [Space(20)]
    public bool ShowTestAds;

    [Space(20)]
    public AdPosition SmallBannerPosition;
    public AdPosition BigBannerPosition;


    public static Admob Instance;

    public int LoadAds_=0;

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(this.gameObject);
            return;
        }
        DontDestroyOnLoad(this.gameObject);
        Instance = this;


        if (ShowTestAds)
        {
            Banner1 = "ca-app-pub-3940256099942544/6300978111";
            BigBanner1 = "ca-app-pub-3940256099942544/6300978111";
            Interstitial1= "ca-app-pub-3940256099942544/1033173712";
            Rewarded1 = "ca-app-pub-3940256099942544/5224354917";
            RewardedInterstatial1 = "ca-app-pub-3940256099942544/5354046379";
            
        }
        
    }


    public void Start()
    {
        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize((InitializationStatus initStatus) =>
        {

            LoadSmallBannerAd();
            LoadBiGBannerAd();

            // This callback is called once the MobileAds SDK is initialized.
            LoadInterstitialAd1();
            LoadInterstitialAd2();
            LoadInterstitialAd3();

            LoadRewardedAd1();
            LoadRewardedAd2();
            LoadRewardedAd3();

            LoadRewardedInterstitialAd1();
            LoadRewardedInterstitialAd2();
            LoadRewardedInterstitialAd3();

            


            HideBothBanners();

        });
    }


    #region SmallBanner
    BannerView _bannerView1;
    public void CreateBannerView()
    {
        Debug.Log("Creating banner view");

        // If we already have a banner, destroy the old one.
        if (_bannerView1 != null)
        {
           // DestroyAd();
        }

        // Create a 320x50 banner at top of the screen
        _bannerView1 = new BannerView(Banner1, AdSize.Banner, SmallBannerPosition);
    }
    public void LoadSmallBannerAd()
    {


        
        if (_bannerView1 == null)
        {
           CreateBannerView();
        }

        // create our request used to load the ad.
        var adRequest = new AdRequest();

        // send the request to load the ad.
        Debug.Log("Loading banner ad.");
        _bannerView1.LoadAd(adRequest);
    }
    #endregion

    #region BigBanner
    BannerView _BiGbannerView1;
    public void CreateBigBannerView()
    {
        Debug.Log("Creating banner view");

        // If we already have a banner, destroy the old one.
        if (_BiGbannerView1 != null)
        {
            // DestroyAd();
        }

        // Create a 320x50 banner at top of the screen
        _BiGbannerView1 = new BannerView(BigBanner1, AdSize.MediumRectangle, BigBannerPosition);
    }
    public void LoadBiGBannerAd()
    {

       
        if (_BiGbannerView1 == null)
        {
            CreateBigBannerView();
        }

        // create our request used to load the ad.
        var adRequest = new AdRequest();

        // send the request to load the ad.
        Debug.Log("Loading banner ad.");
        _BiGbannerView1.LoadAd(adRequest);
    }

    void HideBothBanners()
    {
        _bannerView1.Hide();
        _BiGbannerView1.Hide();
    }

    public void ShowSmallBanner()
    {
        if (_BiGbannerView1 != null)
        {
            _BiGbannerView1.Hide();
        }
        _bannerView1.Show();
    }
    public void ShowBigBanner()
    {
        if (_bannerView1 != null)
        {
            _bannerView1.Hide();
        }
        _BiGbannerView1.Show();
    }

    #endregion

    #region Interstitial ads
    private InterstitialAd _interstitialAd1, _interstitialAd2, _interstitialAd3;
    private void LoadInterstitialAd1()
    {
        if (_interstitialAd1 != null)
        {
            _interstitialAd1.Destroy();
            _interstitialAd1 = null;
        }
        Debug.Log("Loading the interstitial ad.");
        var adRequest = new AdRequest();

        InterstitialAd.Load(Interstitial1, adRequest,
          (InterstitialAd ad, LoadAdError error) =>
          {
              // if error is not null, the load request failed.
              if (error != null || ad == null)
              {
                  Debug.LogError("interstitial ad failed to load an ad " +
                                 "with error : " + error);
                  return;
              }

              Debug.Log("Interstitial ad loaded with response : "
                        + ad.GetResponseInfo());

              _interstitialAd1 = ad;
          });

    }

    private void LoadInterstitialAd2()
    {
        if (_interstitialAd2 != null)
        {
            _interstitialAd2.Destroy();
            _interstitialAd2 = null;
        }
        Debug.Log("Loading the interstitial ad.");
        var adRequest = new AdRequest();

        InterstitialAd.Load(Interstitial2, adRequest,
          (InterstitialAd ad, LoadAdError error) =>
          {
              // if error is not null, the load request failed.
              if (error != null || ad == null)
              {
                  Debug.LogError("interstitial ad failed to load an ad " +
                                 "with error : " + error);
                  return;
              }

              Debug.Log("Interstitial ad loaded with response : "
                        + ad.GetResponseInfo());

              _interstitialAd2 = ad;
          });

    }

    private void LoadInterstitialAd3()
    {
        if (_interstitialAd3 != null)
        {
            _interstitialAd3.Destroy();
            _interstitialAd3 = null;
        }
        Debug.Log("Loading the interstitial ad.");
        var adRequest = new AdRequest();

        InterstitialAd.Load(Interstitial3, adRequest,
          (InterstitialAd ad, LoadAdError error) =>
          {
              // if error is not null, the load request failed.
              if (error != null || ad == null)
              {
                  Debug.LogError("interstitial ad failed to load an ad " +
                                 "with error : " + error);
                  return;
              }

              Debug.Log("Interstitial ad loaded with response : "
                        + ad.GetResponseInfo());

              _interstitialAd3 = ad;
          });

    }

    public void ShowInterstitialAd()
    {
        if (_interstitialAd1 != null && _interstitialAd1.CanShowAd())
        {
            Debug.Log("Showing interstitial ad.");
            _interstitialAd1.Show();
            LoadInterstitialAd1();
        }
        else if (_interstitialAd2 != null && _interstitialAd2.CanShowAd())
        {
            Debug.Log("Showing interstitial ad.");
            _interstitialAd2.Show();
            LoadInterstitialAd2();
        }
        else if (_interstitialAd3 != null && _interstitialAd3.CanShowAd())
        {
            Debug.Log("Showing interstitial ad.");
            _interstitialAd3.Show();
            LoadInterstitialAd3();
        }

    }


    #endregion

    #region Rewarded Ads

    private RewardedAd _rewardedAd1, _rewardedAd2, _rewardedAd3;

    private void LoadRewardedAd1()
    {
        if (_rewardedAd1 != null)
        {
            _rewardedAd1.Destroy();
            _rewardedAd1 = null;
        }
        Debug.Log("Loading the rewarded ad.");
        var adRequest = new AdRequest();
        RewardedAd.Load(Rewarded1, adRequest,
          (RewardedAd ad, LoadAdError error) =>
          {
              // if error is not null, the load request failed.
              if (error != null || ad == null)
              {
                  Debug.LogError("Rewarded ad failed to load an ad " +
                                 "with error : " + error);
                  return;
              }

              Debug.Log("Rewarded ad loaded with response : "
                        + ad.GetResponseInfo());

              _rewardedAd1 = ad;
          });

    }

    private void LoadRewardedAd2()
    {
        if (_rewardedAd2 != null)
        {
            _rewardedAd2.Destroy();
            _rewardedAd2 = null;
        }
        Debug.Log("Loading the rewarded ad.");
        var adRequest = new AdRequest();
        RewardedAd.Load(Rewarded2, adRequest,
          (RewardedAd ad, LoadAdError error) =>
          {
              // if error is not null, the load request failed.
              if (error != null || ad == null)
              {
                  Debug.LogError("Rewarded ad failed to load an ad " +
                                 "with error : " + error);
                  return;
              }

              Debug.Log("Rewarded ad loaded with response : "
                        + ad.GetResponseInfo());

              _rewardedAd2 = ad;
          });

    }

    private void LoadRewardedAd3()
    {
        if (_rewardedAd3 != null)
        {
            _rewardedAd3.Destroy();
            _rewardedAd3 = null;
        }
        Debug.Log("Loading the rewarded ad.");
        var adRequest = new AdRequest();
        RewardedAd.Load(Rewarded3, adRequest,
          (RewardedAd ad, LoadAdError error) =>
          {
              // if error is not null, the load request failed.
              if (error != null || ad == null)
              {
                  Debug.LogError("Rewarded ad failed to load an ad " +
                                 "with error : " + error);
                  return;
              }

              Debug.Log("Rewarded ad loaded with response : "
                        + ad.GetResponseInfo());

              _rewardedAd3 = ad;
          });
    }

    CatLock _unlock;

    public void ShowRewardedAd(CatLock unlock = null)
    {
        if (unlock != null)
        {
            _unlock = unlock;
        }

        if (_rewardedAd1 != null && _rewardedAd1.CanShowAd())
        {
            _rewardedAd1.Show((Reward reward) =>
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
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 2)
                {
                    BridgeBuilderGUI.Instance.skipLevel();
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 3)
                {
                    PlayerPrefs.SetInt("Unlock" + PlayerPrefs.GetString("CarNAme"), 1);
                    HomeManager.instance.CarSelectionPanel.SetActive(false);
                    Invoke(nameof(CarSelectionOn),0.5f);
                }

            });
            LoadRewardedAd1();
        }else if (_rewardedAd2 != null && _rewardedAd2.CanShowAd())
        {
            _rewardedAd2.Show((Reward reward) =>
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
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 2)
                {
                    BridgeBuilderGUI.Instance.skipLevel();
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 3)
                {
                    PlayerPrefs.SetInt("Unlock" + PlayerPrefs.GetString("CarNAme"), 1);
                    HomeManager.instance.CarSelectionPanel.SetActive(false);
                    Invoke(nameof(CarSelectionOn), 0.5f);
                }

            });
            LoadRewardedAd2();

        }
        else if (_rewardedAd3 != null && _rewardedAd3.CanShowAd())
        {
            _rewardedAd3.Show((Reward reward) =>
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
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 2)
                {
                    BridgeBuilderGUI.Instance.skipLevel();
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 3)
                {
                    PlayerPrefs.SetInt("Unlock" + PlayerPrefs.GetString("CarNAme"), 1);
                    HomeManager.instance.CarSelectionPanel.SetActive(false);
                    Invoke(nameof(CarSelectionOn), 0.5f);
                }

            });
            LoadRewardedAd3();

        }
        else if (_rewardedInterstitialAd1 != null && _rewardedInterstitialAd1.CanShowAd())
        {
            _rewardedInterstitialAd1.Show((Reward reward) =>
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
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 2)
                {
                    BridgeBuilderGUI.Instance.skipLevel();
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 3)
                {
                    PlayerPrefs.SetInt("Unlock" + PlayerPrefs.GetString("CarNAme"), 1);
                    HomeManager.instance.CarSelectionPanel.SetActive(false);
                    Invoke(nameof(CarSelectionOn), 0.1f);
                }
            });
            LoadRewardedInterstitialAd1();

        }
        else if (_rewardedInterstitialAd2 != null && _rewardedInterstitialAd2.CanShowAd())
        {
            _rewardedInterstitialAd2.Show((Reward reward) =>
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
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 2)
                {
                    BridgeBuilderGUI.Instance.skipLevel();
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 3)
                {
                    PlayerPrefs.SetInt("Unlock" + PlayerPrefs.GetString("CarNAme"), 1);
                    HomeManager.instance.CarSelectionPanel.SetActive(false);
                    Invoke(nameof(CarSelectionOn), 0.5f);
                }
            });
            LoadRewardedInterstitialAd2();

        }
        else if (_rewardedInterstitialAd3 != null && _rewardedInterstitialAd3.CanShowAd())
        {
            _rewardedInterstitialAd3.Show((Reward reward) =>
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
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 2)
                {
                    BridgeBuilderGUI.Instance.skipLevel();
                }
                else if (PlayerPrefs.GetInt("Rewarded") == 3)
                {
                    PlayerPrefs.SetInt("Unlock" + PlayerPrefs.GetString("CarNAme"), 1);
                    HomeManager.instance.CarSelectionPanel.SetActive(false);
                    Invoke(nameof(CarSelectionOn), 0.5f);
                }
            });
            LoadRewardedInterstitialAd3();

        }
    }
    public void CarSelectionOn()
    {
        HomeManager.instance.CarSelectionPanel.SetActive(true);

    }

    #endregion


    #region Rewarded interstitial

    private RewardedInterstitialAd _rewardedInterstitialAd1, _rewardedInterstitialAd2, _rewardedInterstitialAd3;

    private void LoadRewardedInterstitialAd1()
    {
        if (_rewardedInterstitialAd1 != null)
        {
            _rewardedInterstitialAd1.Destroy();
            _rewardedInterstitialAd1 = null;
        }
        Debug.Log("Loading the rewarded interstitial ad.");
        var adRequest = new AdRequest();
        adRequest.Keywords.Add("unity-admob-sample");

        RewardedInterstitialAd.Load(RewardedInterstatial1, adRequest,
          (RewardedInterstitialAd ad, LoadAdError error) =>
          {
              // if error is not null, the load request failed.
              if (error != null || ad == null)
              {
                  Debug.LogError("rewarded interstitial ad failed to load an ad " +
                                 "with error : " + error);
                  return;
              }

              Debug.Log("Rewarded interstitial ad loaded with response : "
                        + ad.GetResponseInfo());

              _rewardedInterstitialAd1 = ad;
          });

    }

    private void LoadRewardedInterstitialAd2()
    {
        if (_rewardedInterstitialAd2 != null)
        {
            _rewardedInterstitialAd2.Destroy();
            _rewardedInterstitialAd2 = null;
        }
        Debug.Log("Loading the rewarded interstitial ad.");
        var adRequest = new AdRequest();
        adRequest.Keywords.Add("unity-admob-sample");

        RewardedInterstitialAd.Load(RewardedInterstatial2, adRequest,
          (RewardedInterstitialAd ad, LoadAdError error) =>
          {
              // if error is not null, the load request failed.
              if (error != null || ad == null)
              {
                  Debug.LogError("rewarded interstitial ad failed to load an ad " +
                                 "with error : " + error);
                  return;
              }

              Debug.Log("Rewarded interstitial ad loaded with response : "
                        + ad.GetResponseInfo());

              _rewardedInterstitialAd2 = ad;
          });

    }

    private void LoadRewardedInterstitialAd3()
    {
        if (_rewardedInterstitialAd3 != null)
        {
            _rewardedInterstitialAd3.Destroy();
            _rewardedInterstitialAd3 = null;
        }
        Debug.Log("Loading the rewarded interstitial ad.");
        var adRequest = new AdRequest();
        adRequest.Keywords.Add("unity-admob-sample");

        RewardedInterstitialAd.Load(RewardedInterstatial3, adRequest,
          (RewardedInterstitialAd ad, LoadAdError error) =>
          {
              // if error is not null, the load request failed.
              if (error != null || ad == null)
              {
                  Debug.LogError("rewarded interstitial ad failed to load an ad " +
                                 "with error : " + error);
                  return;
              }

              Debug.Log("Rewarded interstitial ad loaded with response : "
                        + ad.GetResponseInfo());

              _rewardedInterstitialAd3 = ad;
          });

    }



    #endregion


    public void LoadAds()
    {
        LoadInterstitialAd1();
        LoadInterstitialAd2();
        LoadInterstitialAd3();

        LoadRewardedAd1();
        LoadRewardedAd2();
        LoadRewardedAd3();

        LoadRewardedInterstitialAd1();
        LoadRewardedInterstitialAd2();
        LoadRewardedInterstitialAd3();
    }


}
