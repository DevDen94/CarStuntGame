using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Obi;
public class RopeLengthController : MonoBehaviour
{
	public float speed = 10;
	ObiRopeCursor cursor;
	public ObiRope rope;

	void Start ()
	{
		cursor = GetComponentInChildren<ObiRopeCursor> ();
		//rope = cursor.GetComponent<ObiRope> ();
	}

	void Update ()
	{
		Debug.LogError (rope.restLength);
		if (Input.GetMouseButton(1))
			cursor.ChangeLength (rope.restLength - speed * Time.deltaTime);

		if (Input.GetKey(KeyCode.Space))
			cursor.ChangeLength (rope.restLength + speed * Time.deltaTime);
	}
}
