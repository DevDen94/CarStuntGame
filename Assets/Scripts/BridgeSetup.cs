using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class BridgeSetup : MonoBehaviour {

	public GameObject AnchorPointPrefab;
	public GameObject SnapPointPrefab;
	public GameObject BridgeBeamPrefab;
	public NewLevelData _levelData;
	public int currentRoadsCount = 0;
	public int currentBeamsCount = 0;
	public int currentRopeCount = 0;

	
	/** LevelStage determines which stage of the level the player is:
	 *  - SetupStage lets the player put beams around. Beams are kinetic.
	 *  - PlayStage spawns the train and makes it pass the bridge. Beams are dynamic.
	 */
	public enum eLevelStage {
		SetupStage,
		PlayStage,
	};

	private eLevelStage levelStage = eLevelStage.SetupStage;

	public eLevelStage LevelStage {
		get {
			return this.levelStage;
		}

		set {
			levelStage = value;
			if (eLevelStage.SetupStage == levelStage) {
				Time.timeScale = 0.0f;
				//SetSnapPointsVisible (true);
				trainController.SetVisible (false);
				SetBeamsToSetup ();
			} else if (eLevelStage.PlayStage == levelStage) {
				//SetSnapPointsVisible (false);
				SetBeamsToPlay ();
				trainController.SetVisible (true);
				trainController.ResetTrain ();
				Time.timeScale = 0.0f;

			}
		}
	}

	/** Level information
	 *  - TerrainGen, in charge of generating the terrain and its collider.
	 *  - anchorPointLocations, where the bridge beams spawn
	 *  - roadLevel, the y coordinate (in Snap Point space) where all horizontal beams are roads. The rest support the bridge but are not roads.
	 */
	public TerrainGenerator terrainGenerator;
	public Tuple<int, int> [] anchorPointLocations = new Tuple<int, int> [] {
		Tuple<int, int>.Of(12, 18),
		Tuple<int, int>.Of(28, 18)
	};
	public int roadLevel;
	public int bridgeBudget;

	/** Internal game information
 	 *  - snapPoints, contains all snap points when in Setup Stage.
 	 *  - bridgeBeams, contains all references to bridge beams.
 	 *  - trainControl, allows to move train and reset position when in Play Stage.
 	 */
	public GameObject snapPoints;
	public GameObject bridgeBeams;
	public TrainController trainController;
	public GameObject m_GridPrefab;

	private int bridgeCost = 0;

	private Tuple<int, int> snapPositionsDimensions = Tuple<int, int>.Of (40, 30);
	private Vector3 snapPointSeparations = new Vector3 (1, 1, 0);
	private Vector3 snapPointOffset = new Vector3 (-0.5f, -0.5f, 1.0f);

	private Vector3 gridOrigin = Vector3.zero;

	private float trainGoal;

	public bool finishedLevel;
	public List<BridgeBeam> allCreatedBeams;
	//private BridgeBeam lastCreatedBeam;


	void GenerateGrid ()
	{
		float minX, minY, maxX, maxY;
		minX = maxX = snapPoints.transform.GetChild (0).localPosition.x;
		minY = maxY = snapPoints.transform.GetChild (0).localPosition.y;
		Transform grid = Instantiate (m_GridPrefab, snapPoints.transform).transform;
		for (int i = 0; i < snapPoints.transform.childCount; i++) {
			Transform snapPoint = snapPoints.transform.GetChild (i);
			if (snapPoint.localPosition.x < minX) {
				minX = snapPoint.localPosition.x;
			}
			if (snapPoint.localPosition.x > maxX) {
				maxX = snapPoint.localPosition.x;
			}
			if (snapPoint.localPosition.y < minY) {
				minY = snapPoint.localPosition.y;
			}
			if (snapPoint.localPosition.y > maxY) {
				maxY = snapPoint.localPosition.y;
			}
			if (snapPoint.name == "Snap") {
				snapPoint.GetComponent<MeshRenderer> ().enabled = false;
			}
		}

		var xScale = Mathf.Abs (minX) + Mathf.Abs (maxX);
		var yScale = Mathf.Abs (minY) + Mathf.Abs (maxY);

//		grid.localScale = new Vector3 (xScale / 10f, 1, yScale / 10f);
//		grid.localPosition = new Vector3 (2, grid.localPosition.y, grid.localPosition.z);
		grid.name = "Grid";
		grid.gameObject.layer = 13;
		gui.Grid = grid.gameObject;
		//grid.GetComponent<MeshRenderer> ().material.SetTextureScale ("_MainTex", new Vector2 ((xScale / 2)/*/4*/, (yScale / 2) /*/ 4*/));
	}
	public BridgeBuilderGUI gui;
	void Start ()
	{
		gui = Camera.main.GetComponent<BridgeBuilderGUI> ();
		GenerateGrid ();
		allCreatedBeams = new List<BridgeBeam> ();
		transform.position = Vector3.zero;
		_levelData = transform.parent.GetComponent<NewLevelData> ();
		finishedLevel = false;



		if (GetLevel () != null) {
			//terrainGenerator.CreateTerrain(GetLevel ().heights);
			anchorPointLocations = GetLevel ().anchorPointLocations;

			roadLevel = _levelData.roadLevel;
			bridgeBudget = _levelData.Budget;
		} else {
			//			terrainGenerator.CreateTerrain();
			bridgeBudget = 100000;

		}

		//snapPoints = new GameObject();
		//snapPoints.name = "SnapPointsContainer";
		//bridgeBeams = new GameObject();
		//bridgeBeams.name = "BridgeBeamsContainer";
		//			Debug.LogError (anchorPointLocations.Length);

		//bridgeCost = 0;

		//roadLevel = 18;

		int w = snapPositionsDimensions._1;
		int h = snapPositionsDimensions._2;
		Vector3 dims = new Vector3 (w * snapPointSeparations.x, h * snapPointSeparations.y, 0);

		gridOrigin.x = -dims.x / 2.0f + snapPointOffset.x;
		gridOrigin.y = -dims.y / 2.0f + snapPointOffset.y;
		gridOrigin.z = snapPointOffset.z;

		trainGoal = gridOrigin.x + dims.x;
		gui.beamText.text = (_levelData.beamsCounter - currentBeamsCount).ToString ();
		gui.roadText.text = (_levelData.roadCounter - currentRoadsCount).ToString ();
		gui.ropeText.text = (_levelData.ropeCounter - currentRopeCount).ToString ();

		gui.AllowRopeDrawing ();

	}
	public bool IsRoadBeam = false;
	public bool IsBeamCount = false;
	public bool isRope = false;

	BridgeBuilderGUI.beamType beamType;
	//BridgeBeam
	public static bool isDrawing = false;
	public bool DrawBeam = true;
	void Update ()
	{
		if (eLevelStage.SetupStage == levelStage) {
			if (Input.GetMouseButtonDown (0) && !BridgeBuilderGUI.ClickedOnGUI ()&&!gui.gamePaused) {
				GameObject objClicked = GetSnapPointClicked ();
				if (!DrawBeam) {
					DestroyBeam (objClicked);
				} else if (null != objClicked) {
					if (bridgeCost + 100 <= bridgeBudget) {
						IsRoadBeam = _levelData.roadCounter > currentRoadsCount;
						IsBeamCount = _levelData.beamsCounter > currentBeamsCount;
						isRope = _levelData.ropeCounter > currentRopeCount;
						beamType = gui._beamType;

						if (IsRoadBeam && beamType == BridgeBuilderGUI.beamType.road)
						{
							CreateBeam(objClicked);
						}
						else if (IsBeamCount && beamType == BridgeBuilderGUI.beamType.beam)
						{
						///	print("beamClicked");
							CreateBeam(objClicked);
						}
						else if (_levelData.AllowRopeInLevel && isRope && beamType == BridgeBuilderGUI.beamType.rope)
						{
							CreateBeam(objClicked); 
						}
					}
					else 
					{
						gui.DisplayOverBudgetError ();
					}
					isDrawing = true;
				}
				RaycastHit hit;
				if (Physics.Raycast (Camera.main.ScreenPointToRay (Input.mousePosition), out hit, 222)) {
					if(hit.collider.gameObject.TryGetComponent(out ResetPhysics _reset)) {
						_reset.deleteBeam ();
					}
					else if(hit.collider.gameObject.TryGetComponent(out ropeDestroyOnTouch _ropeDestroyOnTouch)) {
						_ropeDestroyOnTouch.transform.parent.GetComponent<ResetPhysics> ().deleteBeam ();
					}
				} 

			}
			else if (Input.GetMouseButtonUp (0)) {
				isDrawing = false;
			}
			RecalculateCost ();
		} else if (eLevelStage.PlayStage == levelStage) {
			if (trainController.trainHead.transform.position.x >= trainGoal) {
				finishedLevel = true;
			}
		}
	}


	public Vector3 GetSnapPointFromPosition (Vector3 pos, Vector3 start, float maxDistance)
	{
		Vector3 diff = pos - start;
		if (diff.magnitude >= maxDistance) {
			Vector3 direction = diff.normalized;
			return SetPointToSnapPoint (start, start + maxDistance * direction);
		}

		return SetPointToSnapPoint (start, pos);
	}

	public bool IsInRoadLevel (Vector3 a, Vector3 b)
	{
		return Mathf.FloorToInt (FromSpaceToSnap (a).y) == roadLevel && Mathf.FloorToInt (FromSpaceToSnap (b).y) == roadLevel;
	}

	public GameObject GetOtherEndPoint (GameObject pointEnd)
	{
		Vector3 pointEndSnapPoint = FromSpaceToSnap (pointEnd.transform.position);
		int api = FindAnchorPointIndex (Mathf.FloorToInt (pointEndSnapPoint.x), Mathf.FloorToInt (pointEndSnapPoint.y));
		SnapPoint sp = null;
		sp = GetNewSnapPoint (pointEnd);
		//		Debug.LogError (api);

		if (sp != null) {

			//sp = GetSnapPoint(anchorPointLocations[api]._1, anchorPointLocations[api]._2);
			//Debug.LogError(sp);
		} else {
			//Debug.LogError (pointEnd, pointEnd.gameObject);
			sp = GetSnapPointFromBridgeBeams (pointEnd);
			//Debug.LogError(sp);
			if (sp == null) {
				return null;
			}
		}
		return sp.gameObject;
	}


	void beamSwitcher ()
	{

	}

	SnapPoint GetNewSnapPoint (GameObject endPoint)
	{
		for (int i = 0; i < _levelData.anchorPoints.Length; i++) {
			Vector3 pointEndSnapPoint = FromSpaceToSnap (endPoint.transform.position);
			Vector3 curr = FromSpaceToSnap (_levelData.anchorPoints [i].transform.position);
			if (pointEndSnapPoint == curr) {
				//Debug.LogError ("yyes");
				return _levelData.anchorPoints [i];
			}
		}
		return null;
	}

	public void StartTrain ()
	{
		if (!trainController.IsTrainStarted) {
			trainController.StartTrain ();
		}
	}

	public void stopTrain ()
	{
		trainController.StopTrain ();
	}
	public void stopTrain1()
	{
		trainController.StopTrain1();
	}

	public bool IsTrainStarted {
		get { return trainController.IsTrainStarted; }
	}

	public int GetBridgeCost ()
	{
		return bridgeCost;
	}

	public int GetBridgeBudget ()
	{
		return bridgeBudget;
	}

	public void SetBeamsToShowForce (bool value)
	{
		BridgeBeam [] bb = bridgeBeams.GetComponentsInChildren<BridgeBeam> ();

		foreach (BridgeBeam b in bb) {
			b.BeamAppereanceState = value ? BridgeBeam.eBeamAppereanceState.ForceMode : BridgeBeam.eBeamAppereanceState.NormalMode;
		}
	}

	public string GetLevelName ()
	{
		if (GetLevel () == null) {
			return "Default level";
		}
		return GetLevel ().name;
	}

	public Level GetLevel ()
	{
		return TitleScreenGUI.currentLevel;
	}

	//private

	private BridgeBeam CreateBeam (GameObject snapPoint)
	{
		AudioManager.instance.beamMake.Play();
		GameObject go = Instantiate (BridgeBeamPrefab, snapPoint.transform.position, new Quaternion ()) as GameObject;
		BridgeBeam bb = go.GetComponent<BridgeBeam> ();
		bb.bridgeSetupParent = this;
		Vector3 newPos = new Vector3 (snapPoint.transform.position.x, snapPoint.transform.position.y, gridOrigin.z);
		bb.StartLayout (newPos, snapPoint, this);
		bb.transform.parent = bridgeBeams.transform;
		if (allCreatedBeams.Contains (bb) is false) {
			allCreatedBeams.Add (bb);
		}
		return bb;
	}

	public void DestroyBeam (GameObject snapPoint)
	{
		AudioManager.instance.beamDestroy.Play();
		if (null != snapPoint) {
			Debug.LogError("n");
			BridgeBeam bb = snapPoint.GetComponent<BridgeBeam> ();
			//if (bb.IsRoadBeam) {
			//	bb.bridgeSetupParent.currentRoadsCount--;
			//} else {
			//	bb.bridgeSetupParent.currentBeamsCount--;
			//}

			if (bb != null) {
				Destroy (bb.gameObject);

			}
		} else {
			Ray r = Camera.main.ScreenPointToRay (Input.mousePosition);
			RaycastHit rh = new RaycastHit ();

			if (Physics.Raycast (r, out rh, Mathf.Infinity, 1 << 9 | 1 << 10)) {
				Destroy (rh.collider.transform.parent.gameObject);
			}
		}
	}

	private void RecalculateCost ()
	{
		bridgeCost = bridgeBeams.transform.childCount * 100;
	}

	private Vector3 SetPointToSnapPoint (Vector3 a, Vector3 b)
	{
		return FromSnapToSpace (FromSpaceToSnap (b));
	}

	private Vector3 FromSpaceToSnap (Vector3 a)
	{
		return new Vector3 (Mathf.Round ((a.x - gridOrigin.x) / snapPointSeparations.x),
					   Mathf.Round ((a.y - gridOrigin.y) / snapPointSeparations.y),
				   a.z);
	}

	private Vector3 FromSnapToSpace (Vector3 a)
	{
		return new Vector3 (a.x * snapPointSeparations.x + gridOrigin.x, a.y * snapPointSeparations.y + gridOrigin.y, gridOrigin.z);
	}


	private void SetSnapPointsVisible (bool value)
	{

		Renderer [] rs = snapPoints.GetComponentsInChildren<Renderer> ();

		foreach (Renderer r in rs) {
			r.enabled = value;
		}
	}

	private GameObject GetSnapPointClicked ()
	{
		Ray r = Camera.main.ScreenPointToRay (Input.mousePosition);
		RaycastHit rh = new RaycastHit ();

		if (Physics.Raycast (r, out rh, Mathf.Infinity, 1 << 8)) {
			if (rh.collider.GetComponent<SnapPoint> ().isBase) {
				return rh.collider.gameObject;
			}
		}

		return null;
	}

	private void SetBeamsToPlay ()
	{
		BridgeBeam [] bb = bridgeBeams.GetComponentsInChildren<BridgeBeam> ();

		foreach (BridgeBeam b in bb) {

			
			b.SetToPlay ();
		}
	}

	private void SetBeamsToSetup ()
	{
		BridgeBeam [] bb = bridgeBeams.GetComponentsInChildren<BridgeBeam> ();

		foreach (BridgeBeam b in bb) {
			b.ResetToSetup ();
		}
	}

	private int FindAnchorPointIndex (int i, int j)
	{
		for (int k = 0; k != anchorPointLocations.Length; k++) {
			if (anchorPointLocations [k]._1 == i && anchorPointLocations [k]._2 == j) {
				return k;
			}
		}
		return -1;
	}

	private SnapPoint GetSnapPoint (int i, int j)
	{
		SnapPoint [] snps = snapPoints.GetComponentsInChildren<SnapPoint> ();

		foreach (SnapPoint sp in snps) {
			if (sp.position._1 == i && sp.position._2 == j) {
				return sp;
			}
		}

		return null;
	}

	public void assignJoints (bool assign)
	{
		ResetPhysics[] reset = bridgeBeams.GetComponentsInChildren<ResetPhysics> ();
		foreach (var item in reset) {
			item.TryGetComponent (out HingeJoint joint);
			if (joint != null) {
				if (assign)
					item.assignJoints ();
				else
					item.resetJoints ();

			}
		}
	}

	public SnapPoint [] bbSnapPoints;
	private SnapPoint GetSnapPointFromBridgeBeams (GameObject point)
	{
		bbSnapPoints = GetBridgeBeamSnapPoints ();
		Vector3 pos = point.transform.position;

		foreach (SnapPoint sp in bbSnapPoints) {
			
			if (sp.gameObject != point && (sp.gameObject.transform.position - pos).magnitude < 0.1f&&sp.bridgeBeamParent.beamType==BridgeBuilderGUI.beamType.road) {
				return sp;
			}
			if (sp.gameObject != point && (sp.gameObject.transform.position - pos).magnitude < 0.1f && sp.bridgeBeamParent.beamType == BridgeBuilderGUI.beamType.beam) {
				return sp;
			}
			if (sp.gameObject != point && (sp.gameObject.transform.position - pos).magnitude < 0.1f && sp.bridgeBeamParent.beamType == BridgeBuilderGUI.beamType.rope) {
				return sp;
			}

		}
		return null;
	}

	private SnapPoint [] GetBridgeBeamSnapPoints ()
	{
		BridgeBeam [] bbs = bridgeBeams.GetComponentsInChildren<BridgeBeam> ();
		List<SnapPoint> snps = new List<SnapPoint> ();

		foreach (BridgeBeam bb in bbs) {
			snps.Add (bb.PointStart.GetComponent<SnapPoint> ());
			snps.Add (bb.PointEnd.GetComponent<SnapPoint> ());
		}

		return snps.ToArray ();
		
	}
}
