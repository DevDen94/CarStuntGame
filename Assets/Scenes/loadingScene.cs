using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class loadingScene : MonoBehaviour
{
    [SerializeField] Image loadingImage;


  

    void Start()
    {

       

        StartCoroutine(fillImage());
    }

    IEnumerator fillImage()
    {
        float t = 0.1f;
        while (t <= 1)
        {
            t += Time.deltaTime;
            yield return null;
            loadingImage.fillAmount = t;
        }
        yield return null;
        SceneManager.LoadScene("MainMenu");
       
    }
    IEnumerator LoadAsynchronously(int sceneIndex)
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync("MainMenu");
        gameObject.SetActive(true);

        yield return null;

        while (!operation.isDone)
        {
            float progress = Mathf.Clamp01(operation.progress / .9f);
            Debug.Log(progress);
            loadingImage.fillAmount = progress;
            yield return null;
        }
    }
}
