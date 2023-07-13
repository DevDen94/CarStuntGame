using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class BridgeBuilderGUI : MonoBehaviour {

	bool DrawBeams = true;
	public BridgeSetup bridgeSetup;
	public Text beamText;
	public Text roadText;
	public Text ropeText;

	public GameObject InsideCarCamera;
	public GameObject snapPointCamera;


	public static bool ClickedOnGUI ()
	{
		Vector3 mousePos = Input.mousePosition;
		mousePos.y = Screen.height - mousePos.y;
		return Input.GetMouseButtonDown (0) && windowRect.Contains (mousePos);
	}

	private static Rect windowRect = new Rect (10, 10, Screen.width - 20, 66);
	private static Rect winningRect = new Rect (10, Screen.height - 200, Screen.width - 20, 150);
	private static Rect winningLabelRect = new Rect (winningRect.center.x - 50, winningRect.center.y - 9, 100, 18);

	private bool timeToggle = true;
	//private bool showForce = false;

	private bool displayOverBudgetError = false;
	private readonly int timerToDisplay = 120;
	private int timer = 0;


	public int currentLevel = 1;

	public GameObject EnvirnmentCamera;
	public Transform envrinmentCamPosition;

	public enum beamType {
		road = 0, beam = 1, rope = 2
	};

	public beamType _beamType;

	public void changeBeamState (int index)
	{
		_beamType = (beamType)index;
	}

	void Start ()
	{
		iTween.MoveTo (EnvirnmentCamera, iTween.Hash ("position", envrinmentCamPosition.position, "time", .5f, "easetype", iTween.EaseType.linear));
		iTween.RotateTo (EnvirnmentCamera, iTween.Hash ("rotation", Vector3.zero, "time", .5f, "easetype", iTween.EaseType.linear));
		GameObject currentLevelPrefab = Resources.Load<GameObject> ("Levels/" + HomeManager._category + "/" + HomeManager.selectedLevel);
		GameObject Temp = Instantiate (currentLevelPrefab);
		bridgeSetup = Temp.GetComponentInChildren<BridgeSetup> ();
		//AllowRopeDrawing ();
	}



	public void AllowRopeDrawing ()
	{
		if (!bridgeSetup._levelData.AllowRopeInLevel) {
			ropeText.transform.parent.gameObject.SetActive (false);
		} else {
			ropeText.transform.parent.gameObject.SetActive (true);
		}
	}

	public void DisplayOverBudgetError ()
	{
		displayOverBudgetError = true;
		//timer = timerToDisplay;
	}


	public void backToDraw ()
	{

		//Invoke ("setInteractable", 0.1f);
		StartCoroutine (setInteractable ());
		if (BridgeSetup.eLevelStage.PlayStage == bridgeSetup.LevelStage) {
			bridgeSetup.LevelStage = BridgeSetup.eLevelStage.SetupStage;
			snapPointCamera.SetActive (true);
			InsideCarCamera.SetActive (false);
			bridgeSetup.assignJoints (false);
			UpdateCamera ((false));
		} else if (BridgeSetup.eLevelStage.SetupStage == bridgeSetup.LevelStage) {
			bridgeSetup.LevelStage = BridgeSetup.eLevelStage.PlayStage;
			UpdateCamera (true);
			bridgeSetup.assignJoints (true);
			snapPointCamera.SetActive(false);
			InsideCarCamera.SetActive (isInsideCar);
			
		}
	}

	public Camera Cam1;
	public Camera Cam2;
	private void UpdateCamera (bool run)
	{
		if (!run) {
			Cam1.enabled  = (true);
			Cam2.enabled= (false);
		}
		else {
			Cam2.enabled= (true);
			Cam1.enabled= (false);
		}
	}

	public void undo ()
	{
		if (bridgeSetup.allCreatedBeams.Count > 0) {
			BridgeBeam Temp = bridgeSetup.allCreatedBeams [bridgeSetup.allCreatedBeams.Count - 1];
			bridgeSetup.allCreatedBeams.Remove (Temp);
			if (Temp.IsRoadBeam) {
				Temp.bridgeSetupParent.currentRoadsCount--;
			} else {
				Temp.bridgeSetupParent.currentBeamsCount--;

			}
			DestroyImmediate (Temp.gameObject, true);

		}
	}
	public void changeBeamDrawState ()
	{
		bridgeSetup.DrawBeam = !bridgeSetup.DrawBeam;
		Text beamRemoveText = EventSystem.current.currentSelectedGameObject.transform.GetChild (0).GetComponent<Text> ();

		if (bridgeSetup.DrawBeam == false) {
			beamRemoveText.text = "Add Beams";
		} else {
			beamRemoveText.text = "Remove Beams";
		}
	}

	void Update ()
	{
		if (gamePaused)
			Time.timeScale = 0;
		else
			Time.timeScale = 1;
	}
	void OnGUI ()
	{

		//Time.timeScale = 1;

	}
	public Button shift;

	IEnumerator setInteractable ()
	{
		shift.interactable = false;
		yield return new WaitForSeconds (0.1f);
		shift.interactable = true;
	}

	public GameObject resetPanel;

	public void closePanel ()
	{
		resetPanel.SetActive (false);
	}

	public void OpenPanel ()
	{
		resetPanel.SetActive (true);
	}

	public void ResetLevel ()
	{

		SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
	}

	public void goToMainMenu ()
	{
		SceneManager.LoadScene (0);
	}

	

	public GameObject LevelCompletePanel;
	public GameObject nextLevelButton;
	public void LevelComplete ()
	{
		LevelCompletePanel.SetActive (true);
		int currentLevelIndex = int.Parse (HomeManager.selectedLevel [5].ToString ());
		if (currentLevelIndex >= 10) {

			nextLevelButton.SetActive (false);
		}
	}

	public GameObject levelFailedPanel;
	public void LevelFailed ()
	{
		levelFailedPanel.SetActive (true);
	}


	public void loadNextLevel ()
	{
		int currentLevelIndex = int.Parse (HomeManager.selectedLevel [5].ToString ());
		if (currentLevelIndex < 10) {
			currentLevelIndex++;
			HomeManager.selectedLevel = "Level" + currentLevelIndex;
			ResetLevel ();
		}

	}

	public GameObject Grid;

	public void GridEnabler ()
	{
		if (Grid != null) {
			Grid.SetActive (!Grid.activeInHierarchy);
		}
	}

	public void RunTrain ()
	{
		bridgeSetup.StartTrain ();
	}

	public void StopTrain ()
	{
		bridgeSetup.stopTrain ();
	}

	public void InsideCarCamSwitcher ()
	{
		if (BridgeSetup.eLevelStage.PlayStage == bridgeSetup.LevelStage) {

			if (!InsideCarCamera.activeInHierarchy)
				InsideCarCamera.SetActive (true);
			else
				InsideCarCamera.SetActive (false);

			isInsideCar = InsideCarCamera.activeInHierarchy;
		}
	}
	bool isInsideCar = false;

	public GameObject pausePanel;
	public bool gamePaused = false;


	public void PauseGame ()
	{
		pausePanel.SetActive (true);
		Time.timeScale = 0;
		gamePaused = true;

	}

	public void closePausePanel ()
	{
		pausePanel.SetActive (false);
		Time.timeScale = 1;
		gamePaused = false;
	}
}
