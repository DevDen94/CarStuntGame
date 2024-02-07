using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class HomeManager : MonoBehaviour
{
    public GameObject SettingPanel, ExitPanel;
    public GameObject mainScenePanel, ModeSelectionPanel, StuntModePanel, FullBridgePanel,ADisLoading,ShowAd;

        public GameObject tutorialButton;

    public static HomeManager instance;

    private void Awake()
    {
        instance = this;
    }
    private void Start()
    {
        //  AdsManager.instance.ShowSmallBanner();

        //if (AdsManager.instance.isAppOpen)
        //{
        //    AdsManager.instance.ShowAppOpenAd();
        //    AdsManager.instance.isAppOpen = false;
        //}



        //PlayerPrefs.SetInt("CatLock_" + (HomeManager._currentCategory + 1), 0);
        //PlayerPrefs.SetInt("CatLock_" + (HomeManager._currentCategory + 2), 0);
        //PlayerPrefs.SetInt("CatLock_" + (HomeManager._currentCategory + 3), 0);
        //PlayerPrefs.SetInt("CatLock_" + (HomeManager._currentCategory + 4), 0);
//        Implementation.Instance.ShawBanner();

        Time.timeScale = 1;
        AudioManager.instance.musicSource.Play();
        AudioManager.instance.wind.Stop();
        if (PlayerPrefs.GetInt("Sound", 1) == 0)
            soundImage.color = Color.grey;
        if (PlayerPrefs.GetInt("Music", 1) == 0)
            musicImage.color = Color.grey;



                if (PlayerPrefs.GetInt("TutorialShown", 1 - 1)== 0) 
		{
                       // PlayerPrefs.SetInt("TutorialShown", 1);
                        tutorialButton.SetActive(false);

                       // loadTutorialScene ();
                } else {
                        tutorialButton.SetActive (true);
                     //    typingScript.instance.skipCanvas();
                }


        //Yodo1MasExample.Instance.showAppOpen();

    }

    public void onPlay()
    {

                if (PlayerPrefs.GetInt ("TutorialShown", 1 - 1) == 0) {
                        PlayerPrefs.SetInt ("TutorialShown", 1);
                        //        tutorialButton.SetActive (false);
                       // Firebase.Analytics.FirebaseAnalytics.LogEvent ("Tutorial: click_on_start");
                        loadTutorialScene ();
                        PlayerPrefs.SetInt ("Tutorial", 10);
                } else {
                        ModeSelectionPanel.SetActive (true);
                        PlayerPrefs.SetInt ("Tutorial", 10);
                        ADisLoading.SetActive (true);
                       // Firebase.Analytics.FirebaseAnalytics.LogEvent ("click_on_start");
                }
                //Implementation.Instance.ShowInterstitial();
                //AdsManager.instance.ShowinterAd();
                AudioManager.instance.buttonAudio.Play();
       



    }

    public void loadTutorialScene()
    {
        SceneManager.LoadScene("tutorial");
    }

    public void PanelOpenAfterAd()
    {
        
        ADisLoading.SetActive(false);
       // Yodo1MasExample.Instance.showInterstitial();
    }



    public void opneExitPanel()
    {
        //AdsManager.instance.ShowinterAd();
        AudioManager.instance.Panelopen.Play();
        ExitPanel.SetActive(true);
       // Firebase.Analytics.FirebaseAnalytics.LogEvent("click_on_exit");
    }
    public void YesExit()
    {
        AudioManager.instance.buttonAudio.Play();
        Application.Quit();
    }
    public void NoExit()
    {
        AudioManager.instance.buttonAudio.Play();
        ExitPanel.SetActive(false);
    }
    public void closeExitPanel()
    {
        AudioManager.instance.buttonAudio.Play();
        ExitPanel.SetActive(false);
    }
    public void openSettingPanel()
    {
        AudioManager.instance.Panelopen.Play();
        SettingPanel.SetActive(true);
    }
    public void CloseSettingPanel()
    {
        AudioManager.instance.buttonAudio.Play();
        SettingPanel.SetActive(false);
    }
    public void Back_ModeSelection()
    {
        ////////AudioManager.instance.buttonAudio.Play();
        ////////// mainScenePanel.SetActive(true);
        ////////if (ModeSelectionPanel.activeInHierarchy)
        ////////                ModeSelectionPanel.SetActive (false);
        ////////if (LevelSelectionScreen.activeInHierarchy)
        ////////{ LevelSelectionScreen.SetActive(false);
        ////////    ModeSelectionPanel.SetActive(true);
        ////////}
        ///

        AudioManager.instance.buttonAudio.Play();
        // mainScenePanel.SetActive(true);
        if (ModeSelectionPanel.activeInHierarchy)
        {
            categoryIndex = 0;
            categoryParent.localPosition = new Vector3(-875 * categoryIndex, categoryParent.localPosition.y);
            ModeSelectionPanel.SetActive(false);
        }
        if (LevelSelectionScreen.activeInHierarchy)
        {
            LevelSelectionScreen.SetActive(false);
            ModeSelectionPanel.SetActive(true);
        }
    }

    
  

    public static string _category;
    public static int _currentCategory = 0;
        public static string selectedLevel = "level";
        public GameObject LevelSelectionScreen;
    public void ModeSelect(string category)
	{




       
            AudioManager.instance.buttonAudio.Play();
            if (!EventSystem.current.currentSelectedGameObject.transform.parent.GetComponent<CatLock>().IsUnlock)
                return;
            _category = category;
            _currentCategory = EventSystem.current.currentSelectedGameObject.transform.parent.GetSiblingIndex();
            LevelSelectionScreen.SetActive(true);
           
            //Firebase.Analytics.FirebaseAnalytics.LogEvent("click_on_mode", "mode_name", category);
        
            
        

    }

        public void selectLevel ()
	{
        
        AudioManager.instance.buttonAudio.Play();
        if (EventSystem.current.currentSelectedGameObject.transform.GetChild(1).gameObject.activeInHierarchy)
            return;
        int index = EventSystem.current.currentSelectedGameObject.transform.GetSiblingIndex ();
                selectedLevel = "level_" + (index + 1);
                SceneManager.LoadScene (_category);
       // Firebase.Analytics.FirebaseAnalytics.LogEvent("click_on_level_select","levelselect", selectedLevel);
    }

    public void setSound()
	{
                AudioManager.instance.setSound (soundImage);
	}

        public void setMusic ()
	{

                AudioManager.instance.setMusic (musicImage);
	}

        public Image soundImage;

        public Image musicImage;


        public Transform categoryParent;
        public int categoryIndex = 1 - 1;

    

    [SerializeField] float[] scrollerPosition;
    public void categoryScroller(int value)
    {

        AudioManager.instance.buttonAudio.Play();
        categoryIndex += value;

        if (categoryIndex < (1 - 1))
        {
            categoryIndex = 3;
        }
        else if (categoryIndex > 3)
            categoryIndex = 0;
        categoryParent.localPosition = new Vector3(-875*categoryIndex, categoryParent.localPosition.y);

        //if (value == 1)
        //{
        //    AudioManager.instance.buttonAudio.Play();
        //    categoryParent.GetChild(categoryIndex).SetAsFirstSibling();
        //}
        //if (value == -1)
        //{
        //    AudioManager.instance.buttonAudio.Play();
        //    categoryParent.GetChild(1 - 1).SetAsLastSibling();
        //}
    }

    public void MoreApps()
    {
        Application.OpenURL("https://play.google.com/store/apps/developer?id=Darwin+Games");
    }
   public void PrivacyPolicy()
    {
        Application.OpenURL("https://darwingames1.blogspot.com/2023/06/privacy-policy.html");

    }

    public void RateUs()
    {
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.darwingames.bridgebuilder.stunts.car.games");
    }
}
