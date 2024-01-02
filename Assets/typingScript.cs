using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class typingScript : MonoBehaviour
{
    public Text textContainer;
    public AudioSource audioPlayer;
    public List<string> allDialogues;
    public List<AudioClip> clips;

    public Button nextButton;
    public int index = 0;

    public void next()
    {
        StopCoroutine("typingEffect");
        textContainer.text = null;
        StartCoroutine("typingEffect");
        nextButton.interactable = false;
    }

    IEnumerator typingEffect()
    {
        string toShow = allDialogues[index];
        for (int i = 0; i < toShow.Length; i++)
        {
            textContainer.text += toShow[i];
            yield return new WaitForSeconds(0.1f);
        }
        //audioPlayer.clip = clips[index];
        //audioPlayer.Play();
        index++;
        if (index >= allDialogues.Count)
            index = 0;
        nextButton.interactable = true;
    }

}
