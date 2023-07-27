using UnityEngine;

public class ScreenTimeOut : MonoBehaviour
{
    void Start()
    {
        // Disable screen dimming
        DontDestroyOnLoad(gameObject);
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }
}