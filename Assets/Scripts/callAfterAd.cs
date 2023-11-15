using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class callAfterAd : MonoBehaviour
{
    public UnityEngine.UI.Text AdTImer;
    float timer;
    private void OnEnable()
    {
        timer = 3;
        StartCoroutine(AdTmer());
    }

    IEnumerator AdTmer()
    {
        while (timer > 0f)
        {
            // Update the UI text
            UpdateCountdownText();

            // Wait for one second
            yield return new WaitForSecondsRealtime(1f);

            // Decrease the countdown time
            timer--;

            // Ensure the timer doesn't go below 0
            timer = Mathf.Max(timer, 0f);
        }

        Scene currentScene = SceneManager.GetActiveScene();
        if (currentScene.buildIndex == 1)
            HomeManager.instance.PanelOpenAfterAd();
        else
            BridgeBuilderGUI.Instance.PanelOpenAfterAd();
        // Countdown reached zero, do something here if needed
        Debug.Log("Countdown reached zero!");
    }
    void UpdateCountdownText()
    {
        // Format the time as minutes and seconds
        int minutes = Mathf.FloorToInt(timer / 60f);
        int seconds = Mathf.FloorToInt(timer % 60f);

        // Update the UI text
        AdTImer.text = seconds.ToString();
    }
}
