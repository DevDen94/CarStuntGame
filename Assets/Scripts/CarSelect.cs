using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarSelect : MonoBehaviour
{
    public List<GameObject> objectsToEnableWhenCarUnlock;
    public List<GameObject> objectsToEnableWhenCarLocked;
    public string carName;
    public int price;
    public bool unlockByDefault = false;

    public  void unlockCar()
    {
        for (int i = 0; i < objectsToEnableWhenCarUnlock.Count; i++)
        {
            objectsToEnableWhenCarUnlock[i].SetActive(true);
        }

        for (int i = 0; i < objectsToEnableWhenCarLocked.Count; i++)
        {
            objectsToEnableWhenCarLocked[i].SetActive(false);
        }

    }
    public void LockCar()
    {
        for (int i = 0; i < objectsToEnableWhenCarLocked.Count; i++)
        {
            objectsToEnableWhenCarLocked[i].SetActive(true);
        }
        for (int i = 0; i < objectsToEnableWhenCarUnlock.Count; i++)
        {
            objectsToEnableWhenCarUnlock[i].SetActive(false);
        }
    }
    public void checkCarUnlockStatus()
    {
        if (PlayerPrefs.GetInt("Unlock" + carName, 0)==1)
        {
            unlockCar();
        }

        else
        {
            LockCar();
        }
    }
    public void UnlockCarByReward()
    {
        PlayerPrefs.SetInt("Unlock" + carName, 1);
        unlockCar();
    }

    public void UnlockCarByCoins()
    {

        if (PlayerPrefs.GetInt("Coins")>= price)
        {
            PlayerPrefs.SetInt("Unlock" + carName, 1);
            unlockCar();
            CoinsManager.instance.deductCoins(price);
        }

    }
    private void OnEnable()
    {
        if (unlockByDefault == true)
        {
            PlayerPrefs.SetInt("Unlock" + carName, 1);
        }
        checkCarUnlockStatus();
        
    }

    public void SelectCar()
    {
        PlayerPrefs.SetString("CurrentCar", carName);
        HomeManager.instance.SelectCar();
    }
}
