using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class typingScript : MonoBehaviour
{
    public Text textContainer;
    public AudioSource audioPlayer;
    public List<string> allDialogues;
    public List<AudioClip> clips;

    public Text introtextContainer;
    public AudioSource introaudioPlayer;
    public List<string> introallDialogues;
    public List<AudioClip> introclips;

    public Button nextButton;
    public int index = 0;

    // Gets Updated from LevelData Script
    public List<Transform> handTutorialPoaitionsStart;
    public List<Transform> handTutorialPoaitionsEnd;

    public GameObject hand;
    int handAnimationCounter = 0;
    public GameObject handAnimationButtonObject;
    public GameObject handAnimationTESTbUTTON;
    public GameObject handAnimationrunbUTTON;
    public GameObject beamButton;
    public GameObject roadButton;
    public int roadsCounter = 0;
    public GameObject testbtn;

    public static typingScript instance;

    private void Awake()
    {
        if (instance == null)
            instance = this;
    }

    public void Start()
    {
        //BridgeBuilderGUI gui = FindObjectOfType<BridgeBuilderGUI>();
        //handTutorialPoaitions = gui.bridgeSetup._levelData.sequencePositionsForTutorial;
        Invoke(nameof( playHandAnimationForTutorial),2);
        //introtextContainer.text = introallDialogues[0];
        //introaudioPlayer.clip = introclips[0];
        //introaudioPlayer.Play();
        introText();

    }
    private void Update()
    {
        
    }

    public void introText()
    {
        StopCoroutine("typingEffect1");
        introtextContainer.text = null;
        StartCoroutine("typingEffect1");
        nextButton.interactable = false;

    }
    public void next()
    {
        StopCoroutine("typingEffect");
        textContainer.text = null;
        StartCoroutine("typingEffect");
        nextButton.interactable = false;
    }

    IEnumerator typingEffect()
    {
        string toShow = allDialogues[index];
        audioPlayer.clip = clips[index];
        audioPlayer.Play();
                GameObject b = EventSystem.current.currentSelectedGameObject;
                if (b != null) {
                        Button bb = b.GetComponent<Button> ();
                        bb.interactable = false;
                }
                for (int i = 0; i < toShow.Length; i++)
        {
            textContainer.text += toShow[i];
           
            yield return new WaitForSeconds(0.05f);
        }
        //audioPlayer.clip = clips[index];
        //audioPlayer.Play();
        index++;
        if (index >= allDialogues.Count)
            index = 0;
        nextButton.interactable = true;
                if (b != null) {
                        Button bb = b.GetComponent<Button> ();
                        bb.interactable = true;
                }
        }
    IEnumerator typingEffect1()
    {
        string toShow = introallDialogues[index];
        introaudioPlayer.clip = introclips[index];
        introaudioPlayer.Play();
            GameObject b =    EventSystem.current.currentSelectedGameObject;
                if (b != null) {
                        Button bb = b.GetComponent<Button> ();
                        bb.interactable = false;
		}
        for (int i = 0; i < toShow.Length; i++)
        {
            introtextContainer.text += toShow[i];
            yield return new WaitForSeconds(0.05f);
        }
       
        index++;
        if (index >= introallDialogues.Count)
            index = 0;
        nextButton.interactable = true;
                if (b != null) {
                        Button bb = b.GetComponent<Button> ();
                        bb.interactable = true;
                }
        }

    public void playHandAnimationForTutorial()
    {
        playAnimationForTutorial();
        handAnimationButtonObject.SetActive(false);
    }

    void playAnimationForTutorial()
    {
        if (handAnimationCounter < handTutorialPoaitionsStart.Count)
        {
            hand.SetActive(true);
            handAnimation(handTutorialPoaitionsStart[handAnimationCounter], handTutorialPoaitionsEnd[handAnimationCounter]);
        }
        else
        {
            hand.SetActive(false);
            typingScriptonGamePlay.instance.handDialoguebox.SetActive(true);
            typingScriptonGamePlay.instance.next();
            handAnimationTESTbUTTON.SetActive(true);
            testbtn.SetActive(true);

            /// again panel for  test button start ; 
            /// if done  then  run button  animation start 
            /// if car triiger   lvel complete button then panel for congratulations starts;
        }
    }

    void handAnimation(Transform start,Transform end)
    {
        iTween.Stop(hand);
        hand.transform.position = start.position;
        Debug.LogError("start", start.gameObject);
        Debug.LogError("end", end.gameObject);
        iTween.MoveTo(hand, iTween.Hash("position", end.position, "easetype", iTween.EaseType.linear, "looptype", iTween.LoopType.pingPong));
    }

    public bool isEndPositionSame(Transform endpoint)
    {
        Debug.LogError(endpoint.position);
        Debug.LogError(handTutorialPoaitionsEnd[handAnimationCounter].position);
        typingScriptonGamePlay.instance.handDialoguebox.SetActive(false);
        bool value = handTutorialPoaitionsEnd[handAnimationCounter].position == endpoint.position;
        if (value)
        {
            handAnimationCounter++;
            if (handAnimationCounter == roadsCounter)
            {
                beamButton.GetComponent<Button>().interactable = true;
                typingScriptonGamePlay.instance.handDialoguebox.SetActive(true);
                typingScriptonGamePlay.instance.next();

                // open panel again + audio
                handAnimationButtonObject.SetActive(true);
                roadButton.GetComponent<Button>().interactable = false;
                hand.SetActive(false);
            }
            else
            {
                playHandAnimationForTutorial();
            }
        }
        return value ;
    }

    public void beamSelectionDone()
    {
        handAnimationButtonObject.SetActive(false);
        playHandAnimationForTutorial();
    }

    public void tutorialBeamButtons(int index)
    {
        BridgeBuilderGUI.Instance.changeBeamState(index);
    }

}
