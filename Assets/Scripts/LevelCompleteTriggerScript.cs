using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelCompleteTriggerScript : MonoBehaviour
{
	public GameObject m_Particle;
	BridgeBuilderGUI gui;
	void Start ()
	{
		gui =FindObjectOfType<BridgeBuilderGUI> ();
	}
	void OnTriggerEnter (Collider other)
	{
		if (other.tag == "TrainHead") {
		
			Invoke ("CompletePanel", 1);
			other.transform.parent.GetComponent<TrainController> ().trainWorking = false;
			other.transform.parent.GetComponent<TrainController> ().trainDirection = Vector3.zero;
			gui.StopTrain1 ();
			m_Particle.SetActive(true);
		}
	}

	void CompletePanel ()
	{
		gui.LevelComplete ();
	}
}