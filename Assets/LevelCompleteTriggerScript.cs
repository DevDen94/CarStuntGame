using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelCompleteTriggerScript : MonoBehaviour
{
	void OnTriggerEnter (Collider other)
	{
		if (other.tag == "TrainHead") {
		//	Camera.main.GetComponent<BridgeBuilderGUI> ().LevelComplete ();

		}
	}
}
