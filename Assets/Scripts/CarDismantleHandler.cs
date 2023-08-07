using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarDismantleHandler : MonoBehaviour
{
    //public dismantler _dismantler;
    //void OnCollisionEnter (Collision collision)
    //{
    //	///Debug.Log (collision.gameObject.tag);
    //	if (collision.gameObject.tag == "Death") {
    //		_dismantler.enabled = true;
    //	}
    //}
    BridgeBuilderGUI bridgeBuilderGUI;

    private void Awake()
    {
        bridgeBuilderGUI = Camera.main.GetComponent<BridgeBuilderGUI>();
    }
    bool onetime = false;
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "finish" /*&& collision.gameObject.tag == "carDrag"*/ && !onetime)
        {
           // GetComponent<Collider>().enabled = false;
          //  onetime = true;
            Debug.LogError("collided with rock");
            Invoke("forcefulLevelFailed", 3);
        }
    }

    void forcefulLevelFailed()
    {
        if (!bridgeBuilderGUI.gamePaused&&BridgeSetup.eLevelStage.PlayStage==bridgeBuilderGUI.bridgeSetup.LevelStage)
        {
            onetime = false;
            //   AudioManager.instance.failAudio.Play();
            bridgeBuilderGUI.StopTrain1();
            transform.parent.GetComponent<TrainController>().trainWorking = false;
            bridgeBuilderGUI.LevelFailed();
        }
    }
}
