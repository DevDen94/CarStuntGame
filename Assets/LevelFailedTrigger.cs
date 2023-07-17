using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelFailedTrigger : MonoBehaviour
{
	BridgeBuilderGUI gui;
	void Start ()
	{
		gui = Camera.main.GetComponent<BridgeBuilderGUI> ();
	}
	void OnTriggerEnter (Collider other)
	{
		if (other.tag == "TrainHead") {
			AudioManager.instance.CarSink.Play();
			Invoke ("failPanel", 1);
			other.transform.parent.GetComponent<TrainController> ().trainWorking = false;
			//other.transform.parent.GetComponent<TrainController> ().trainDirection = Vector3.zero;
			gui.StopTrain1 ();
		}

	}

	void failPanel ()
	{

		gui.LevelFailed ();
	}
}
