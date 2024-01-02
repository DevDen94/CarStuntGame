using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanvasSwitchTutorial : MonoBehaviour
{
    public GameObject GridCanvas;
    public GameObject PauseCanvas;
    public GameObject ResetCanvas;
    public GameObject undoCanvas;
    public GameObject zooomCanvas;
    public GameObject mainmenuCanvas;
    public GameObject tutorialCanvas;
 
    public void CloseTutorialCanvas()
    {
        tutorialCanvas.SetActive(false);
        GridCanvas.SetActive(true);
    }
    public void CloseGridCanvas()
    {
        PauseCanvas.SetActive(true);
        GridCanvas.SetActive(false);
    }
    public void ClosePauseCanvas()
    {
        ResetCanvas.SetActive(true);
        PauseCanvas.SetActive(false);
    }
    public void CloseresetCanvas()
    {
        undoCanvas.SetActive(true);
        ResetCanvas.SetActive(false);
    }
    public void CloseundoCanvas()
    {
        zooomCanvas.SetActive(true);
        undoCanvas.SetActive(false);
    }
    public void ClosezoomCanvas()
    {
        mainmenuCanvas.SetActive(true);
        zooomCanvas.SetActive(false);
    }
}
