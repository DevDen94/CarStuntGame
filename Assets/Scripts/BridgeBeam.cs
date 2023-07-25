using UnityEngine;
using System.Collections.Generic;
//using Obi;
using System;

public class BridgeBeam : MonoBehaviour {

	public PhysicMaterial beamMaterial;
	BridgeBuilderGUI bridgeBuilderGUI;
	List<Vector3> spawnPoints = new List<Vector3> ();
	
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
	public bool isRope = false;
	public bool IsBeamCount = false;
	public eBeamState BeamState = eBeamState.LayoutMode;
	public eBeamAppereanceState BeamAppereanceState = eBeamAppereanceState.NormalMode;

	public GameObject beam;
	public GameObject road;
	public GameObject rope;
	public HingeJoint startJoint;
	public HingeJoint endJoint;
	private FixedJoint beamStartJoint;
	private FixedJoint beamEndJoint;

	public GameObject anchorStart;
	public GameObject pointStart;
	public GameObject pointEnd;
	public GameObject anchorEnd;

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

    private void Start()
    {
	
		bridgeBuilderGUI = Camera.main.GetComponent<BridgeBuilderGUI>();


    }
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
	public BridgeBuilderGUI.beamType beamType;

	public void reassignEndPoint()
	{
        anchorEnd = bridgeSetupParent.GetOtherEndPoint(pointEnd);
    }

	public void reassignStartPoint()
	{
        anchorStart = bridgeSetupParent.GetOtherEndPoint(pointStart);
    }

	// Update is called once per frame
	void Update () {


		if(eBeamState.LayoutMode == BeamState) {
			//Player clicks up and ends positioning beam
			if (Input.GetMouseButtonUp(0)){
				BeamState = eBeamState.BuiltMode;
				DestroyIfSamePosition();

				anchorEnd = bridgeSetupParent.GetOtherEndPoint(pointEnd);
			//	Debug.Log (anchorEnd);
			}

			//Position beam according to the layout
			if (Input.GetMouseButton(0))
			{
				Ray r = Camera.main.ScreenPointToRay(Input.mousePosition);
				float distance = 0;
				beamPlane.Raycast(r, out distance);
				Vector3 p = r.GetPoint(distance);
				pointEnd.transform.position = LimitPointDistance(p, pointStart);
				pointEnd.GetComponent<ResetPhysics>().UpdatePosition();
				IsRoadBeam = bridgeSetupParent._levelData.roadCounter > bridgeSetupParent.currentRoadsCount;
				IsBeamCount = bridgeSetupParent._levelData.beamsCounter > bridgeSetupParent.currentBeamsCount;
				isRope = bridgeSetupParent._levelData.ropeCounter > bridgeSetupParent.currentRopeCount;

				beamType = bridgeBuilderGUI._beamType;

				if (IsRoadBeam && beamType == BridgeBuilderGUI.beamType.road)
				{
					road.SetActive(true);
					rope.SetActive (false);
					road.GetComponent<ResetPhysics>().UpdatePosition();
					PositionBeam ();
				}
				else if (IsBeamCount && beamType == BridgeBuilderGUI.beamType.beam)
				{
					rope.SetActive (false);
					beam.SetActive(true);
					beam.GetComponent<ResetPhysics>().UpdatePosition();
					PositionBeam ();
				}
				else if (beamType == BridgeBuilderGUI.beamType.rope && bridgeSetupParent.isRope)
				{
					PositionBeam ();
					//rope.SetActive(true);
//					Debug.LogError (rope.name);
					//for (int i = 0; i < 2; i++)
					//{
					////	rope.transform.GetChild(i).GetComponent<ResetPhysics>().UpdatePosition();
					//}
				} else {
					rope.SetActive (false);

				}
//				Debug.LogError(bridgeSetupParent._levelData.roadCounter);
//				Debug.LogError(bridgeSetupParent.currentRoadsCount);
//				Debug.LogError(bridgeSetupParent._levelData.roadCounter > bridgeSetupParent.currentRoadsCount);

				//IsRoadBeam = bridgeSetupParent.IsInRoadLevel(pointStart.transform.position, pointEnd.transform.position);
				
			}

			if (Input.GetMouseButtonUp (0)) {

				Vector3 beamVector = pointEnd.transform.position - pointStart.transform.position;
//				Debug.LogError (beamVector.magnitude);
				if (IsRoadBeam && beamType == BridgeBuilderGUI.beamType.road) {
					bridgeSetupParent.currentRoadsCount++;
//					Debug.LogError (bridgeSetupParent.currentRoadsCount);
					addCollider ();
					if (beamVector.magnitude < .1f) {
						decreaseCounter ();
						Destroy (gameObject);
					}

				} else if (IsBeamCount && beamType == BridgeBuilderGUI.beamType.beam) {
					bridgeSetupParent.currentBeamsCount++;

				//	Debug.LogError (bridgeSetupParent.currentBeamsCount);
					addCollider ();
					if (beamVector.magnitude < .1f) {
						decreaseCounter ();

						Destroy (gameObject);
					}
				} else if (isRope && beamType == BridgeBuilderGUI.beamType.rope) {
					//SetUpRope ();
					bridgeSetupParent.currentRopeCount++;
					addCollider ();
					//Debug.LogError (beamVector.magnitude);
					if (beamVector.magnitude < .1f)
					{
						decreaseCounter();

						Destroy(gameObject);
					}
				} else {
				//	Debug.LogError ("___________");
							Destroy (gameObject);
					
				}
				bridgeBuilderGUI.roadText.text = (bridgeSetupParent._levelData.roadCounter - bridgeSetupParent.currentRoadsCount).ToString ();
				bridgeBuilderGUI.beamText.text = (bridgeSetupParent._levelData.beamsCounter - bridgeSetupParent.currentBeamsCount).ToString ();
				bridgeBuilderGUI.ropeText.text = (bridgeSetupParent._levelData.ropeCounter - bridgeSetupParent.currentRopeCount).ToString ();

				

			}

		}




		ColorBeam();
	}

	void OnDestroy ()
	{
		
	}

	public void decreaseCounter ()
	{
		if (beamType == BridgeBuilderGUI.beamType.road) {
			bridgeSetupParent.currentRoadsCount--;
			bridgeBuilderGUI.roadText.text = (bridgeSetupParent._levelData.roadCounter - bridgeSetupParent.currentRoadsCount).ToString ();
			//Debug.LogError (bridgeSetupParent.currentRoadsCount);
		} else if (beamType == BridgeBuilderGUI.beamType.beam) {
			bridgeSetupParent.currentBeamsCount--;
			bridgeBuilderGUI.beamText.text = (bridgeSetupParent._levelData.beamsCounter - bridgeSetupParent.currentBeamsCount).ToString ();
		//	Debug.LogError (bridgeSetupParent.currentBeamsCount);
		} else if (isRope && beamType == BridgeBuilderGUI.beamType.rope) {
			bridgeSetupParent.currentRopeCount--;
			bridgeBuilderGUI.ropeText.text = (bridgeSetupParent._levelData.ropeCounter - bridgeSetupParent.currentRopeCount).ToString ();
		}
	}

	void addCollider ()
	{

		// Create collider for beam
		MeshCollider cc = null;
		if (beamType == BridgeBuilderGUI.beamType.road) {
			cc = road.AddComponent<MeshCollider> ();
			cc.sharedMesh = cc.GetComponent<MeshFilter> ().mesh;   //4.0f
			BoxCollider cpl = road.AddComponent<BoxCollider> ();
			cpl.isTrigger = true;
			cpl.size = new Vector3 (cpl.size.x, cpl.size.y, 0.003f);
			cpl.center = new Vector3 (cpl.center.x, cpl.center.y, 0);
			cc.material = beamMaterial;
			cc.convex = true;

		} else if(beamType == BridgeBuilderGUI.beamType.beam)
			{
			cc = beam.AddComponent<MeshCollider> ();
			cc.sharedMesh = cc.GetComponent<MeshFilter> ().mesh;   //4.0f
			BoxCollider cpl = beam.AddComponent<BoxCollider> ();

			cpl.size = new Vector3 (0.003f, cpl.size.y,cpl.size.z);
			cpl.center = new Vector3 (0, cpl.center.y, cpl.center.z);
			cpl.isTrigger = true;
			cc.material = beamMaterial;
			cc.convex = true;

		} else if(beamType == BridgeBuilderGUI.beamType.rope) {
			cc = rope.transform.GetChild (0).GetChild (1).gameObject.AddComponent<MeshCollider> ();
			
			cc.convex = true;
			cc.isTrigger = true;
			BoxCollider cpl = rope.transform.GetChild (0).GetChild (1).gameObject.AddComponent<BoxCollider> ();

			cpl.size = new Vector3 (cpl.size.x, .75f, cpl.size.z);
			cpl.center = new Vector3 (cpl.center.x, 0, cpl.center.z);
			cpl.isTrigger = true;
		}
								       //	cc.radius = .25f; /////0.25f
	}


	List<GameObject> subRopes = new List<GameObject> ();

	void SetUpRope ()
	{
		Transform rope = this.rope.transform.GetChild (0);
		float totalLength = Vector3.Distance (rope.GetComponent<ropeValues> ().endPoint, rope.GetComponent<ropeValues> ().startPoint);
		Vector3 beamVector = rope.GetComponent<ropeValues> ().endPoint - rope.GetComponent<ropeValues> ().startPoint;
		Debug.LogError (totalLength);
		Debug.LogError (beamVector.magnitude);
		//int totalSegments = (int)(rope.localScale.y/1.8f) ;
		int totalSegments = Mathf.RoundToInt( totalLength);
		//totalSegments = MathF.Round (totalSegments);
		//if (totalSegments % 2 != 0)
		//	totalSegments++;



	
		for (int i = 0; i < totalSegments; i++) {
			Transform temp = Instantiate (ropePrefab, this.rope.transform).transform;
			temp.localPosition = new Vector3 (( (i+0.5f)), 0, temp.localPosition.z);
			subRopes.Add (temp.gameObject);
		        Rigidbody rb =	subRopes [i].AddComponent<Rigidbody> ();
			rb.isKinematic = true;
			
		}

		


	}



	public bool isStartAnchorUsed = false;
	public bool isEndAnchorUsed = false;
	public void SetToPlay ()
	{
		Vector3 beamVector = pointEnd.transform.position - pointStart.transform.position;


		//	cc.center.ma = -3.36f;

		//Create fixed joints for beam and points

		try { Debug.LogError (anchorStart); } catch { anchorStart = null; }


		if (anchorStart == null&&isStartAnchorUsed)
			reassignStartPoint();

		if (anchorStart!=null) {
			bool terrainAnchor = anchorStart.GetComponent<SnapPoint> ().isBaseTerrain;
			startJoint = pointStart.AddComponent<HingeJoint> ();
			startJoint.anchor = Vector3.zero;
			startJoint.autoConfigureConnectedAnchor = true;
			//Debug.LogError (anchorStart.GetComponent<SnapPoint> (), anchorStart.gameObject);
			//startJoint.connectedAnchor = new Vector3(0.0f, 0.0f, 0.0f);
			startJoint.connectedBody = anchorStart.GetComponent<Rigidbody> ();
			startJoint.axis = Vector3.forward;
			//startJoint.breakForce = terrainAnchor? 1000.0f: 500.0f;
			//	startJoint.breakForce =  bridgeSetupParent._levelData.breakForce;
			startJoint.breakForce = terrainAnchor ? bridgeSetupParent._levelData.breakForce : bridgeSetupParent._levelData.breakForce / 2f;
			
			isStartAnchorUsed = true;
		}

		if (anchorEnd==null&&isEndAnchorUsed)
		{
			reassignEndPoint();
		}

		if (anchorEnd!=null) {
			bool terrainAnchor = anchorEnd.GetComponent<SnapPoint> ().isBaseTerrain;
			endJoint = pointEnd.AddComponent<HingeJoint> ();
			endJoint.anchor = Vector3.zero;
			endJoint.autoConfigureConnectedAnchor = true;
			//endJoint.connectedAnchor = new Vector3(1.0f, 0.0f, 0.0f);
			endJoint.connectedBody = anchorEnd.GetComponent<Rigidbody> ();
			endJoint.axis = Vector3.forward;
			//	endJoint.breakForce = terrainAnchor? 1000.0f: 500.0f;
			//	endJoint.breakForce = bridgeSetupParent._levelData.breakForce;
			float breakForce = bridgeSetupParent._levelData.breakForce * bridgeSetupParent._levelData.EndbreakForceMultiplier;
			endJoint.breakForce = terrainAnchor ? breakForce : breakForce / 2f;
			isEndAnchorUsed = true;
		}

	///	Debug.LogError (("yesssss"));
		if (IsRoadBeam && beamType == BridgeBuilderGUI.beamType.road) {
			beamStartJoint = road.AddComponent<FixedJoint> ();
		
			road.GetComponent<Rigidbody> ().isKinematic = false;
			road.GetComponent<Rigidbody> ().WakeUp ();

			beamEndJoint = road.AddComponent<FixedJoint> ();

		} else if (IsBeamCount && beamType == BridgeBuilderGUI.beamType.beam) {
			beamStartJoint = beam.AddComponent<FixedJoint> ();
			beam.GetComponent<Rigidbody> ().isKinematic = false;
			beam.GetComponent<Rigidbody> ().WakeUp ();
			beamEndJoint = beam.AddComponent<FixedJoint> ();

		} else if (beamType == BridgeBuilderGUI.beamType.rope) {


			GameObject rope = this.rope.transform.GetChild (0).gameObject;
			beamStartJoint = rope.AddComponent<FixedJoint> ();
			rope.GetComponent<Rigidbody> ().isKinematic = false;
			rope.GetComponent<Rigidbody> ().WakeUp ();
			beamEndJoint = rope.AddComponent<FixedJoint> ();


			//startJoint.connectedBody = subRopes [0].GetComponent<Rigidbody> ();
			//endJoint.connectedBody = subRopes [subRopes.Count - 1].GetComponent<Rigidbody> ();


		}

		beamStartJoint.autoConfigureConnectedAnchor = true;
		beamStartJoint.connectedBody = pointStart.GetComponent<Rigidbody> ();

		//Debug.Log ("fixedJoint", beamEndJoint.gameObject);



		beamEndJoint.autoConfigureConnectedAnchor = true;
		beamEndJoint.connectedBody = pointEnd.GetComponent<Rigidbody> ();

		pointStart.GetComponent<Rigidbody> ().isKinematic = false;
		pointEnd.GetComponent<Rigidbody> ().isKinematic = false;

		pointStart.GetComponent<Rigidbody> ().WakeUp ();
		pointEnd.GetComponent<Rigidbody> ().WakeUp ();

	}

	void setupRopeDummy()
	{
		beamStartJoint = subRopes [0].AddComponent<FixedJoint> ();
		beamEndJoint = subRopes [subRopes.Count - 1].AddComponent<FixedJoint> ();

		for (int i = 1; i < subRopes.Count - 1; i++) {
			HingeJoint jt = subRopes [i].AddComponent<HingeJoint> ();

			if (i < subRopes.Count - 1) {
				jt.connectedBody = subRopes [i + 1].GetComponent<Rigidbody> ();

			}

			Rigidbody rb = jt.GetComponent<Rigidbody> ();
			rb.isKinematic = false;
			rb.WakeUp ();
		}

	}
	public void ResetToSetup() {

		ResetPhysics _reset = null;
		MeshCollider _mesh = null;
		Renderer _renderer = null;
		Rigidbody _rb = null;

		if (IsRoadBeam && beamType == BridgeBuilderGUI.beamType.road) {
			_reset = road.GetComponent<ResetPhysics> ();
			_mesh = road.GetComponent<MeshCollider> ();
			_rb = road.GetComponent<Rigidbody> ();
			//_renderer = road.GetComponent<Renderer> ();

			SetBrodgeComponentProperties (_reset, _mesh, _rb, _renderer);
		} else if (IsBeamCount && beamType == BridgeBuilderGUI.beamType.beam) {
			_reset = beam.GetComponent<ResetPhysics> ();
			_mesh = beam.GetComponent<MeshCollider> ();
			_rb = beam.GetComponent<Rigidbody> ();
			//_renderer = beam.GetComponent<Renderer> ();

			SetBrodgeComponentProperties (_reset, _mesh, _rb, _renderer);
		} else if (beamType == BridgeBuilderGUI.beamType.rope) {


			_reset = rope.transform.GetChild (0).GetComponent<ResetPhysics> ();
			            _mesh = rope.transform.GetChild(0).GetComponent<MeshCollider>();
			             _rb = rope.transform.GetChild(0).GetComponent<Rigidbody>();
			             _renderer = null;

			SetBrodgeComponentProperties (_reset, _mesh, _rb, _renderer);
			//for (int i = 0; i < 2; i++)
			//{
			//             _reset = rope.transform.GetChild(i).GetComponent<ResetPhysics>();
			//             _mesh = rope.transform.GetChild(i).GetComponent<MeshCollider>();
			//             _rb = rope.transform.GetChild(i).GetComponent<Rigidbody>();
			//             _renderer = rope.transform.GetChild(i).GetComponent<Renderer>();

			//             SetBrodgeComponentProperties(_reset, _mesh, _rb, _renderer);
			//         }
		}


	}

	void SetBrodgeComponentProperties(ResetPhysics _reset, MeshCollider _mesh, Rigidbody _rb, Renderer _renderer)
	{
		_reset.Reset();
		pointStart.GetComponent<ResetPhysics>().Reset();
		pointEnd.GetComponent<ResetPhysics>().Reset();

		// Destroy all joints created on SetToPlay()
		if (startJoint)
		{
			Destroy(startJoint);
		}
		if (endJoint)
		{
			Destroy(endJoint);
		}
		Destroy(beamStartJoint);
		Destroy(beamEndJoint);
		//Destroy(_mesh);
		_rb.isKinematic = true;
		pointStart.GetComponent<Rigidbody>().isKinematic = true;
		pointEnd.GetComponent<Rigidbody>().isKinematic = true;

		PositionBeam();

		//_renderer.enabled = true;
		pointStart.GetComponent<Renderer>().enabled = true;
		pointEnd.GetComponent<Renderer>().enabled = true;

		BeamAppereanceState = eBeamAppereanceState.NormalMode;
		BeamState = eBeamState.BuiltMode;
	}

	public void Break() {
		//beam.renderer.enabled = false;
		pointStart.GetComponent<Renderer>().enabled = false;
		pointEnd.GetComponent<Renderer>().enabled = false;
	}

	private Vector3 LimitPointDistance(Vector3 mousePos, GameObject start)
	{
		return bridgeSetupParent.GetSnapPointFromPosition(mousePos, start.transform.position, beamType == BridgeBuilderGUI.beamType.rope ? 100 : MAX_BEAM_DISTANCE);
	}

	private void DestroyIfSamePosition() {
		if (((pointStart.transform.position - pointEnd.transform.position).magnitude <0.1f)||(!bridgeSetupParent._levelData.AllowRopeInLevel&&rope.gameObject.activeInHierarchy)) {
			Destroy(gameObject);
		}
	}

	private void PositionBeam ()
	{


		if (IsRoadBeam && beamType == BridgeBuilderGUI.beamType.road) {
			Vector3 beamVector = pointEnd.transform.position - pointStart.transform.position;

			if (beamVector.magnitude < .1f)
				return;
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

		} else if (IsBeamCount && beamType == BridgeBuilderGUI.beamType.beam) {
			Vector3 beamVector = pointEnd.transform.position - pointStart.transform.position;

			//beam.transform.position = pointStart.transform.position + beamVector / 2.0f;
			Vector3 beamScale = new Vector3 (300, beam.transform.localScale.y, beamVector.magnitude * 50f);
			beam.transform.localScale = beamScale;

			Vector3 euAngles = beam.transform.parent.eulerAngles;
			Quaternion qt = Quaternion.identity;

			euAngles.z = Mathf.Atan2 (beamVector.y, beamVector.x) * Mathf.Rad2Deg;
			qt.eulerAngles = euAngles;

			beam.transform.parent.localRotation = qt;
			originalColor.a = 0.5f;
			beam.layer = 10; //does not collide with train

		} else if ( isRope&&beamType == BridgeBuilderGUI.beamType.rope) {

			Vector3 beamVector = pointEnd.transform.position - pointStart.transform.position;
			Vector3 euAngles = rope.transform.parent.eulerAngles;
			Quaternion qt = Quaternion.identity;

			euAngles.z = Mathf.Atan2 (beamVector.y, beamVector.x) * Mathf.Rad2Deg;
			qt.eulerAngles = euAngles;

			beam.transform.parent.localRotation = qt;

			//ObiRope rope = this.rope.transform.GetChild (0).GetComponent<ObiRope> ();
			//	rope.ropeBlueprint.

			//for (int i = 0; i < 2; i++)
			//{
			//	Transform rope = this.rope.transform.GetChild(i);
			//             rope.transform.position = new Vector3(pointStart.transform.position.x, pointStart.transform.position.y, rope.position.z) + beamVector / 2.0f;
			//             Vector3 beamScale = new Vector3(rope.transform.localScale.x, beamVector.magnitude * 1.85f, rope.transform.localScale.z);
			//             rope.transform.localScale = beamScale;

			//             Vector3 euAngles = rope.transform.parent.eulerAngles;
			//             Quaternion qt = Quaternion.identity;

			//             euAngles.z = Mathf.Atan2(beamVector.y, beamVector.x) * Mathf.Rad2Deg;
			//             qt.eulerAngles = euAngles;

			//             rope.transform.parent.localRotation = qt;
			//             originalColor.a = 0.5f;
			//             rope.gameObject.layer = 10; //does not collide with train
			//  }
		}
	}

	void dummy_rope_wood ()
	{
		Vector3 beamVector = pointEnd.transform.position - pointStart.transform.position;
		Transform rope = this.rope.transform.GetChild (0);
		rope.GetComponent<ropeValues> ().startPoint = pointStart.transform.position;
		rope.GetComponent<ropeValues> ().endPoint = pointEnd.transform.position;
		rope.transform.position = pointStart.transform.position + beamVector / 2.0f;
		rope.transform.position = new Vector3 (pointStart.transform.position.x, pointStart.transform.position.y, rope.position.z) + beamVector / 2.0f;
		Vector3 beamScale = new Vector3 (rope.transform.localScale.x, beamVector.magnitude * 1.85f, rope.transform.localScale.z);
		rope.transform.localScale = beamScale;

		Vector3 euAngles = rope.transform.parent.eulerAngles;
		Quaternion qt = Quaternion.identity;

		euAngles.z = Mathf.Atan2 (beamVector.y, beamVector.x) * Mathf.Rad2Deg;
		qt.eulerAngles = euAngles;

		rope.transform.parent.localRotation = qt;
		originalColor.a = 0.5f;
		rope.gameObject.layer = 10; //does not collide with train
	}
	void Dummy ()
	{
		if (temp == null && ropeInstantiated) {
			temp = rope.transform.GetChild (rope.transform.childCount - 1);
			currentPosition = temp.GetComponent<destroyRope> ().spawnPoint;
			lastSegment = temp;
			Debug.LogError ("previouesSet");
			instantiatedNewCount--;
		}

		if (!ropeInstantiated) {
			instantiatedNewCount++;
			Debug.LogError ("new Instantiated" + instantiatedNewCount);
			currentPosition = pointEnd.transform.position;
			temp = Instantiate (ropePrefab, rope.transform).transform;
			temp.GetComponent<destroyRope> ().spawnPoint = currentPosition;
			if (lastSegment != null) {
				temp.parent = lastSegment;
			}
			temp.localPosition = new Vector3 (0, -0.55f, 0);
			temp.parent = rope.transform;
			lastSegment = temp;
			ropeInstantiated = true;
		}

		Vector3 beamVector = pointEnd.transform.position - currentPosition;
		Debug.Log (beamVector);
		maxScale = beamVector.magnitude * 1.75f;

		if (ropeInstantiated) {

			temp.position = currentPosition + beamVector / 2;
			if (maxScale < maxLength && temp != null) {
				Vector3 beamScale = new Vector3 (temp.transform.localScale.x, maxScale, temp.transform.localScale.z);
				temp.transform.localScale = beamScale;
				//Debug.LogError (maxScale);



			} else {
				Debug.LogError (maxScale);
				ropeInstantiated = false;

			}



		}



		Vector3 euAngles = rope.transform.eulerAngles;
		Quaternion qt = Quaternion.identity;

		euAngles.z = Mathf.Atan2 (beamVector.y, beamVector.x) * Mathf.Rad2Deg;
		qt.eulerAngles = euAngles;

		rope.transform.localRotation = qt;
	}

	bool scaleIncreasing = true;
	int instantiatedNewCount = 0;
	Transform lastSegment;
	public Transform temp
;	Vector3 currentPosition;
	bool ropeInstantiated = false;
	float maxScale = 10;
	public float maxLength = 10;
	float ropeSegmentDistance = 0.55f;
	float sizeOfSegment = 1;
	public GameObject ropePrefab;
	private void ColorBeam()
	{
		Color c = originalColor;
		if (eBeamAppereanceState.ForceMode == BeamAppereanceState)
		{
			c = getForceColor();
		}
		if (beamType == BridgeBuilderGUI.beamType.road)
		{
			//road.GetComponent<Renderer>().material.color = c;

		}
		else if (beamType == BridgeBuilderGUI.beamType.beam)
			beam.GetComponent<Renderer>().material.color = c;
	}

	private Color getForceColor() {
		Color b = Color.blue;
		Color r = Color.red;
		float t = startJoint.breakForce == Mathf.Infinity? 0.0f: startJoint.breakForce;
		
		return Color.Lerp (b, r, t);
	}

}
