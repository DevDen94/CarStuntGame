using UnityEngine;
using UnityEngine.UI;

namespace Gley.MobileAds.Internal
{
    public class MobileAdsExample : MonoBehaviour
    {

        public static MobileAdsExample Instance;
        public bool isAppOpen;

        void Awake()
        {

            if (Instance != null)
            {
                Destroy(this.gameObject);
                return;
            }
            DontDestroyOnLoad(this.gameObject);
            Instance = this;


            Gley.MobileAds.API.Initialize();
            isAppOpen = false;
        }

       
        
        public void ShowBanner()
        {
            Gley.MobileAds.API.ShowBanner(BannerPosition.Top, BannerType.Banner);
           // HideMRec();
        }
        public void showMRac()
        {
            API.ShowMRec(BannerPosition.TopRight);
            
        }

        /// <summary>
        /// Hide banner assigned from inspector
        /// </summary>
        public void HideBanner()
        {
            Gley.MobileAds.API.HideBanner();
        }
        public void HideMRec()
        {
            API.HideMRec();
        }


        
        public void ShowInterstitial()
        {
            if(API.IsInterstitialAvailable())
                Gley.MobileAds.API.ShowInterstitial();
        }
        CatLock _unlock;

        public void ShowRewardedVideo(CatLock unlock = null)
        {
            if (unlock != null)
            {
                _unlock = unlock;
            }

            if (API.IsRewardedVideoAvailable()) { 
                 Gley.MobileAds.API.ShowRewardedVideo(CompleteMethod);
            }
            else if (API.IsRewardedInterstitialAvailable()) { 
                API.ShowRewardedInterstitial(CompleteMethod);
            }
            else if (API.IsInterstitialAvailable())
            {
                API.ShowInterstitial();
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
            }
        }
        public void showAppopen()
        {
            API.ShowAppOpen();
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
            }
            else if (PlayerPrefs.GetInt("Rewarded") == 2)
            {
                BridgeBuilderGUI.Instance.skipLevel();
            }


        }

        
    }
}
