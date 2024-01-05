using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelFailedTrigger : MonoBehaviour
{
	BridgeBuilderGUI gui;
	void Start ()
	{
		gui = FindObjectOfType<BridgeBuilderGUI> ();
	}
	void OnTriggerEnter (Collider other)
	{
		if (other.tag == "TrainHead") {
			AudioManager.instance.CarSink.Play();
			Invoke ("failPanel", 1);
			other.transform.parent.GetComponent<TrainController> ().trainWorking = false;
			//other.transform.parent.GetComponent<TrainController> ().trainDirection = Vector3.zero; try k
			gui.StopTrain1 ();
			other.GetComponent<Collider>().enabled = false;
		}

	}

	void failPanel ()
	{
		if( BridgeSetup.eLevelStage.PlayStage == gui.bridgeSetup.LevelStage)
			gui.LevelFailed ();
	}
}
