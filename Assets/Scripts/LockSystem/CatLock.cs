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


    public int AdsCounter
    {
        get
        {
            return PlayerPrefs.GetInt("AdsToUnlock_" + transform.GetSiblingIndex(), 3);
        }
        set
        {
            PlayerPrefs.SetInt("AdsToUnlock_" + transform.GetSiblingIndex(), value);
        }
    }

    public bool IsLocked
    {
        get
        {
            bool status = (PlayerPrefs.GetInt("CatLock_" + transform.GetSiblingIndex(), 1) == 1) || AdsCounter <= 0;
            return status;
        }
        set
        {
            var status = value ? 1 : 0;
            PlayerPrefs.SetInt("CatLock_" + transform.GetSiblingIndex(), status);
        }
    }

    private void OnEnable()
    {
        if (transform.GetSiblingIndex() == 0)
            IsLocked = false;
        m_LockImage.SetActive(IsLocked);
        Rad_button.SetActive(IsLocked);

        Rad_Text.text = AdsCounter.ToString();

        if (IsLocked == false)
        {
            text.SetActive(false);
            SelectedBTN.SetActive(true);
        }
    }

    public void setAdsCounter()
    {
        if (AdsCounter > 0)
        {
            AdsCounter--;
        }
       // IsLocked = false;

    }
}
