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
	public int ropeCounter = 2;
	public float breakForce = 100;
	public float EndbreakForceMultiplier = 10;

	public bool AllowRopeInLevel = false;
}
