using UnityEngine;
using System.Collections;

public class ResetPhysics : MonoBehaviour {

	private Vector3 position;
	private Quaternion rotation;

	void Start () {
		UpdatePosition();
	}

	public void UpdatePosition() {
		position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
		rotation = new Quaternion(transform.rotation.x, transform.rotation.y, transform.rotation.z, transform.rotation.w);
	}

	public void Reset() {
		transform.position = position;
		transform.rotation = rotation;
		GetComponent<Rigidbody>().velocity = Vector3.zero;
		GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
	}
}
