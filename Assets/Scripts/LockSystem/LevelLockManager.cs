using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelLockManager : MonoBehaviour
{
    [SerializeField] private int TotalLevels;
    public int IsLocked
    {
        get
        {
            var status = PlayerPrefs.GetInt("LevelLock_"+ HomeManager._category, 1);
            return status;
        }
        set
        {
            PlayerPrefs.SetInt("LevelLock_" + HomeManager._category, value);
        }
    }

    private void OnEnable()
    {
        for (int i = 0; i < TotalLevels; i++)
        {
            transform.GetChild(i).GetChild(1).gameObject.SetActive(i >= IsLocked);
        }
    }
}
