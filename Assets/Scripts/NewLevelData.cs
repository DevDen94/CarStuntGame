using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewLevelData : MonoBehaviour
{

	public string name = "";
	public SnapPoint [] anchorPoints;
	public int roadLevel = 0;
	public int Budget = 0;
	public int roadCounter = 0;
	public int beamsCounter = 0;
	public int ropeCounter = 0;
	public float breakForce = 100;
	public float EndbreakForceMultiplier = 10;
	public Transform m_Grid;
	public bool AllowRopeInLevel = false;

	public bool isTutorialLevel = false;
	public List<Transform> sequencePositionsForTutorialStart; 
	public List<Transform> sequencePositionsForTutorialEnd; 


	private void Start()
	{
		if (isTutorialLevel)
		{
			typingScript.instance.handTutorialPoaitionsStart = sequencePositionsForTutorialStart;
			typingScript.instance.handTutorialPoaitionsEnd = sequencePositionsForTutorialEnd;
			typingScript.instance.roadsCounter = roadCounter;
		}

		if (!PlayerPrefs.HasKey("Tutorial"))
		{
			roadCounter = 2;
			beamsCounter = 5;
		}
	}

}
