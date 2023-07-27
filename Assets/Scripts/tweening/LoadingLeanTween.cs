using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadingLeanTween : MonoBehaviour
{
    [SerializeField]
    GameObject title;
   


    void Start()
    {
     //  LeanTween.rotateAround(colorWheel, Vector3.forward, -360f, 10f).setLoopClamp();
        LeanTween.scale(title, new Vector3(1.2f, 1.2f, 1.2f), 2f).setDelay(.5f).setEase(LeanTweenType.easeOutElastic).setOnComplete(LevelComplete);
        //LeanTween.moveLocal(title, new Vector3(-30f, 30f, 2f), 0.7f).setDelay(2f).setEase(LeanTweenType.easeInOutCubic);
        LeanTween.scale(title, new Vector3(1f, 1f, 1f), 2f).setDelay(1.7f).setEase(LeanTweenType.easeInOutCubic);

    }

    void LevelComplete()
    {

        
    }


  
}
