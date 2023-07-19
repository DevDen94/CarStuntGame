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
	public GameObject runButton;

	public Material [] gridMaterial;
	int gridCounter = 0;


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
		AudioManager.instance.musicSource.Stop();
		AudioManager.instance.wind.Play();
		iTween.MoveTo (EnvirnmentCamera, iTween.Hash ("position", envrinmentCamPosition.position, "time", .5f, "easetype", iTween.EaseType.linear));
		iTween.RotateTo (EnvirnmentCamera, iTween.Hash ("rotation", Vector3.zero, "time", .5f, "easetype", iTween.EaseType.linear));
		GameObject currentLevelPrefab = Resources.Load<GameObject> ("Levels/" + HomeManager._category + "/" + HomeManager.selectedLevel.Replace("_",""));
		GameObject Temp = Instantiate (currentLevelPrefab);
		bridgeSetup = Temp.GetComponentInChildren<BridgeSetup> ();
		runButton.SetActive (false);
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
		AudioManager.instance.buttonAudio.Play();
		AudioManager.instance.carStart.Stop();
		//Invoke ("setInteractable", 0.1f);
		StartCoroutine (setInteractable ());
		if (BridgeSetup.eLevelStage.PlayStage == bridgeSetup.LevelStage) {
			bridgeSetup.LevelStage = BridgeSetup.eLevelStage.SetupStage;
			snapPointCamera.SetActive (true);
			InsideCarCamera.SetActive (false);
			bridgeSetup.assignJoints (false);
			UpdateCamera ((false));
			runButton.SetActive (false);
			carStopButtom.SetActive (false);
			StopTrain();

		} else if (BridgeSetup.eLevelStage.SetupStage == bridgeSetup.LevelStage) {
			bridgeSetup.LevelStage = BridgeSetup.eLevelStage.PlayStage;
			UpdateCamera (true);
			bridgeSetup.assignJoints (true);
			snapPointCamera.SetActive(false);
			InsideCarCamera.SetActive (isInsideCar);
			runButton.SetActive (true);
			carStopButtom.SetActive (true);
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
		AudioManager.instance.buttonAudio.Play();
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
		AudioManager.instance.buttonAudio.Play();
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
		AudioManager.instance.buttonAudio.Play();
		shift.interactable = false;
		yield return new WaitForSeconds (0.1f);
		shift.interactable = true;
	}

	public GameObject resetPanel;

	public void closePanel ()
	{
		AudioManager.instance.buttonAudio.Play();
		resetPanel.SetActive (false);
	}

	public void OpenPanel ()
	{
		AudioManager.instance.Panelopen.Play();
		resetPanel.SetActive (true);
	}

	public void ResetLevel ()
	{
		AudioManager.instance.buttonAudio.Play();
		backToDraw ();
		levelFailedPanel.SetActive (false);
		pausePanel.SetActive(false);
		gamePaused = false;
		//SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
	}

	public void reloadScene ()
	{
		AudioManager.instance.buttonAudio.Play();
		SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
	}

	public void goToMainMenu ()
	{
		AudioManager.instance.buttonAudio.Play();
		SceneManager.LoadScene (0);
	}

	

	public GameObject LevelCompletePanel;
	public GameObject nextLevelButton;
	public void LevelComplete ()
	{
		AudioManager.instance.winAudio.Play();
		LevelCompletePanel.SetActive (true);
		int currentLevelIndex = int.Parse (HomeManager.selectedLevel.Split('_')[1].ToString ());
		if (currentLevelIndex >= 10) {

			nextLevelButton.SetActive (false);
		}
	}

	public GameObject levelFailedPanel;
	public void LevelFailed ()
	{
		AudioManager.instance.failAudio.Play();
		gamePaused = true;
		levelFailedPanel.SetActive (true);
	}


	public void loadNextLevel ()
	{
		AudioManager.instance.buttonAudio.Play();
		int currentLevelIndex = int.Parse (HomeManager.selectedLevel.Split('_')[1].ToString ());

		if(PlayerPrefs.GetInt("LevelLock_" + HomeManager._category,1)<currentLevelIndex +1)
			PlayerPrefs.SetInt("LevelLock_" + HomeManager._category, currentLevelIndex+1);
  
		if (currentLevelIndex < 11) {
			currentLevelIndex++;
			HomeManager.selectedLevel = "Level_" + currentLevelIndex;
			SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
        }
        if(currentLevelIndex ==11)
        {
			SceneManager.LoadScene("MainMenu");
			PlayerPrefs.SetInt("CatLock_" + (HomeManager._currentCategory + 1), 0); 
        }

	}

	public GameObject Grid;

	public void GridEnabler ()
	{
		AudioManager.instance.buttonAudio.Play();
		if (Grid != null) {
			//Grid.SetActive (!Grid.activeInHierarchy);



			if (gridCounter == 3)
				gridCounter = 0;


			if (Grid.activeInHierarchy) {
				gridCounter++;
				Grid.GetComponent<MeshRenderer> ().material = gridMaterial [gridCounter];
			}
		}
	}

	public void RunTrain ()
	{
		AudioManager.instance.carStart.Play();
		bridgeSetup.StartTrain ();
		runButton.SetActive(false);
	}

	public void StopTrain ()
	{
		AudioManager.instance.carStart.Stop();
		bridgeSetup.stopTrain ();
	}
	public void StopTrain1()
	{
		AudioManager.instance.carStart.Stop();
		bridgeSetup.stopTrain1();
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

public GameObject carStopButtom;


	public void PauseGame ()
	{
		AudioManager.instance.buttonAudio.Play();
		pausePanel.SetActive (true);
		Time.timeScale = 0;
		gamePaused = true;

	}

	public void closePausePanel ()
	{
		AudioManager.instance.buttonAudio.Play();
		pausePanel.SetActive (false);
		Time.timeScale = 1;
		gamePaused = false;
	}
}
