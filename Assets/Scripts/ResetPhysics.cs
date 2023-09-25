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

		
	}

	public void deleteBeam ()
	{
		
		if (gameObject.tag == "road" || gameObject.tag == "beam"||gameObject.tag=="rope") {

			
			if (tapped) {
				AudioManager.instance.beamDestroy.Play();
				 b = GetComponentInParent<BridgeBeam> ();
				
				if (b.bridgeSetupParent.LevelStage == BridgeSetup.eLevelStage.SetupStage) {
					
					Transform temp = Instantiate (dustParticlePrefab ,transform).transform;

					Vector3 pos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
					pos.z = 0;
					temp.position = pos;
					temp.parent = null;
					temp.localScale = Vector3.one;
					b.decreaseCounter (true);
					b.bridgeSetupParent.SetEndPoints();
					
					b.bridgeSetupParent.gui.updateListCount();
					b.bridgeSetupParent.allCreatedBeams.Remove(b);
				b.bridgeSetupParent.DestroyBeam(b.gameObject);
				
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
			
				if (joints[i]==null) {
				
					AudioManager.instance.beamDestroy.Play();
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


		

				OverlappingBeam = new Vector3 (Mathf.Round (other.transform.parent.eulerAngles.x), Mathf.Round (other.transform.parent.eulerAngles.y), Mathf.Round (other.transform.parent.eulerAngles.z)).ToString ();



			Vector3 current = transform.parent.eulerAngles;
			Vector3 collided = Vector3.zero/* = other.transform.eulerAngles.normalized*/;
			
			collided = other.transform.parent.eulerAngles;
            Vector3 onSamePlainVector = Vector3.Cross(current, collided);


			bool onSamePlain = onSamePlainVector == Vector3.zero;


          

			if (eulerAngle == OverlappingBeam&&!oneTimeCollision ) 
			{
				float beamVecMagnitude1 = (b.pointEnd.transform.position - b.pointStart.transform.position).magnitude;
				float beamVecMagnitude2 = (other.GetComponentInParent<BridgeBeam>().pointEnd.transform.position - other.GetComponentInParent<BridgeBeam>().pointStart.transform.position).magnitude;

			

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
				
					b = GetComponentInParent<BridgeBeam>();
					if (b.transform.GetSiblingIndex() > other.transform.GetComponentInParent<BridgeBeam>().transform.GetSiblingIndex())
					{
					
						b.decreaseCounter(true);
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
			b.bridgeSetupParent.gui.updateListCount();
			b.bridgeSetupParent.allCreatedBeams.Remove(b);
			b.bridgeSetupParent.DestroyBeam(b.gameObject);
		}
    }
}
