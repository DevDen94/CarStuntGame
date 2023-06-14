using UnityEngine;
using System.Collections;

public class BridgeBeam : MonoBehaviour {

	public PhysicMaterial beamMaterial;
	
	public enum eBeamState {
		LayoutMode,
		BuiltMode,
		TestingMode,
	};

	public enum eBeamAppereanceState {
		NormalMode,
		ForceMode,
	};

	public BridgeSetup bridgeSetupParent = null;
	public bool isRoadLevel = false;
	public bool IsRoadBeam = false;
	public eBeamState BeamState = eBeamState.LayoutMode;
	public eBeamAppereanceState BeamAppereanceState = eBeamAppereanceState.NormalMode;

	public GameObject beam;
	public GameObject road;
	private HingeJoint startJoint;
	private HingeJoint endJoint;
	private FixedJoint beamStartJoint;
	private FixedJoint beamEndJoint;

	private GameObject anchorStart;
	private GameObject pointStart;
	private GameObject pointEnd;
	private GameObject anchorEnd;

	private Color originalColor;

	private static Plane beamPlane = new Plane(Vector3.forward, new Vector3(0.0f, 0.0f, 0.0f));
	private const float MAX_BEAM_DISTANCE = 4.0f;

	public GameObject PointStart {
		get { return pointStart; }
	}
	
	public GameObject PointEnd {
		get { return pointEnd; }
	}

	/** Creates a beam with the following features:
	 *  - clickPosition: World point where the mouse clicked to start
	 *  - hingePoint: The Anchor used to build the beam from
	 *  - bs: BridgeSetup object to callback some functions
	 */
	public void StartLayout(Vector3 clickPosition, GameObject hingePoint, BridgeSetup bs) {
		transform.position = clickPosition;

		//beam = transform.Find("Beam").gameObject;

		//beam = transform.GetChild (0).GetChild (0).gameObject;
		pointStart = transform.Find("PointStart").gameObject;
		pointStart.GetComponent<SnapPoint>().bridgeSetupParent = bs;
		pointStart.GetComponent<SnapPoint>().bridgeBeamParent = this;
		
		pointEnd = transform.Find("PointEnd").gameObject;
		pointEnd.GetComponent<SnapPoint>().bridgeSetupParent = bs;
		pointEnd.GetComponent<SnapPoint>().bridgeBeamParent = this;
		
		pointStart.GetComponent<Rigidbody>().isKinematic = true;
		beam.GetComponent<Rigidbody>().isKinematic = true;
		pointEnd.GetComponent<Rigidbody>().isKinematic = true;
		
		anchorStart = hingePoint;

		originalColor = beam.GetComponent<Renderer> ().material.color;
		
		BeamState = eBeamState.LayoutMode;
	}

	// Update is called once per frame
	void Update () {


		if(eBeamState.LayoutMode == BeamState) {
			//Player clicks up and ends positioning beam
			if (Input.GetMouseButtonUp(0)){
				BeamState = eBeamState.BuiltMode;
				DestroyIfSamePosition();

				anchorEnd = bridgeSetupParent.GetOtherEndPoint(pointEnd);

			}

			//Position beam according to the layout
			if (Input.GetMouseButton(0)) {
				Ray r = Camera.main.ScreenPointToRay(Input.mousePosition);
				float distance = 0;
				beamPlane.Raycast(r, out distance);
				Vector3 p = r.GetPoint(distance);
				pointEnd.transform.position = LimitPointDistance(p, pointStart);
				pointEnd.GetComponent<ResetPhysics>().UpdatePosition();
				IsRoadBeam = bridgeSetupParent._levelData.roadCounter > bridgeSetupParent.currentRoadsCount;
				if (IsRoadBeam) {
					road.SetActive (true);
					road.GetComponent<ResetPhysics> ().UpdatePosition ();
				} else {
					beam.SetActive (true);
					beam.GetComponent<ResetPhysics> ().UpdatePosition ();
				}
				Debug.LogError (bridgeSetupParent._levelData.roadCounter);
				Debug.LogError (bridgeSetupParent.currentRoadsCount);
				Debug.LogError (bridgeSetupParent._levelData.roadCounter > bridgeSetupParent.currentRoadsCount);

				//IsRoadBeam = bridgeSetupParent.IsInRoadLevel(pointStart.transform.position, pointEnd.transform.position);
				PositionBeam ();
			}

			if (Input.GetMouseButtonUp (0)) {
				Debug.LogError ("in");
				if (IsRoadBeam) {
					bridgeSetupParent.currentRoadsCount++;
					Debug.LogError (bridgeSetupParent.currentRoadsCount);
				} else {
					bridgeSetupParent.currentBeamsCount++;
					Debug.LogError (bridgeSetupParent.currentBeamsCount);
				}
			}

		}




		ColorBeam();
	}

	public void SetToPlay() {
		Vector3 beamVector = pointEnd.transform.position - pointStart.transform.position;


		//Create collider for beam
		MeshCollider cc = null;
		if (IsRoadBeam) {
			cc = road.AddComponent<MeshCollider>();
		} else {
			cc = beam.AddComponent<MeshCollider> ();

		}
		cc.sharedMesh = cc.GetComponent<MeshFilter>().mesh;   //4.0f
	//	cc.radius = .25f; /////0.25f
		cc.material = beamMaterial;
		cc.convex = true;
	//	cc.center.ma = -3.36f;
		
		//Create fixed joints for beam and points
		if (anchorStart) {
			bool terrainAnchor = anchorStart.GetComponent<SnapPoint>().isBaseTerrain;
			startJoint = pointStart.AddComponent<HingeJoint> ();
            startJoint.anchor = Vector3.zero;
            startJoint.autoConfigureConnectedAnchor = true;
            //startJoint.connectedAnchor = new Vector3(0.0f, 0.0f, 0.0f);
            startJoint.connectedBody = anchorStart.GetComponent<Rigidbody>();
            startJoint.axis = Vector3.forward;
            	startJoint.breakForce = terrainAnchor? 1000.0f: 500.0f;
          ///////  startJoint.breakForce = bridgeSetupParent._levelData.breakForce;
        }

		if (anchorEnd) {
			bool terrainAnchor = anchorStart.GetComponent<SnapPoint>().isBaseTerrain;
			endJoint = pointEnd.AddComponent<HingeJoint> ();
            endJoint.anchor = Vector3.zero;
            endJoint.autoConfigureConnectedAnchor = true;
            //endJoint.connectedAnchor = new Vector3(1.0f, 0.0f, 0.0f);
            endJoint.connectedBody = anchorEnd.GetComponent<Rigidbody>();
            endJoint.axis = Vector3.forward;
           	endJoint.breakForce = terrainAnchor? 1000.0f: 500.0f;
           /////////// endJoint.breakForce = bridgeSetupParent._levelData.breakForce;
        }


		if (IsRoadBeam) {
		beamStartJoint = road.AddComponent<FixedJoint> ();
		road.GetComponent<Rigidbody>().isKinematic = false;
		road.GetComponent<Rigidbody>().WakeUp();

			beamEndJoint = road.AddComponent<FixedJoint> ();

		} else {
			beamStartJoint = beam.AddComponent<FixedJoint> ();
			beam.GetComponent<Rigidbody> ().isKinematic = false;
			beam.GetComponent<Rigidbody> ().WakeUp ();
			beamEndJoint = beam.AddComponent<FixedJoint> ();

		}

		beamStartJoint.autoConfigureConnectedAnchor = true;
		beamStartJoint.connectedBody = pointStart.GetComponent<Rigidbody>();

		Debug.Log("fixedJoint",beamStartJoint.gameObject);



		beamEndJoint.autoConfigureConnectedAnchor = true;
		beamEndJoint.connectedBody = pointEnd.GetComponent<Rigidbody>();

		pointStart.GetComponent<Rigidbody>().isKinematic = false;
		pointEnd.GetComponent<Rigidbody>().isKinematic = false;
		
		pointStart.GetComponent<Rigidbody>().WakeUp();
		pointEnd.GetComponent<Rigidbody>().WakeUp();

	}

	public void ResetToSetup() {

		ResetPhysics _reset = null;
		MeshCollider _mesh = null;
		Renderer _renderer = null;
		Rigidbody _rb = null;

		if (IsRoadBeam) {
			_reset = road.GetComponent<ResetPhysics> ();
			_mesh = road.GetComponent<MeshCollider> ();
			_rb = road.GetComponent<Rigidbody> ();
			_renderer = road.GetComponent<Renderer> ();
		}
		else {
			_reset = beam.GetComponent<ResetPhysics> ();
			_mesh = beam.GetComponent<MeshCollider> ();
			_rb = beam.GetComponent<Rigidbody> ();
			_renderer = beam.GetComponent<Renderer> ();
		}

		_reset.Reset ();
		pointStart.GetComponent<ResetPhysics>().Reset();
		pointEnd.GetComponent<ResetPhysics>().Reset();

		// Destroy all joints created on SetToPlay()
		if (startJoint) {
			Destroy (startJoint);
		}
		if (endJoint) {
			Destroy (endJoint);
		}
		Destroy (beamStartJoint);
		Destroy (beamEndJoint);
		Destroy(_mesh);
		Debug.LogError (_rb.gameObject, _rb.gameObject);
		_rb.isKinematic = true;
		pointStart.GetComponent<Rigidbody>().isKinematic = true;
		pointEnd.GetComponent<Rigidbody>().isKinematic = true;

		PositionBeam();

		_renderer.enabled = true;
		pointStart.GetComponent<Renderer>().enabled = false;
		pointEnd.GetComponent<Renderer>().enabled = false;

		BeamAppereanceState = eBeamAppereanceState.NormalMode;
		BeamState = eBeamState.BuiltMode;
	}

	public void Break() {
		//beam.renderer.enabled = false;
		pointStart.GetComponent<Renderer>().enabled = false;
		pointEnd.GetComponent<Renderer>().enabled = false;
	}

	private Vector3 LimitPointDistance(Vector3 mousePos, GameObject start) {
		return bridgeSetupParent.GetSnapPointFromPosition(mousePos, start.transform.position, MAX_BEAM_DISTANCE);
	}

	private void DestroyIfSamePosition() {
		if ((pointStart.transform.position - pointEnd.transform.position).magnitude < Mathf.Epsilon) {
			Destroy(gameObject);
		}
	}

	private void PositionBeam ()
	{


		if (IsRoadBeam) {
			Vector3 beamVector = pointEnd.transform.position - pointStart.transform.position;

			//beam.transform.position = pointStart.transform.position + beamVector / 2.0f;
			Vector3 beamScale = new Vector3 (beamVector.magnitude * 33.3f, road.transform.localScale.y, road.transform.localScale.z);
			road.transform.localScale = beamScale;

			Vector3 euAngles = road.transform.parent.eulerAngles;
			Quaternion qt = Quaternion.identity;

			euAngles.z = Mathf.Atan2 (beamVector.y, beamVector.x) * Mathf.Rad2Deg;
			qt.eulerAngles = euAngles;

			road.transform.parent.localRotation = qt;
			originalColor.a = 1.0f;
			road.layer = 9; //collides with train

		}
		else {
			Vector3 beamVector = pointEnd.transform.position - pointStart.transform.position;

			//beam.transform.position = pointStart.transform.position + beamVector / 2.0f;
			Vector3 beamScale = new Vector3 (  beamVector.magnitude *50f, beam.transform.localScale.y, beamVector.magnitude *50f);
			beam.transform.localScale = beamScale;

			Vector3 euAngles = beam.transform.parent.eulerAngles;
			Quaternion qt = Quaternion.identity;

			euAngles.z = Mathf.Atan2 (beamVector.y, beamVector.x) * Mathf.Rad2Deg;
			qt.eulerAngles = euAngles;

			beam.transform.parent.localRotation = qt;
			originalColor.a = 0.5f;
			beam.layer = 10; //does not collide with train
		}
	}
	
	private void ColorBeam() {
		Color c = originalColor;
		if (eBeamAppereanceState.ForceMode == BeamAppereanceState) {
			c = getForceColor();
		}
		if (IsRoadBeam) {
			road.GetComponent<Renderer> ().material.color = c;

		} else
		beam.GetComponent<Renderer> ().material.color = c;
	}

	private Color getForceColor() {
		Color b = Color.blue;
		Color r = Color.red;
		float t = startJoint.breakForce == Mathf.Infinity? 0.0f: startJoint.breakForce;
		
		return Color.Lerp (b, r, t);
	}

}
