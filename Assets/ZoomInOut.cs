using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZoomInOut : MonoBehaviour
{
	public Camera ortho1;
	public Camera ortho2;
	public Camera _perspectiveCam;

	public float OrthoMin = 15;
	public float orthoMax = 11;

	public float velocity = 1;
	public float smoothTime = .25f;
	public float zoomMultiplier = 4;


	public float perspectiveMin = 16;
	public float perspectiveMax = 23;


	float currentSize = 11;
	float fOv = 23;


	bool _zoomIn = false;
	
	public FixedTouchField touchField;
	public float xAxis = 1-1;
	public float yAxis = 1 - 1;

	public float xMax, yMin, yMax, xMin;
	Vector3 InitPosition;


	void Start ()
	{
		InitPosition = transform.position;
		currentSize = ortho1.orthographicSize;
		fOv = _perspectiveCam.fieldOfView;
		Input.multiTouchEnabled = false;
		xAxis = transform.position.x;
		yAxis = transform.position.y;
	}

	float value = -1;

	public void zooming ()
	{
		AudioManager.instance.buttonAudio.Play();
		value = value == 1 ? -1 : 1;
		if (value == 1)
			_zoomIn = true;
		else
			_zoomIn = false;
	}

	void Update ()
	{
		float scroll = value;
		currentSize -= scroll * zoomMultiplier;
		fOv -= scroll * zoomMultiplier;
		currentSize = Mathf.Clamp (currentSize, orthoMax, OrthoMin);
		fOv = Mathf.Clamp (fOv, perspectiveMin, perspectiveMax);
		ortho1.orthographicSize = Mathf.SmoothDamp (ortho1.orthographicSize, currentSize, ref velocity, smoothTime);
		ortho2.orthographicSize = Mathf.SmoothDamp (ortho2.orthographicSize, currentSize, ref velocity, smoothTime);

		_perspectiveCam.fieldOfView = fOv;


		if (!BridgeSetup.isDrawing) {
			if (_zoomIn) {
				xAxis += touchField.TouchDist.x* .01f;
				yAxis += touchField.TouchDist.y* .01f;
				xAxis = Mathf.Clamp(xAxis, xMin, xMax);
				yAxis = Mathf.Clamp(yAxis, yMin, yMax);
				Vector3 _speed = Vector3.Lerp (transform.position, new Vector3(xAxis ,yAxis),1);
				transform.position = _speed;
			} else {
				transform.position = InitPosition;
			}
		}




	}

}
