using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Loading : MonoBehaviour
{

    public GameObject loadingScreen;
    public Image LoadingFillBar;

    private void Start()
    {
     
       StartCoroutine(LoadSceneAsync());   
      
    }

    IEnumerator LoadSceneAsync()
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync(1);
        loadingScreen.SetActive(true);

        while(!operation.isDone)
        {
            float progressValue = Mathf.Clamp01(operation.progress / 0.9f);
            LoadingFillBar.fillAmount = progressValue;

            yield return null;

        }
    }
}
