using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class animateCamera : MonoBehaviour
{
	public Vector3 targetROtation;
	public float time = 5;

	void Start ()
	{
		iTween.RotateTo (gameObject, iTween.Hash ("rotation", targetROtation, "time", time, "easetype", iTween.EaseType.linear, "looptype", iTween.LoopType.pingPong));
	}

}
