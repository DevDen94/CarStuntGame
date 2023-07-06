using UnityEngine;
using System.Collections;

public class ResetPhysics : MonoBehaviour {

	private Vector3 position;
	private Quaternion rotation;
	bool tapped = false;
	public GameObject dustParticlePrefab
		;

	void Awake () {
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

	void OnMouseDown ()
	{

		deleteBeam ();
	}

	public void deleteBeam ()
	{
		if (gameObject.tag == "road" || gameObject.tag == "beam"||gameObject.tag=="rope") {

			Debug.LogError ("onmouseDown");
			if (tapped) {
				BridgeBeam b = GetComponentInParent<BridgeBeam> ();
				Debug.LogError ("destroy");
				if (b.bridgeSetupParent.LevelStage == BridgeSetup.eLevelStage.SetupStage) {
					b.anchorStart = null;
					Transform temp = Instantiate (dustParticlePrefab ,transform).transform;

					Vector3 pos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
					pos.z = 0;
					temp.position = pos;
					temp.parent = null;
					temp.localScale = Vector3.one;
					DestroyImmediate (b.gameObject);
				}
			} else {
				tapped = true;
				Invoke ("tapCounter", .5f);
			}	
		}
		
	}

	void tapCounter ()
	{
		tapped = false;
	}
}
