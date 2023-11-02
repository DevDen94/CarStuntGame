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

	bool start;

    private void Start()
    {
        if (!PlayerPrefs.HasKey("Start")&& !PlayerPrefs.HasKey("Tutorial"))
        {
			roadCounter = 0;
			beamsCounter = 0;
        }
    }
    private void Update()
    {
        if (PlayerPrefs.HasKey("Start")&&!PlayerPrefs.HasKey("Tutorial")&& !start)
        {
			roadCounter = 2;
			beamsCounter = 5;
			start = true;
			Debug.Log("Hello");
		}
    }
}
