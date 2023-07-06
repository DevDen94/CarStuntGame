using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ropeDestroyOnTouch : MonoBehaviour
{
	void OnMouseDown ()
	{
		Debug.LogError ("rope");
		transform.parent.GetComponent<ResetPhysics> ().deleteBeam ();
	}
}
