using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamSwitcher : MonoBehaviour
{
    public GameObject Cam1;
    public GameObject Cam2;
    private void Update()
    {
        if (Input.GetButtonDown("switch1"))
        {
            Cam1.SetActive(true);
            Cam2.SetActive(false);
        }
        if (Input.GetButtonDown("switch2"))
        {
            Cam2.SetActive(true);
            Cam1.SetActive(false);
        }
    }
}
