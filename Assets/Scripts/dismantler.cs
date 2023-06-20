using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class dismantler : MonoBehaviour
{
	public Rigidbody mainBody;
	public GameObject W1, W2, W3, W4;


	Vector3 pos1, pos2, pos3, pos4;

	void Start ()
	{
		pos1 = W1.transform.localPosition;
		pos2 = W2.transform.localPosition; pos3 = W3.transform.localPosition; pos4 = W4.transform.localPosition;
	}

	void OnEnable ()
	{
		dismantle ();
	}

	void OnDisable ()
	{
		Reset ();
	}

	void dismantle ()
	{
		//	Destroy (mainBody);

		W1.transform.parent = (transform);
		W2.transform.parent = (transform);
		W3.transform.parent = (transform);
		W4.transform.parent = (transform);

		HingeJoint _W1 = W1.AddComponent<HingeJoint> ();
		HingeJoint _W2 = W2.AddComponent<HingeJoint> (); HingeJoint _W3 = W3.AddComponent<HingeJoint> (); HingeJoint _W4 = W4.AddComponent<HingeJoint> ();

		_W1.connectedBody = mainBody;
		_W2.connectedBody = mainBody; _W3.connectedBody = mainBody; _W4.connectedBody = mainBody;

		_W1.breakForce = 0;
		_W2.breakForce = 0; _W3.breakForce = 0; _W4.breakForce = 0;

		BoxCollider box_W1 = W1.AddComponent<BoxCollider> ();
		BoxCollider box_W4 = W4.AddComponent<BoxCollider> (); BoxCollider box_W3 = W3.AddComponent<BoxCollider> (); BoxCollider box_W2 = W2.AddComponent<BoxCollider> ();

		box_W1.size = new Vector3 (0.1f, 0.2f, 0.2f);
		box_W2.size = new Vector3 (0.1f, 0.2f, 0.2f);
		box_W3.size = new Vector3 (0.1f, 0.2f, 0.2f);
		box_W4.size = new Vector3 (0.1f, 0.2f, 0.2f);


	}

	void Reset ()
	{
		Destroy (W1.GetComponent<HingeJoint> ());
		Destroy (W2.GetComponent<HingeJoint> ());
		Destroy (W3.GetComponent<HingeJoint> ());
		Destroy (W4.GetComponent<HingeJoint> ());

		Destroy (W1.GetComponent<Rigidbody> ());
		Destroy (W2.GetComponent<Rigidbody> ());
		Destroy (W3.GetComponent<Rigidbody> ());
		Destroy (W4.GetComponent<Rigidbody> ());

		Destroy (W1.GetComponent<BoxCollider> ());
		Destroy (W2.GetComponent<BoxCollider> ());
		Destroy (W3.GetComponent<BoxCollider> ());
		Destroy (W4.GetComponent<BoxCollider> ());

		W1.transform.parent = mainBody.transform;
		W2.transform.parent = mainBody.transform; W3.transform.parent = mainBody.transform; W4.transform.parent = mainBody.transform;

		W1.transform.localPosition = pos1;
		W2.transform.localPosition = pos2;
		W3.transform.localPosition = pos3;
		W4.transform.localPosition = pos4;

		mainBody.velocity = Vector3.zero;
		mainBody.angularVelocity = Vector3.zero;

	}
}
