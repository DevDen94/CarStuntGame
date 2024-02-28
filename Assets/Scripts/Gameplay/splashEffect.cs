using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class splashEffect : MonoBehaviour
{

	public GameObject splashEffectPrefab;


	void OnTriggerEnter (Collider other)
	{
//		Debug.LogError (other.tag);
		if (other.tag == "road" || other.tag == "beam" || other.tag == "rope") {
			
	
			//Instantiate (splashEffectPrefab, other.ClosestPoint(other.transform.position), Quaternion.identity, null);
		}

		
	}

}
