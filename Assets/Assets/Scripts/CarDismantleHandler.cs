using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarDismantleHandler : MonoBehaviour
{
	public dismantler _dismantler;
	void OnCollisionEnter (Collision collision)
	{
		Debug.Log (collision.gameObject.tag);
		if (collision.gameObject.tag == "death") {
			_dismantler.enabled = true;
		}
	}
}
