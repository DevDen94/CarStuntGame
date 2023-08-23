using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class InternetChecker : MonoBehaviour
{
    public GameObject panel;



    void Awake()
    {
        DontDestroyOnLoad(this);
    }

    private void Update()
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            panel.SetActive(true);
        }
        else
        {
            panel.SetActive(false);
        }
    }
}