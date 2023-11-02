using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections.Generic;
public class BridgeBuilderGUI : MonoBehaviour {


	public GameObject HINTbTN;
	bool DrawBeams = true;
	public BridgeSetup bridgeSetup;
	public Text beamText;
	public Text roadText;
	public Text ropeText;
	//public GameObject waterLevel;
	public GameObject InsideCarCamera;
	public GameObject snapPointCamera;
	public GameObject UndoButton;
	public Sprite selectedSprite;
	public Sprite deselectedSprite;

	public static BridgeBuilderGUI Instance;



    private void Awake()
    {
		Instance = this;
    }

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

	public GameObject roadSprtie;
	public GameObject beamSprtie;
	public GameObject ropeSprtie;
	public void changeBeamState (int index)
	{
		AudioManager.instance.buttonAudio.Play();
		_beamType = (beamType)index;

        if (_beamType == beamType.beam)
        {
			beamSprtie.GetComponent<Image>().sprite = selectedSprite;
			ropeSprtie.GetComponent<Image>().sprite = deselectedSprite;
			roadSprtie.GetComponent<Image>().sprite = deselectedSprite;
		}
		if (_beamType == beamType.rope)
		{
			ropeSprtie.GetComponent<Image>().sprite = selectedSprite;
			beamSprtie.GetComponent<Image>().sprite = deselectedSprite;
			roadSprtie.GetComponent<Image>().sprite = deselectedSprite;
		}
		if (_beamType == beamType.road)
		{
			roadSprtie.GetComponent<Image>().sprite = selectedSprite;
			beamSprtie.GetComponent<Image>().sprite = deselectedSprite;
			ropeSprtie.GetComponent<Image>().sprite = deselectedSprite;
		}




	}

	public Text LevelText;
	GameObject Temp_Hint;

	public GameObject HintAfterAdd;

	[Space]

	public GameObject pauseBtn, GridBtn, Reset, Undo,hint;
	[Space]
	public Button road, beam, test, run, zoom;

	void Start()
	{
		AdsManager.instance.ShowSmallBanner();
		AudioManager.instance.musicSource.Stop();
		AudioManager.instance.wind.Play();

        if (!PlayerPrefs.HasKey("Tutorial"))
        {
			iTween.MoveTo(EnvirnmentCamera, iTween.Hash("position", envrinmentCamPosition.position, "time", .5f, "easetype", iTween.EaseType.linear));
			iTween.RotateTo(EnvirnmentCamera, iTween.Hash("rotation", Vector3.zero, "time", .5f, "easetype", iTween.EaseType.linear));
			GameObject currentLevelPrefab = Resources.Load<GameObject>("Levels/" + "Tutorial/" + "Level1");
			GameObject Temp = Instantiate(currentLevelPrefab);
			bridgeSetup = Temp.GetComponentInChildren<BridgeSetup>();
			runButton.SetActive(false);
			//AllowRopeDrawing ();
			GameObject currentLevelPrefabHint = Resources.Load<GameObject>("Levels_Hint/" + HomeManager._category + "/" + HomeManager.selectedLevel.Replace("_", ""));
			Temp_Hint = Instantiate(currentLevelPrefabHint);
			int currentLevelIndex = int.Parse(HomeManager.selectedLevel.Split('_')[1].ToString());
			LevelText.text = "Level " + currentLevelIndex;

			/* Remove Unnecessary Buttons during tutorials */
			pauseBtn.SetActive(false);
			GridBtn.SetActive(false);
			Reset.SetActive(false);
			Undo.SetActive(false);
			hint.SetActive(false);

			road.gameObject.SetActive(false);
			beam.gameObject.SetActive(false);
			run.gameObject.SetActive(false);
			test.gameObject.SetActive(false);
			zoom.interactable = true;
			zoom.gameObject.transform.GetChild(1).gameObject.SetActive(true);

		}
        else { 
		iTween.MoveTo(EnvirnmentCamera, iTween.Hash("position", envrinmentCamPosition.position, "time", .5f, "easetype", iTween.EaseType.linear));
		iTween.RotateTo(EnvirnmentCamera, iTween.Hash("rotation", Vector3.zero, "time", .5f, "easetype", iTween.EaseType.linear));
		GameObject currentLevelPrefab = Resources.Load<GameObject>("Levels/" + HomeManager._category + "/" + HomeManager.selectedLevel.Replace("_", ""));
		GameObject Temp = Instantiate(currentLevelPrefab);
		bridgeSetup = Temp.GetComponentInChildren<BridgeSetup>();
		runButton.SetActive(false);
        //AllowRopeDrawing ();
        GameObject currentLevelPrefabHint = Resources.Load<GameObject>("Levels_Hint/" + HomeManager._category + "/" + HomeManager.selectedLevel.Replace("_", ""));
        Temp_Hint = Instantiate(currentLevelPrefabHint);
		int currentLevelIndex = int.Parse(HomeManager.selectedLevel.Split('_')[1].ToString());
		LevelText.text = "Level " + currentLevelIndex;
		}

		





	}
	public bool hintBtnActiveStatus = false;
	public void showHintBtn()
    {
		
		HINTbTN.SetActive(false);
		hintBtnActiveStatus = true;
		showHint();
		HintAfterAdd.SetActive(true);
    }
    public void showHint()
	{
		Temp_Hint.SetActive(!Temp_Hint.activeInHierarchy);
	}

	public GameObject levelbtn;

	public void AllowRopeDrawing ()
	{
		if (!bridgeSetup._levelData.AllowRopeInLevel) {
			ropeText.transform.parent.gameObject.SetActive (false);
		} else {
			ropeText.transform.parent.gameObject.SetActive (true);
		}
	}
	public GameObject minimap;
	public void DisplayOverBudgetError ()
	{
		displayOverBudgetError = true;
		//timer = timerToDisplay;
	}
	public GameObject zoomBTN;
	public GameObject resetBtn;
	public ZoomInOut _zoominOut;
	public void backToDraw ()
	{
		//AudioManager.instance.buttonAudio.Play();
		AudioManager.instance.carStart.Stop();
		//Invoke ("setInteractable", 0.1f);
		StartCoroutine (setInteractable ());
		if (BridgeSetup.eLevelStage.PlayStage == bridgeSetup.LevelStage) {
			bridgeSetup.LevelStage = BridgeSetup.eLevelStage.SetupStage;
			snapPointCamera.SetActive (true);
			//InsideCarCamera.SetActive (false);
			bridgeSetup.assignJoints (false);
			UpdateCamera ((false));
			runButton.SetActive (false);
			carStopButtom.SetActive (false);
			StopTrain();
			UndoButton.SetActive(true);
			zoomBTN.SetActive(true);
			resetBtn.SetActive(true);
			GridBTN.SetActive(true);
			roadSprtie.SetActive(true);
			beamSprtie.SetActive(true);
			levelbtn.SetActive(true);

            if (hintBtnActiveStatus==false)
            {
				HINTbTN.SetActive(true);

			}

			if (hintBtnActiveStatus == true)
			{
				HintAfterAdd.SetActive(true);

			}
			


		} else if (BridgeSetup.eLevelStage.SetupStage == bridgeSetup.LevelStage) {
			bridgeSetup.LevelStage = BridgeSetup.eLevelStage.PlayStage;
			if (_zoominOut._zoomIn)
			{ 
				_zoominOut.zooming();
				minimap.SetActive(false);
			}
				
			UpdateCamera (true);
			bridgeSetup.assignJoints (true);
			snapPointCamera.SetActive(false);
			//InsideCarCamera.SetActive (isInsideCar);
			runButton.SetActive (true);
			carStopButtom.SetActive (true);
			UndoButton.SetActive(false);
			zoomBTN.SetActive(false);
			resetBtn.SetActive(false);
			GridBTN.SetActive(false);
			roadSprtie.SetActive(false);
			beamSprtie.SetActive(false);
			HINTbTN.SetActive(false);
			levelbtn.SetActive(false);
			HintAfterAdd.SetActive(false);

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
		//FindObjectOfType<MiniMapController>().MINI();
			
		}
	}

	public void undo ()
	{
		AudioManager.instance.buttonAudio.Play();
		if (bridgeSetup.allCreatedBeams.Count > 0) {
			BridgeBeam Temp = bridgeSetup.allCreatedBeams [bridgeSetup.allCreatedBeams.Count - 1];
            if (Temp != null)
            {
				bridgeSetup.allCreatedBeams.Remove (Temp);
				//if (Temp.beamType == BridgeBuilderGUI.beamType.road) {
				//	Temp.bridgeSetupParent.currentRoadsCount--;
				//} else if(Temp.beamType == BridgeBuilderGUI.beamType.beam) {
				//	Temp.bridgeSetupParent.currentBeamsCount--;

				//}
				//else if(Temp.beamType == BridgeBuilderGUI.beamType.rope)
				//{
				//             Temp.bridgeSetupParent.currentRopeCount--;
				//         }
				Temp.decreaseCounter(true);
				DestroyImmediate (Temp.gameObject, true);
				updateListCount();
            }
            else
            {
				updateListCount();
				undo();
            }

		}
	}
	public void updateListCount()
	{
		List<BridgeBeam> tempList = new List<BridgeBeam>();
		for (int i = 0; i < bridgeSetup.allCreatedBeams.Count; i++)
		{
			if (bridgeSetup.allCreatedBeams[i] != null)
				tempList.Add(bridgeSetup.allCreatedBeams[i]);
		}
		bridgeSetup.allCreatedBeams = tempList;
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


   //     if (resetPanel.gameObject.activeInHierarchy)
   //     {
			
			//levelFailedPanel.SetActive(false);
			//LevelCompletePanel.SetActive(false);
   //     }
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
		AdsManager.instance.ShowSmallBanner();
		AudioManager.instance.buttonAudio.Play();
		AudioManager.instance.wind.Play();
		backToDraw ();
		levelFailedPanel.SetActive (false);
		pausePanel.SetActive(false);
		gamePaused = false;
		
		//SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
	}

	public void reloadScene ()
	{
		//AudioManager.instance.buttonAudio.Play();
		//AudioManager.instance.carStart.volume = 0.0f;

		//SceneManager.LoadScene (SceneManager.GetActiveScene ().name);

		AudioManager.instance.buttonAudio.Play();
		if (AudioManager.instance.sound == 1)
			AudioManager.instance.carStart.volume = 0.0f;

		SceneManager.LoadScene(SceneManager.GetActiveScene().name);
	}

	

	public void goToMainMenu ()
	{
		AudioManager.instance.buttonAudio.Play();
		SceneManager.LoadScene("MainMenu");
	}

	

	public GameObject LevelCompletePanel;
	public GameObject nextLevelButton;
	public void LevelComplete ()
	{
		if (AdsManager.instance.LevelCompleteTrigger == 0)
		{
			AdsManager.instance.ShowinterAd();
			AdsManager.instance.LevelCompleteTrigger += 1;

		}
		else if (AdsManager.instance.LevelCompleteTrigger == 3)
		{
			
			AdsManager.instance.LevelCompleteTrigger = 0;

        }
        else
        {
			AdsManager.instance.LevelCompleteTrigger += 1;
		}
        if (!PlayerPrefs.HasKey("Tutorial"))
        {

			PlayerPrefs.SetInt("Tutorial", 1);
        }


		AdsManager.instance.ShowBigBanner();
		AudioManager.instance.wind.Stop();
		AudioManager.instance.winAudio.Play();
		LevelCompletePanel.SetActive (true);
		int currentLevelIndex = int.Parse (HomeManager.selectedLevel.Split('_')[1].ToString ());
		gamePaused = true;

		if (PlayerPrefs.GetInt("LevelLock_" + HomeManager._category, 1) < currentLevelIndex + 1)
			PlayerPrefs.SetInt("LevelLock_" + HomeManager._category, currentLevelIndex + 1);

		if (currentLevelIndex < 11)
		{
			currentLevelIndex++;
			HomeManager.selectedLevel = "Level_" + currentLevelIndex;
			
		}
		if (currentLevelIndex == 11)
		{
	
			PlayerPrefs.SetInt("CatLock_" + (HomeManager._currentCategory + 1), 0);
		}
		Firebase.Analytics.FirebaseAnalytics.LogEvent("level_complete","level_complete", currentLevelIndex);
	}

	public GameObject levelFailedPanel;
	//public void LevelFailed ()
	//{
	//	AudioManager.instance.failAudio.Play();
	//	gamePaused = true;
	//	levelFailedPanel.SetActive (true);
	//}

	

	public void LevelFailed()
	{

        //if (levelFailedPanel.activeInHierarchy == false) try kro

        if (AdsManager.instance.LevelfailTrigger == 0)
        {
			AdsManager.instance.ShowinterAd();
			AdsManager.instance.LevelfailTrigger += 1;

		}
        else if (AdsManager.instance.LevelfailTrigger == 2)
		{
			AdsManager.instance.LevelfailTrigger = 0;

		}
		else
		{
			AdsManager.instance.LevelfailTrigger += 1;
		}


		if (!gamePaused&&!levelFailedPanel.activeInHierarchy)
		{
			AdsManager.instance.ShowBigBanner();
			AudioManager.instance.wind.Stop();
			AudioManager.instance.failAudio.Play();
			gamePaused = true;
			levelFailedPanel.SetActive(true);
			

		}
		Firebase.Analytics.FirebaseAnalytics.LogEvent("level_fail");

	}

	public void loadNextLevel ()
	{
		

		


		AudioManager.instance.buttonAudio.Play();
		int currentLevelIndex = int.Parse (HomeManager.selectedLevel.Split('_')[1].ToString ());

		//if(PlayerPrefs.GetInt("LevelLock_" + HomeManager._category,1)<currentLevelIndex +1)
		//	PlayerPrefs.SetInt("LevelLock_" + HomeManager._category, currentLevelIndex+1);
  
		if (currentLevelIndex < 11) {
			//currentLevelIndex++;
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
	public GameObject GridBTN;

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
		////AudioManager.instance.carStart.Play();
		////AudioManager.instance.carStart.volume = 1.0f;
		////bridgeSetup.StartTrain ();
		////runButton.SetActive(false);
		///
		AudioManager.instance.carStart.Play();
		if (AudioManager.instance.sound == 1)
			AudioManager.instance.carStart.volume = 1.0f;
		bridgeSetup.StartTrain();
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
		//AudioManager.instance.buttonAudio.Play();
		//AudioManager.instance.carStart.volume = 0.0f;
		//pausePanel.SetActive (true);
		//Time.timeScale = 0;
		//gamePaused = true;
		//AdsManager.instance.ShowinterAd();
		AdsManager.instance.ShowBigBanner();
		AudioManager.instance.buttonAudio.Play();
		if (AudioManager.instance.sound == 1)
			AudioManager.instance.carStart.volume = 0.0f;
		pausePanel.SetActive(true);
		Time.timeScale = 0;
		gamePaused = true;
		
	}

	
	

	

	public void closePausePanel ()
	{
		////AudioManager.instance.buttonAudio.Play();
		////AudioManager.instance.carStart.volume = 1.0f;
		////pausePanel.SetActive (false);
		////Time.timeScale = 1;
		////gamePaused = false;
		//////      if (TrainController.instance.trainWorking == true)
		//////      {
		//////	AudioManager.instance.carStart.volume = 1.0f;
		//////}
		///
		
		AudioManager.instance.buttonAudio.Play();
		if (AudioManager.instance.sound == 1)
			AudioManager.instance.carStart.volume = 1.0f;
		pausePanel.SetActive(false);
		Time.timeScale = 1;
		gamePaused = false;
		AdsManager.instance.ShowSmallBanner();
		//      if (TrainController.instance.trainWorking == true)
		//      {
		//	AudioManager.instance.carStart.volume = 1.0f;
		//}
	}

	public void HintFromVideo()
    {
		
		PlayerPrefs.SetInt("Ad", 0);
		AdsManager.instance.ShowRewardedAd();
    }

	public void skipLevelFromVideo()
    {
		
		PlayerPrefs.SetInt("Ad", 1);
		AdsManager.instance.ShowRewardedAd();
	}


	public void skipLevel()
	{
		int currentLevelIndex = int.Parse(HomeManager.selectedLevel.Split('_')[1].ToString());
		gamePaused = true;

		if (PlayerPrefs.GetInt("LevelLock_" + HomeManager._category, 1) < currentLevelIndex + 1)
			PlayerPrefs.SetInt("LevelLock_" + HomeManager._category, currentLevelIndex + 1);

		if (currentLevelIndex < 11)
		{
			currentLevelIndex++;
			HomeManager.selectedLevel = "Level_" + currentLevelIndex;
			SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		}
		if (currentLevelIndex == 11)
		{
			SceneManager.LoadScene("MainMenu");
			PlayerPrefs.SetInt("CatLock_" + (HomeManager._currentCategory + 1), 0);
		}	
	}


	public void resetBridge()
	{
		GameObject current = FindObjectOfType<NewLevelData>().gameObject;
		DestroyImmediate(current);
		AudioManager.instance.buttonAudio.Play();
		GameObject currentLevelPrefab = Resources.Load<GameObject>("Levels/" + HomeManager._category + "/" + HomeManager.selectedLevel.Replace("_", ""));
		GameObject Temp = Instantiate(currentLevelPrefab);
		bridgeSetup = Temp.GetComponentInChildren<BridgeSetup>();
		gamePaused = false;
		resetPanel.SetActive(false);
		Invoke("setGridAfterReset", .2f);
	}

	void setGridAfterReset()
	{
		Grid.GetComponent<MeshRenderer>().material = gridMaterial[gridCounter];
	}

	/* Tutorial   */
	public void ZoomToRoadDraw()
    {
		if (!PlayerPrefs.HasKey("Tutorial"))
		{
			//zoom.interactable = false;
			zoom.gameObject.transform.GetChild(1).gameObject.SetActive(false);
			road.gameObject.SetActive(true);
			road.gameObject.transform.GetChild(3).gameObject.SetActive(true);
		}
	}







}
