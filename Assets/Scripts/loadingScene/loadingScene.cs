using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class loadingScene : MonoBehaviour
{
    public Image loadingBarImage;
    public float fillDuration = 3f; // Time it takes to fill the Image
    public float delayBeforeLoadScene = 1f; // Delay before loading the next scene
                                            //  public string nextSceneName = "MainMenu"; // Name of the scene you want to load
                                            //public GameObject m_InternetConnnectionPanel;
    public Data data;
    private void Awake()
    {
        //checkForInternet.OnInternetConnectivityChanged += LoadNextScreen;
    }

    private void Start()
    {
        PlayerPrefs.SetInt("AdValue", 0);
        if (data.data == Application.identifier)
        {
            LoadNextScreen();
        }
        else
        {
            Application.Quit();
        }

        
    }

    public void LoadNextScreen()
    {
        
        StartCoroutine(AnimateLoadingBar());

       
    }


    private IEnumerator AnimateLoadingBar()
    {
        float elapsedTime = 0f;

        while (elapsedTime < fillDuration)
        {
            float fillAmount = Mathf.Lerp(0f, 1f, elapsedTime / fillDuration);
            loadingBarImage.fillAmount = fillAmount;

            elapsedTime += Time.deltaTime;
            yield return null;
        }

        // Ensure the Image is completely filled at the end
        loadingBarImage.fillAmount = 1f;

        // Wait for the delay before loading the next scene
        yield return new WaitForSeconds(delayBeforeLoadScene);

        // Load the next scene
        SceneManager.LoadScene("MainMenu");
    }

    public void Quit()
    {
        Application.Quit();
    }
}
