using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class CatLock : MonoBehaviour
{
    [SerializeField] private GameObject m_LockImage;
    [SerializeField] private GameObject text;
    [SerializeField] private GameObject Rad_button;
    [SerializeField] private Text Rad_Text;
    [SerializeField] private GameObject SelectedBTN;


    public static CatLock Instance;


    private void Awake()
    {
        Instance = this;
    }

    public int AdsCounter
    {
        get
        {
            return PlayerPrefs.GetInt("AdsToUnlock_" + transform.GetSiblingIndex(), 1);
        }
        set
        {
            PlayerPrefs.SetInt("AdsToUnlock_" + transform.GetSiblingIndex(), value);
        }
    }

    public bool IsUnlock
    {
        get
        {
         //   Debug.LogError(AdsCounter + "adsCounter");
            bool status = (PlayerPrefs.GetInt("CatLock_" + transform.GetSiblingIndex(), 0) == 1) || AdsCounter <= 0;  //
            return status;
        }
        set
        {
            bool status = value;
            PlayerPrefs.SetInt("CatLock_" + transform.GetSiblingIndex(), Convert.ToInt32(status));
        }
    }

    private void OnEnable()
    {
        setAdValues();
    }

    public void setAdsCounter()
    {
        if (AdsCounter > 0)
        {
            AdsCounter--;
        }
        // IsLocked = false;
        setAdValues();
    }

   
    public void setAdValues()
    {
        if (transform.GetSiblingIndex() == 0)
            IsUnlock = true;
        //Debug.LogError(IsUnlock);//test
        m_LockImage.SetActive(!IsUnlock);
        Rad_button.SetActive(!IsUnlock);
        SelectedBTN.SetActive(IsUnlock);
        Rad_Text.text = AdsCounter.ToString();

        if (IsUnlock == true)
        {
            text.SetActive(false);
          //  SelectedBTN.SetActive(true);
           // Rad_button.SetActive(false);
        }
      
    }
}
    /////    Debug.LogError("unlocked" + PlayerPrefs.GetInt("CatLock_" + transform.GetSiblingIndex(), 0) ,gameObject);
