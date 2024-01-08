using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bgSoundChange : MonoBehaviour
{
    public AudioClip halloweenBg;

    private void Start()
    {
        AudioManager.instance.wind.clip = AudioManager.instance.wind.clip;
    }
}
