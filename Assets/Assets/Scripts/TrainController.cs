using UnityEngine;
using System.Collections;

public class TrainController : MonoBehaviour {

	private Vector3 trainDirection = new Vector3(12.0f, 0.0f, 0.0f);

	private ResetPhysics[] trainWagon;

	public GameObject trainHead;
	private bool trainWorking = false;

	// Use this for initialization
	void Start () {
		trainWagon = GetComponentsInChildren<ResetPhysics>();
		trainHead = GameObject.FindGameObjectWithTag("TrainHead");
		trainWorking = false;
	}

	// Update is called once per frame
	//	void Update () {
	//	
	//	}
	public WheelCollider wheel1;
	public WheelCollider wheel2;
	public WheelCollider wheel3;
	public WheelCollider wheel4;

	void FixedUpdate() {
		if (trainWorking) {
			
			trainHead.GetComponent<Rigidbody>().AddForce(trainDirection, ForceMode.Acceleration);
		}
	}

	public bool IsTrainStarted {
		get { return trainWorking; }
	}

	public void StartTrain() {
		trainWorking = true;
	
	}

	public void StopTrain ()
	{
		trainWorking = false;
	

	}

	public void ResetTrain() {
		trainWorking = false;

		foreach (ResetPhysics rp in trainWagon) {
			rp.Reset();
		}
	}

	public void SetVisible(bool value) {
		Renderer[] rds = GetComponentsInChildren<Renderer>();

		foreach (Renderer r in rds) {
			r.enabled = value;
		}
	}
}
