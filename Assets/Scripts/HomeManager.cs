using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Homemanager : MonoBehaviour
{
    public GameObject SettingPanel, ExitPanel;
    public GameObject mainScenePanel, ModeSelectionPanel, StuntModePanel, FullBridgePanel;
    
    
    public void onPlay()
    {
        mainScenePanel.SetActive(false);
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
        mainScenePanel.SetActive(true);
        ModeSelectionPanel.SetActive(false);
    }


    public static string _category;
    public void ModeSelect(string category)
	{
        _category = category;
	}
}
