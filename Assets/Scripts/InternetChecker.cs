using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
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
            Time.timeScale = 0f;
            panel.SetActive(true);
        }
    }


    public void Refresh()
    {
        panel.SetActive(false);
        Time.timeScale = 1f;
        SceneManager.LoadScene(0);
    }
}