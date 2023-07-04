using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelCompleteTriggerScript : MonoBehaviour
{
	void OnTriggerEnter (Collider other)
	{
		if (other.tag == "TrainHead") {
			//	Camera.main.GetComponent<BridgeBuilderGUI> ().LevelComplete ();
			TrainController.instance.trainDirection = new Vector3(0.0f, 0.0f, 0.0f);

		}
	}
}