using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CatLock : MonoBehaviour
{
    [SerializeField] private GameObject m_LockImage;
    [SerializeField] private GameObject text;
    public bool IsLocked
    {
        get
        {
            var status = PlayerPrefs.GetInt("CatLock_" + transform.GetSiblingIndex(), 1);
            return status == 1;
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


        if (IsLocked == false)
        {
            text.SetActive(false);
        }
    }
}
