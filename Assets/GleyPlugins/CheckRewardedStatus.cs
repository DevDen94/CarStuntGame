using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckRewardedStatus : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject[] statusText;
    public UnityEngine.UI.Button[] RewardedButtons;

    void Start()
    {
        StartCoroutine(CheckRewardedAdAvailability());
    }

    IEnumerator CheckRewardedAdAvailability()
    {
        while (true)
        {
           
                // Check if rewarded ad is available through Gley Ads
                bool isRewardedAdAvailable = Advertisements.Instance.IsRewardVideoAvailable();

                for(int i = 0; i < RewardedButtons.Length; i++)
                {
                    RewardedButtons[i].interactable = isRewardedAdAvailable;
                }
                 for (int i = 0; i < statusText.Length; i++)
                {
                    if (isRewardedAdAvailable)
                    statusText[i].SetActive(false);
                    else
                    statusText[i].SetActive(true);
                }

          

            //print("in while");
            // Wait for a certain interval before checking again
            yield return new WaitForSeconds(1f); // Adjust the interval as needed
        }
    }

}
