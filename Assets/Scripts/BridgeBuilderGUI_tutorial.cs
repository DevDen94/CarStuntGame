using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BridgeBuilderGUI_tutorial : BridgeBuilderGUI
{

    // Start is called before the first frame update
    public override void Start()
    {
        iTween.MoveTo(EnvirnmentCamera, iTween.Hash("position", envrinmentCamPosition.position, "time", .5f, "easetype", iTween.EaseType.linear));
        iTween.RotateTo(EnvirnmentCamera, iTween.Hash("rotation", Vector3.zero, "time", .5f, "easetype", iTween.EaseType.linear));
        GameObject currentLevelPrefab = Resources.Load<GameObject>("Levels/" + "Tutorial/" + "Level1");
        GameObject Temp = Instantiate(currentLevelPrefab);
        bridgeSetup = Temp.GetComponentInChildren<BridgeSetup>();
        runButton.SetActive(false);
        //AllowRopeDrawing ();
        //GameObject currentLevelPrefabHint = Resources.Load<GameObject>("Levels_Hint/" + HomeManager._category + "/" + HomeManager.selectedLevel.Replace("_", ""));
        //Temp_Hint = Instantiate(currentLevelPrefabHint);
        //Debug.LogError(HomeManager.selectedLevel);
        //int currentLevelIndex = int.Parse(HomeManager.selectedLevel.Split('_')[1].ToString());
        //LevelText.text = "Level " + currentLevelIndex;


        spriteMover1 = GameObject.FindWithTag("f1");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public override void AllowRopeDrawing()
    {
        base.AllowRopeDrawing();
    }

    public override void DisplayOverBudgetError()
    {
        base.DisplayOverBudgetError();
    }

    public override void updateListCount()
    {
        base.updateListCount();
    }
    public void _changeBeamState(int index)
    {
        base.changeBeamState(index);
    }

    public void _backToDraw()
    {
        

        backToDraw();
      //  typingScript.instance.testbtn.SetActive(false);
    }

    public void _runCar()
    {
        RunTrain();
      
    }
    public void OnCanvasGroupChanged()
    {
        goToMainMenu();
    }
}


