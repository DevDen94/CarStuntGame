using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelCompleteTriggerScript : MonoBehaviour
{
	void OnTriggerEnter (Collider other)
	{
		if (other.tag == "TrainHead") {
				Camera.main.GetComponent<BridgeBuilderGUI> ().LevelComplete ();
			other.transform.parent.GetComponent<TrainController> ().trainWorking = false;
			other.transform.parent.GetComponent<TrainController> ().trainDirection = Vector3.zero;
			Camera.main.GetComponent<BridgeBuilderGUI> ().StopTrain ();
			other.transform.parent.GetComponent<TrainController> ();
			//TrainController.instance.trainWorking = false;
			//TrainController.instance.trainDirection = new Vector3(0.0f, 0.0f, 0.0f);

		}
	}
}