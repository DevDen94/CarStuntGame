using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class NextButtonHandler : MonoBehaviour
{
	public Button nextButton;
	void OnEnable ()
	{
		typingScript.instance.nextButton = nextButton;
	}
}
