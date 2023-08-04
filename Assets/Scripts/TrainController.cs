using UnityEngine;
using System.Collections;

public class TrainController : MonoBehaviour {

	public Vector3 trainDirection = new Vector3(8.0f, 0.0f, 0.0f);

	private ResetPhysics[] trainWagon;

	public GameObject trainHead;
	public bool trainWorking = false;
	public static TrainController instance;

	public GameObject insidewCamera;
	private Rigidbody m_Rigidbody;
	// Use this for initialization
	void Start () {
		m_Rigidbody = trainHead.GetComponent<Rigidbody>();
		instance = this;
		trainWagon = GetComponentsInChildren<ResetPhysics>();
		trainHead = GameObject.FindGameObjectWithTag("TrainHead");
		trainWorking = false;
		Camera.main.GetComponent<BridgeBuilderGUI> ().InsideCarCamera = insidewCamera;
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
            //wheel1.motorTorque = 10;
            //	wheel2.motorTorque = 10;
            //	wheel3.motorTorque = 10;
            //	wheel4.motorTorque = 10;
            //m_Rigidbody.MovePosition(Vector3.forward*Time.deltaTime*10f);
            trainHead.GetComponent<Rigidbody>().AddForce(trainDirection , ForceMode.Acceleration);
            //trainHead.GetComponent<Rigidbody>().velocity= trainDirection;
            ///////////////Debug.Log("XXXXXXXXXXXXXXXXXXXXXX" + ForceMode.Acceleration.ToString());
        }
	}

	public bool IsTrainStarted {
		get { return trainWorking; }
	}

	public void StartTrain() {
		trainWorking = true;
	//	transform.GetChild (0).GetComponent<CarDriver> ().SetInputs (1, 0);
	}
	public void StopTrain1()
	{
		trainWorking = false;
		trainHead.GetComponent<Rigidbody>().AddForce(Vector3.zero);
		trainHead.GetComponent<Rigidbody>().velocity = Vector3.zero;
		//transform.GetChild (0).GetComponent<CarDriver> ().SetInputs (0, 0);
		

	}
	public void StopTrain ()
	{
		trainWorking = false;
		trainHead.GetComponent<Rigidbody> ().AddForce (Vector3.zero);
		trainHead.GetComponent<Rigidbody> ().velocity = Vector3.zero;
		//transform.GetChild (0).GetComponent<CarDriver> ().SetInputs (0, 0);
		ResetTrain();

	}

	public void ResetTrain() {
		trainWorking = false;

		foreach (ResetPhysics rp in trainWagon) {
			rp.Reset();
		}

		transform.GetChild(0).GetComponent<Collider>().enabled = true; //play
	}

	public void SetVisible(bool value) {
		Renderer[] rds = GetComponentsInChildren<Renderer>();

		foreach (Renderer r in rds) {
			r.enabled = value;
		}
	}

 //   bool onetime = false;
 //   private void OnCollisionEnter(Collision collision)
 //   {
 //       if (collision.gameObject.tag == "rock" && !onetime)
 //       {
 //           onetime = true;
 //           Debug.LogError("collided with rock");
 //           Invoke("forcefulLevelFailed", 5);
 //       }
 //   }

 //   void forcefulLevelFailed()
	//{
	//	if (!Camera.main.GetComponent<BridgeBuilderGUI>().gamePaused)
	//	{
	//		Camera.main.GetComponent<BridgeBuilderGUI>().LevelFailed();
	//	}
	//}
}
