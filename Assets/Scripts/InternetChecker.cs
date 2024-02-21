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
            
            panel.SetActive(true);
        }
        else if(Application.internetReachability != NetworkReachability.NotReachable)
        {
            panel.SetActive(false);
            
        }
    }


    public void Refresh()
    {
        panel.SetActive(false);
        Time.timeScale = 1f;
        SceneManager.LoadScene(0);
    }
}