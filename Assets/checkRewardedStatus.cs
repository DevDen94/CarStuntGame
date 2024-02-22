using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class checkRewardedStatus : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(waitForCheck());
    }

    public Button[] RewardedButtons;
    public GameObject[] RewardNoText;




    IEnumerator waitForCheck()
    {
        yield return new WaitForSeconds(0.5f);
        for (int i = 0; i < RewardedButtons.Length; i++)
        {
            if (Gley.MobileAds.API.IsRewardedVideoAvailable() || Gley.MobileAds.API.IsRewardedInterstitialAvailable() || Gley.MobileAds.API.IsInterstitialAvailable())
            {
                RewardedButtons[i].interactable = true;
                RewardNoText[i].SetActive(false);
            }
            else
            {
                RewardedButtons[i].interactable = false;
                RewardNoText[i].SetActive(true);

            }
        }
    }
}
