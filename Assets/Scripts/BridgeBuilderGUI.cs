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


	public static bool ClickedOnGUI() {
		Vector3 mousePos = Input.mousePosition;
		mousePos.y = Screen.height - mousePos.y;
		return Input.GetMouseButtonDown(0) && windowRect.Contains(mousePos);
	}

	private static Rect windowRect = new Rect(10, 10, Screen.width-20, 66);
	private static Rect winningRect = new Rect(10, Screen.height-200, Screen.width-20, 150);
	private static Rect winningLabelRect = new Rect(winningRect.center.x-50, winningRect.center.y-9, 100, 18);

	private bool timeToggle = true;
	//private bool showForce = false;
	
	private bool displayOverBudgetError = false;
	private readonly int timerToDisplay = 120;
	private int timer = 0;


	public int currentLevel = 1;

    public enum beamType
    {
        road = 0, beam = 1, rope = 2
    };

    public beamType _beamType;

    public void changeBeamState(int index)
    {
        _beamType = (beamType)index;
    }

    void Start ()
	{
		GameObject currentLevelPrefab = Resources.Load<GameObject> ("Levels/"+Homemanager._category+"/" + Homemanager.selectedLevel);
		GameObject Temp = Instantiate (currentLevelPrefab);
		bridgeSetup = Temp.GetComponentInChildren<BridgeSetup> ();
	}

	////////////public Text _levelNo;
	////////////public Text _Instructions;
	////////////public Text _Cost;
	////////////public GameObject _testBridge, _run, _backToDraw; 

	


	public void DisplayOverBudgetError() {
		displayOverBudgetError = true;
		//timer = timerToDisplay;
	}


	public void backToDraw ()
	{

		//Invoke ("setInteractable", 0.1f);
		StartCoroutine (setInteractable ());
		if (BridgeSetup.eLevelStage.PlayStage == bridgeSetup.LevelStage)
		{
			bridgeSetup.LevelStage = BridgeSetup.eLevelStage.SetupStage;
		
		}
		else if (BridgeSetup.eLevelStage.SetupStage == bridgeSetup.LevelStage)
		{
			bridgeSetup.LevelStage = BridgeSetup.eLevelStage.PlayStage;
			
		}
	}

	public void undo()
    {
        if (bridgeSetup.allCreatedBeams.Count>0)
        {
			BridgeBeam Temp = bridgeSetup.allCreatedBeams[bridgeSetup.allCreatedBeams.Count - 1];
			bridgeSetup.allCreatedBeams.Remove(Temp);
            if (Temp.IsRoadBeam)
            {
				Temp.bridgeSetupParent.currentRoadsCount--;
			}
            else
            {
				Temp.bridgeSetupParent.currentBeamsCount--;

			}
			DestroyImmediate(Temp.gameObject,true);

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

	void OnGUI () {
		if (!bridgeSetup.finishedLevel) {
			/////////GUI.Box(windowRect, "");
	
			////GUI.Label(new Rect(18, 18, 300, 20), bridgeSetup.GetLevelName());
			////GUI.Label(new Rect(18, 36, 300, 20), "Click - Add. Ctrl-Click - Delete.");
			////GUI.Label(new Rect(18, 54, 300, 20), "Cost: "+bridgeSetup.GetBridgeCost()+"£ / Budget: "+bridgeSetup.GetBridgeBudget()+"£");
	
			if (BridgeSetup.eLevelStage.PlayStage == bridgeSetup.LevelStage) {
				//if (GUI.Button (new Rect (318,18,100,50), "Back to Draw")) {
				//	bridgeSetup.LevelStage = BridgeSetup.eLevelStage.SetupStage;
				//}
				//GUI.enabled = !bridgeSetup.IsTrainStarted;
				//if (GUI.Button (new Rect (425,18,100,50), "Run Train")) {
					//bridgeSetup.StartTrain();
			//	}
			//	GUI.enabled = true;

                //////if (GUI.Toggle(new Rect(532, 18, 100, 20), timeToggle, "Slow Time"))
                //////{
                ////////    Time.timeScale = 0.25f;
                //////  //  timeToggle = true;
                //////}
                //////else
                //////{
                //////    //Time.timeScale = 1.0f;
                //////    //timeToggle = false;
                //////}
                /*
				if (GUI.Toggle (new Rect (532,40,100,20), showForce, "Show Force")) {
					showForce = true;
					bridgeSetup.SetBeamsToShowForce(showForce);
				} else {
					showForce = false;
					bridgeSetup.SetBeamsToShowForce(showForce);
				}
				*/
            }
    ////        else if (BridgeSetup.eLevelStage.SetupStage == bridgeSetup.LevelStage) {
				////if (GUI.Button (new Rect (318,18,100,50), "Test Bridge")) {
				////	bridgeSetup.LevelStage = BridgeSetup.eLevelStage.PlayStage;
				////}
		//	}
			
			if (displayOverBudgetError) {
				Rect r = new Rect(Screen.width/2.0f - 100.0f, Screen.height/2.0f - 30.0f, 200.0f, 40.0f);
				GUI.Box (r, "You can't go over the budget!");
				timer--;
				//if (timer <= 0) {
				//	displayOverBudgetError = false;
				//}
			}
		} else {
		//	GUI.Box(winningRect, "");
			
		//	GUI.Label(winningLabelRect, "You Win!");
			if (GUI.Button(new Rect(winningLabelRect.x-100, winningLabelRect.y+40, 300, 30), "YouWin")) {
				Application.LoadLevel("Title");
			}
		}
		//timeToggle.
		Time.timeScale = 1;

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
		SceneManager.LoadScene (2);
	}


    //////////   private void Start()
    //////////   {
    //////////       if (!bridgeSetup.finishedLevel)
    //////////       {
    //////////		_levelNo.text =	bridgeSetup.GetLevelName().ToString();
    //////////		_Instructions.text = "Click - Add. Ctrl-Click - Delete.".ToString();
    //////////		_Cost.text = "Cost: " + bridgeSetup.GetBridgeCost() + "£ / Budget: " + bridgeSetup.GetBridgeBudget() + "£".ToString();

    //////////		if (BridgeSetup.eLevelStage.PlayStage == bridgeSetup.LevelStage)
    //////////		{


    //////////			 _testBridge.SetActive(false);
    //////////			 _run.SetActive(true);
    //////////			 _backToDraw.SetActive(true);
    //////////			GUI.enabled = !bridgeSetup.IsTrainStarted;
    //////////			bridgeSetup.StartTrain();



    //////////			if (GUI.Toggle(new Rect(532, 18, 100, 20), timeToggle, "Slow Time"))
    //////////			{
    //////////				Time.timeScale = 0.25f;
    //////////				timeToggle = true;
    //////////			}
    //////////			else
    //////////			{
    //////////				Time.timeScale = 1.0f;
    //////////				timeToggle = false;
    //////////			}
    //////////		}
    //////////		else if (BridgeSetup.eLevelStage.SetupStage == bridgeSetup.LevelStage)
    //////////		{
    //////////			_testBridge.SetActive(true);
    //////////			_run.SetActive(false);
    //////////			_backToDraw.SetActive(false);
    //////////		}

    //////////		if (displayOverBudgetError)
    //////////		{
    //////////			Rect r = new Rect(Screen.width / 2.0f - 100.0f, Screen.height / 2.0f - 30.0f, 200.0f, 40.0f);
    //////////			GUI.Box(r, "You can't go over the budget!");
    //////////			timer--;
    //////////			if (timer <= 0)
    //////////			{
    //////////				displayOverBudgetError = false;
    //////////			}
    //////////		}
    //////////	}

    //////////	else
    //////////	{
    //////////		GUI.Box(winningRect, "");

    //////////		GUI.Label(winningLabelRect, "You Win!");
    //////////		if (GUI.Button(new Rect(winningLabelRect.x - 100, winningLabelRect.y + 40, 300, 30), "Back to Title Screen"))
    //////////		{
    //////////			Application.LoadLevel("Title");
    //////////		}
    //////////	}


    //////////}


    //////////public void backToDraw()
    //////////   {
    //////////	bridgeSetup.LevelStage = BridgeSetup.eLevelStage.SetupStage;
    //////////	_run.SetActive(false);
    //////////	_backToDraw.SetActive(false);
    //////////	_testBridge.SetActive(true);

    //////////}
    //////////public void Run()
    //////////{
    //////////      bridgeSetup.StartTrain();


    //////////}
    //////////public void TestBridge()
    //////////   {
    //////////	bridgeSetup.LevelStage = BridgeSetup.eLevelStage.PlayStage;
    //////////	_testBridge.SetActive(false);
    //////////	_run.SetActive(true);
    //////////	_backToDraw.SetActive(true);

    //////////}
    ///

	public void RunTrain ()
	{
		bridgeSetup.StartTrain ();
	}

	////public void StopTrain ()
	////{
	////	bridgeSetup.stopTrain ();
	////}
}
