using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class HomeManager : MonoBehaviour
{
    public GameObject SettingPanel, ExitPanel;
    public GameObject mainScenePanel, ModeSelectionPanel, StuntModePanel, FullBridgePanel;
    
    
    public void onPlay()
    {
       // mainScenePanel.SetActive(false);
        ModeSelectionPanel.SetActive(true);
    }
    public void opneExitPanel()
    {
        ExitPanel.SetActive(true);
    }
    public void YesExit()
    {
        Application.Quit();
    }
    public void NoExit()
    {
        ExitPanel.SetActive(false);
    }
    public void closeExitPanel()
    {
        ExitPanel.SetActive(false);
    }
    public void openSettingPanel()
    {
        SettingPanel.SetActive(true);
    }
    public void CloseSettingPanel()
    {
        SettingPanel.SetActive(false);
    }
    public void Back_ModeSelection()
    {
                // mainScenePanel.SetActive(true);
                if (ModeSelectionPanel.activeInHierarchy)
                        ModeSelectionPanel.SetActive (false);
                if (LevelSelectionScreen.activeInHierarchy)
                        LevelSelectionScreen.SetActive (false);
    }


    public static string _category;
        public static string selectedLevel = "level";
        public GameObject LevelSelectionScreen;
    public void ModeSelect(string category)
	{
        if (EventSystem.current.currentSelectedGameObject.GetComponent<CatLock>().IsLocked)
            return;
        _category = category;
                LevelSelectionScreen.SetActive (true);
	}

        public void selectLevel ()
	{
                int index = EventSystem.current.currentSelectedGameObject.transform.GetSiblingIndex ();
                selectedLevel = "level" + (index + 1);
                SceneManager.LoadScene (_category);

	}
}
