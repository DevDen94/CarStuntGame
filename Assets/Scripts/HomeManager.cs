using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class HomeManager : MonoBehaviour
{
    public GameObject SettingPanel, ExitPanel;
    public GameObject mainScenePanel, ModeSelectionPanel, StuntModePanel, FullBridgePanel;



    private void Awake()
    {
        
    }
    private void Start()
    {
        AdsManager.instance.ShowSmallBanner();
        
        if (AdsManager.instance.isAppOpen)
        {
            AdsManager.instance.ShowAppOpenAd();
            AdsManager.instance.isAppOpen = false;
        }



        //PlayerPrefs.SetInt("CatLock_" + (HomeManager._currentCategory + 1), 0);
        //PlayerPrefs.SetInt("CatLock_" + (HomeManager._currentCategory + 2), 0);
        //PlayerPrefs.SetInt("CatLock_" + (HomeManager._currentCategory + 3), 0);
        //PlayerPrefs.SetInt("CatLock_" + (HomeManager._currentCategory + 4), 0);


        Time.timeScale = 1;
        AudioManager.instance.musicSource.Play();
        AudioManager.instance.wind.Stop();
        if (PlayerPrefs.GetInt("Sound", 1) == 0)
            soundImage.color = Color.grey;
        if (PlayerPrefs.GetInt("Music", 1) == 0)
            musicImage.color = Color.grey;

        
       
    }

    


    public void onPlay()
    {
        AdsManager.instance.ShowinterAd();
        AudioManager.instance.buttonAudio.Play();
        ModeSelectionPanel.SetActive(true);
    }
    public void opneExitPanel()
    {
        AdsManager.instance.ShowinterAd();
        AudioManager.instance.Panelopen.Play();
        ExitPanel.SetActive(true);
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
        AdsManager.instance.ShowinterAd();
        AudioManager.instance.buttonAudio.Play();
        if (EventSystem.current.currentSelectedGameObject.GetComponent<CatLock>().IsLocked)
            return;
        _category = category;
        _currentCategory = EventSystem.current.currentSelectedGameObject.transform.GetSiblingIndex();
         LevelSelectionScreen.SetActive (true);
	}

        public void selectLevel ()
	{
        
        AudioManager.instance.buttonAudio.Play();
        if (EventSystem.current.currentSelectedGameObject.transform.GetChild(1).gameObject.activeInHierarchy)
            return;
        int index = EventSystem.current.currentSelectedGameObject.transform.GetSiblingIndex ();
                selectedLevel = "level_" + (index + 1);
                SceneManager.LoadScene (_category);

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
