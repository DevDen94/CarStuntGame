using UnityEngine;
using System.Collections;

public class ResetPhysics : MonoBehaviour {

	private Vector3 position;
	private Quaternion rotation;
	bool tapped = false;
	public GameObject dustParticlePrefab;

	BridgeBeam b;
	bool oneTimeCollision = false;

	void Awake () {
		UpdatePosition();
		joints = new HingeJoint [0];
		b = GetComponentInParent<BridgeBeam>();
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
				 b = GetComponentInParent<BridgeBeam> ();
				//Debug.LogError ("destroy");
				if (b.bridgeSetupParent.LevelStage == BridgeSetup.eLevelStage.SetupStage) {
					//b.anchorStart = null;
					Transform temp = Instantiate (dustParticlePrefab ,transform).transform;

					Vector3 pos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
					pos.z = 0;
					temp.position = pos;
					temp.parent = null;
					temp.localScale = Vector3.one;
					b.decreaseCounter (true);
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

	public Vector3 onSamePlainVector;

    private void OnTriggerEnter(Collider other)
    {
		if ((gameObject.tag == "road" || gameObject . tag == "beam") && (other.gameObject.tag == "beam" || other.gameObject.tag == "road")&&b.gameObject==b.bridgeSetupParent.currentBeam)
		{
			string eulerAngle = null;
			string OverlappingBeam = null;

			float z = 0;

			eulerAngle = new Vector3(Mathf.Round(transform.parent.eulerAngles.x), Mathf.Round (transform.parent.eulerAngles.y), Mathf.Round (transform.parent.eulerAngles.z)).ToString();


			Debug.LogError ("zAxis = " + transform.eulerAngles.z);

				OverlappingBeam = new Vector3 (Mathf.Round (other.transform.parent.eulerAngles.x), Mathf.Round (other.transform.parent.eulerAngles.y), Mathf.Round (other.transform.parent.eulerAngles.z)).ToString ();


			//	if (gameObject.tag == "road") {

			//	OverlappingBeam = new Vector3 (Mathf.Round (other.transform.parent.GetChild (1).eulerAngles.x), Mathf.Round (other.transform.parent.GetChild (1).eulerAngles.y), Mathf.Round (other.transform.parent.GetChild (1).eulerAngles.z)).ToString ();
			//} else if (gameObject.tag == "beam") {


			//		OverlappingBeam = new Vector3 (Mathf.Round (other.transform.parent.GetChild (0).eulerAngles.x), Mathf.Round (other.transform.parent.GetChild (0).eulerAngles.y), Mathf.Round (other.transform.parent.GetChild (0).eulerAngles.z)).ToString ();
			//}
			Debug.LogError(b.gameObject == b.bridgeSetupParent.currentBeam, b.gameObject);
			Debug.LogError (OverlappingBeam);
			Debug.LogError (eulerAngle);
			//Vector3 onSamePlainVector = Vector3.Cross(transform.eulerAngles,other.transform.eulerAngles);
			//onSamePlainVector.x = Mathf.Abs(onSamePlainVector.x);
			//onSamePlainVector.y = Mathf.Abs(onSamePlainVector.y);
			//onSamePlainVector.z = Mathf.Abs(onSamePlainVector.z);

			Vector3 current = transform.parent.eulerAngles;
			Vector3 collided = Vector3.zero/* = other.transform.eulerAngles.normalized*/;
			// if (other.gameObject.tag == "road")
			//   collided = new Vector3(other.transform.parent.GetChild(1).eulerAngles.x, other.transform.parent.GetChild(1).eulerAngles.y, other.transform.parent.GetChild(1).eulerAngles.z);
			// else if (other.gameObject.tag == "beam")
			//   collided = new Vector3(other.transform.parent.GetChild(0).eulerAngles.x, other.transform.parent.GetChild(0).eulerAngles.y, other.transform.parent.GetChild(0).eulerAngles.z);
			collided = other.transform.parent.eulerAngles;
            Vector3 onSamePlainVector = Vector3.Cross(current, collided);


			bool onSamePlain = onSamePlainVector == Vector3.zero;


            Debug.LogError(onSamePlainVector,gameObject);

			if (eulerAngle == OverlappingBeam&&!oneTimeCollision ) 
			{
				float beamVecMagnitude1 = (b.pointEnd.transform.position - b.pointStart.transform.position).magnitude;
				float beamVecMagnitude2 = (other.GetComponentInParent<BridgeBeam>().pointEnd.transform.position - other.GetComponentInParent<BridgeBeam>().pointStart.transform.position).magnitude;

				//float totalLength = beamVecMagnitude1 + beamVecMagnitude2;

				float totalLength = (b.pointEnd.transform.position - other.GetComponentInParent<BridgeBeam>().pointEnd.transform.position).magnitude;


				float greaterValue = 0;

				if (beamVecMagnitude1 > beamVecMagnitude2)
					greaterValue = beamVecMagnitude1;
				else
					greaterValue = beamVecMagnitude2;

				bool isOnOppositeDirection = (totalLength <= greaterValue);

				if (isOnOppositeDirection)
				{
					oneTimeCollision = true;
					//	BridgeSetup.destroyUsingTrigger = false;
					b = GetComponentInParent<BridgeBeam>();
					if (b.transform.GetSiblingIndex() > other.transform.GetComponentInParent<BridgeBeam>().transform.GetSiblingIndex())
					{
						Debug.LogError(other.name, other.gameObject);
						Debug.LogError(transform.GetSiblingIndex());
						Debug.LogError(other.transform.GetSiblingIndex());
						b.decreaseCounter(true);
						//int index = b.bridgeSetupParent.allCreatedBeams.IndexOf(b);
						//b.bridgeSetupParent.allCreatedBeams.RemoveAt(index);
						b.bridgeSetupParent.gui.updateListCount();
						b.bridgeSetupParent.allCreatedBeams.Remove(b);
						b.bridgeSetupParent.DestroyBeam(b.gameObject);
					}
				}

			}
        }

		if ((gameObject.tag == "road" || gameObject.tag == "beam") && other.gameObject.tag == "rock"&& BridgeSetup.eLevelStage.SetupStage == b.bridgeSetupParent.LevelStage)
		{
			b = GetComponentInParent<BridgeBeam>();
			b.decreaseCounter(true);
			//int index = b.bridgeSetupParent.allCreatedBeams.IndexOf(b);
			//b.bridgeSetupParent.allCreatedBeams.RemoveAt(index);
			b.bridgeSetupParent.gui.updateListCount();
			b.bridgeSetupParent.allCreatedBeams.Remove(b);
			b.bridgeSetupParent.DestroyBeam(b.gameObject);
		}
    }
}
