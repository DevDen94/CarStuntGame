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
		joints = new HingeJoint [0];
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

		//deleteBeam ();
	}

	public void deleteBeam ()
	{
		//AudioManager.instance.beamDestroy.Play();
		if (gameObject.tag == "road" || gameObject.tag == "beam"||gameObject.tag=="rope") {

			//AudioManager.instance.beamDestroy.Play();
			if (tapped) {
				AudioManager.instance.beamDestroy.Play();
				BridgeBeam b = GetComponentInParent<BridgeBeam> ();
				//Debug.LogError ("destroy");
				if (b.bridgeSetupParent.LevelStage == BridgeSetup.eLevelStage.SetupStage) {
					//b.anchorStart = null;
					Transform temp = Instantiate (dustParticlePrefab ,transform).transform;

					Vector3 pos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
					pos.z = 0;
					temp.position = pos;
					temp.parent = null;
					temp.localScale = Vector3.one;
					b.decreaseCounter ();
					//int index = b.bridgeSetupParent.allCreatedBeams.IndexOf(b);
					//b.bridgeSetupParent.allCreatedBeams.RemoveAt(index);
					b.bridgeSetupParent.gui.updateListCount();
					b.bridgeSetupParent.allCreatedBeams.Remove(b);
				b.bridgeSetupParent.DestroyBeam(b.gameObject);
				//	DestroyImmediate(b.gameObject);
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
	HingeJoint[] joints;
	void Update ()
	{
		if(joints.Length> 0) {
			for (int i = 0; i < joints.Length; i++) {
				//Debug.LogError (joints [i].currentForce.magnitude,joints[i].gameObject);
				//Debug.LogError (joints [i].breakForce, joints [i].gameObject);
				if (joints[i]==null) {
					Debug.Log ("break");
					Transform temp = Instantiate (dustParticlePrefab, transform).transform;

					Vector3 pos = transform.position;
					pos.z = 0;
					temp.position = pos;
					temp.parent = null;
					temp.localScale = Vector3.one;
					assignJoints ();
				}
			}
		}
	}

	public void assignJoints ()
	{
		joints = GetComponents<HingeJoint> ();

	}
	public void resetJoints ()
	{
		joints = new HingeJoint [0];
	}
}
