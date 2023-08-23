using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class angleSetter : MonoBehaviour
{
	void LateUpdate ()
	{
		if (Input.GetMouseButtonUp (0)) {
			if (transform.eulerAngles.z == 1)
				transform.eulerAngles = new Vector3 (transform.eulerAngles.x, transform.eulerAngles.y, 0);
			if (transform.eulerAngles.z == 271)
				transform.eulerAngles = new Vector3 (transform.eulerAngles.x, transform.eulerAngles.y, 270);

			if (transform.eulerAngles.z == -1)
				transform.eulerAngles = new Vector3 (transform.eulerAngles.x, transform.eulerAngles.y, 0);
			if (transform.eulerAngles.z == -271)
				transform.eulerAngles = new Vector3 (transform.eulerAngles.x, transform.eulerAngles.y, 270);

			if (transform.eulerAngles.z == 359)
				transform.eulerAngles = new Vector3 (transform.eulerAngles.x, transform.eulerAngles.y, 360);
			if (transform.eulerAngles.z == 179)
				transform.eulerAngles = new Vector3 (transform.eulerAngles.x, transform.eulerAngles.y, 180);

			if (transform.eulerAngles.z == -359)
				transform.eulerAngles = new Vector3 (transform.eulerAngles.x, transform.eulerAngles.y, -360);
			if (transform.eulerAngles.z == -179)
				transform.eulerAngles = new Vector3 (transform.eulerAngles.x, transform.eulerAngles.y, -180);


			Debug.LogError (transform.eulerAngles.z);
		}
	}
}
