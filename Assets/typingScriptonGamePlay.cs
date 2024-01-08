using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class typingScriptonGamePlay : MonoBehaviour
{
    public GameObject handDialoguebox;
    public Text textContainer;
    public AudioSource audioPlayer;
    public List<string> allDialogues;
    public List<AudioClip> clips;

    public Button nextButton;
    public int index = 0;

    //// Gets Updated from LevelData Script
    ////public List<Transform> handTutorialPoaitionsStart;
    ////public List<Transform> handTutorialPoaitionsEnd;

    ////public GameObject hand;
    ////int handAnimationCounter = 0;
    ////public GameObject handAnimationButtonObject;
    ////public GameObject beamButton;
    ////public GameObject roadButton;
    ////public int roadsCounter = 0;
    

    public static typingScriptonGamePlay instance;

    private void Awake()
    {
        if (instance == null)
            instance = this;
    }

    public void Start()
    {
        
       ////textContainer.text = allDialogues[5];
       //// audioPlayer.clip = clips[5];
       //// audioPlayer.Play();

    }




    public void next()
    {
        StopCoroutine("typingEffect");
        textContainer.text = null;
        StartCoroutine("typingEffect");
        nextButton.interactable = false;
        typingScript.instance.handAnimationTESTbUTTON.SetActive(false);
       
    }

    IEnumerator typingEffect()
    {
        string toShow = allDialogues[index];
        audioPlayer.clip = clips[index];
        audioPlayer.Play();
        for (int i = 0; i < toShow.Length; i++)
        {
            textContainer.text += toShow[i];
            yield return new WaitForSeconds(0.05f);
        }
      
        index++;
        if (index >= allDialogues.Count)
            index = 0;
        nextButton.interactable = true;
    }

    ////public void playHandAnimationForTutorial()
    ////{
    ////    playAnimationForTutorial();
    ////    handAnimationButtonObject.SetActive(false);
    ////}

    ////void playAnimationForTutorial()
    ////{
    ////    if (handAnimationCounter < handTutorialPoaitionsStart.Count)
    ////    {
    ////        hand.SetActive(true);
    ////        handAnimation(handTutorialPoaitionsStart[handAnimationCounter], handTutorialPoaitionsEnd[handAnimationCounter]);
    ////    }
    ////    else
    ////    {
    ////        hand.SetActive(false);
    ////    }
    ////}

    ////void handAnimation(Transform start,Transform end)
    ////{
    ////    iTween.Stop(hand);
    ////    hand.transform.position = start.position;
    ////    Debug.LogError("start", start.gameObject);
    ////    Debug.LogError("end", end.gameObject);
    ////    iTween.MoveTo(hand, iTween.Hash("position", end.position, "easetype", iTween.EaseType.linear, "looptype", iTween.LoopType.pingPong));
    ////}

    ////public bool isEndPositionSame(Transform endpoint)
    ////{
    ////    Debug.LogError(endpoint.position);
    ////    Debug.LogError(handTutorialPoaitionsEnd[handAnimationCounter].position);
    ////    bool value = handTutorialPoaitionsEnd[handAnimationCounter].position == endpoint.position;
    ////    if (value)
    ////    {
    ////        handAnimationCounter++;
    ////        if (handAnimationCounter == roadsCounter)
    ////        {
    ////            beamButton.GetComponent<Button>().interactable = true;
    ////            handAnimationButtonObject.SetActive(true);
    ////            roadButton.GetComponent<Button>().interactable = false;
    ////            hand.SetActive(false);
    ////        }
    ////        else
    ////        {
    ////            playHandAnimationForTutorial();
    ////        }
    ////    }
    ////    return value ;
    ////}

    ////public void beamSelectionDone()
    ////{
    ////    handAnimationButtonObject.SetActive(false);
    ////    playHandAnimationForTutorial();
    ////}

    ////public void tutorialBeamButtons(int index)
    ////{
    ////    BridgeBuilderGUI.Instance.changeBeamState(index);
    ////}

}
