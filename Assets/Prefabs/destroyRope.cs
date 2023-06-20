using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destroyRope : MonoBehaviour
{

	public bool ropeExpanded = false;
	public Vector3 spawnPoint;

	void Start ()
	{
		spawnPoint = transform.position;
	}

	void Update ()
	{
		if(!ropeExpanded&&transform.localScale.y>0) {
			ropeExpanded = true;
		}

		if (ropeExpanded&&transform.localScale.y==0) {
			DestroyImmediate (gameObject);
		}
	}

}
