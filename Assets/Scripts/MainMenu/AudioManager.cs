using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;

    public AudioSource musicSource;
    public AudioSource wind;
    public AudioSource beamMake;
    public AudioSource failAudio;
    public AudioSource winAudio;
    public AudioSource CarSink;
    public AudioSource Panelopen;
    public AudioSource buttonAudio;
    public AudioSource carStart;
    public AudioSource beamDestroy;

    [HideInInspector]
    public int soundState,musicState;

        public Image soundImage;
        public Image musicImage;

    private void Awake()
    {

        if (FindObjectsOfType(typeof(AudioManager)).Length > 1)
        {
            Destroy(gameObject);
            return;
        }


        instance = this;
        DontDestroyOnLoad(gameObject);
    }
    // Start is called before the first frame update
    void Start()
    {
                if (sound == 1)
                        TurnSoundOn ();
                else
                        TurnSoundOff ();

                if (music == 1)
                        TurnMusicOn ();
                else
                        TurnMusicOff ();
    }

    // Update is called once per frame
    void Update()
    {
        //if (SceneManager.GetActiveScene())
        //{

        //}
    }

        public int sound {
		get {
                        return PlayerPrefs.GetInt("Sound",1);

                }
                set { PlayerPrefs.SetInt ("Sound", value); }
	}

        int music {
		get { return PlayerPrefs.GetInt ("Music", 1); }
		set { PlayerPrefs.SetInt ("Music", value); }
	}

        public void setSound (Image image)
	{
                soundImage = image;
                if (sound == 1)
                        TurnSoundOff ();
                else
                        TurnSoundOn ();
	}

        public void setMusic (Image image)
	{
                musicImage = image;
                if (music == 1) {
                        TurnMusicOff ();

                } else
                        TurnMusicOn ();
	}

    public void TurnSoundOff()
    {
        carStart.volume = 0.0f;
        beamMake.volume = 0.0f;
        failAudio.volume = 0.0f;
        CarSink.volume = 0.0f;
        winAudio.volume = 0.0f;
        buttonAudio.volume = 0.0f;
        Panelopen.volume = 0.0f;
        beamDestroy.volume = 0.0f;
        sound = 0;
                if (soundImage != null)
                        soundImage.color = Color.grey;
        soundState = 0;
    }

    public void TurnSoundOn()
    {
        carStart.volume = 1.0f;
        beamMake.volume = 1.0f;
        failAudio.volume = 1.0f;
        winAudio.volume = 1.0f;
        CarSink.volume = 1.0f;
        buttonAudio.volume = 1.0f;
        Panelopen.volume = 1.0f;
        beamDestroy.volume = 1.0f;
        sound = 1;
        if (soundImage != null)
            soundImage.color = Color.white;
        soundState = 1;
    }
    public void TurnMusicOff()
    {
        wind.volume = 0.0f;
        musicSource.volume = 0.0f;
        musicState = 0;
                music = musicState;
                if (musicImage != null)

                        musicImage.color = Color.grey;
    }

    public void TurnMusicOn()
    {
        wind.volume = 1.0f;
        musicSource.volume = 1.0f;
        musicState = 1;
                music = 1;
                if (musicImage != null)

                        musicImage.color = Color.white;
    }
}
