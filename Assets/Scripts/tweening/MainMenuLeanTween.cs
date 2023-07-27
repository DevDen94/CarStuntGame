using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenuLeanTween : MonoBehaviour
{
    [SerializeField]
    GameObject BridgeTitle,
        ExitBTN, SettingBTN,
        PrivacyBTN, RateUsBTN, MoreGames,
        PlayBTN;


    void Start()
    {
        
        LeanTween.scale(BridgeTitle, new Vector3(1f, 1f, 1f), 1.2f).setEase(LeanTweenType.easeOutElastic).setOnComplete(UpperBtns);
       // LeanTween.moveLocal(BridgeTitle, new Vector3(-30f, 747f, 2f), 0.7f).setDelay(2f).setEase(LeanTweenType.easeInOutCubic);
       // LeanTween.scale(BridgeTitle, new Vector3(1f, 1f, 1f), 2f).setDelay(1.7f).setEase(LeanTweenType.easeInOutCubic);

    }

    void UpperBtns()
    {

        LeanTween.scale(ExitBTN, new Vector3(1f, 1f, 1f), .3f).setDelay(.03f).setEase(LeanTweenType.easeOutElastic);
        LeanTween.scale(SettingBTN, new Vector3(1f, 1f, 1f),.4f)/*.setDelay(.035f)*/.setEase(LeanTweenType.easeOutElastic).setOnComplete(lowerBtn);
       
    }


    void lowerBtn()
    {
        LeanTween.scale(PrivacyBTN, new Vector3(1f, 1f, 1f), .5f).setEase(LeanTweenType.easeOutElastic);
        LeanTween.scale(RateUsBTN, new Vector3(1f, 1f, 1f), .6f).setDelay(.01f).setEase(LeanTweenType.easeOutElastic);
        LeanTween.scale(MoreGames, new Vector3(1f, 1f, 1f), .7f).setDelay(.02f).setEase(LeanTweenType.easeOutElastic).setOnComplete(PlayBtnFun);

    }

    void PlayBtnFun()
    {
        LeanTween.scale(PlayBTN, new Vector3(1f, 1f, 1f), .8f)/*.setDelay(.02f)*/.setEase(LeanTweenType.easeOutElastic);
    }
    
}
