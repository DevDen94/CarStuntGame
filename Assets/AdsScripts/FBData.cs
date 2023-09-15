using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Database;
using UnityEngine.SceneManagement;
public class FBData : MonoBehaviour
{
    DatabaseReference reference;

    public GameObject Panel;

    public static FBData Instance;



    public string BannerAd;
    public string BigBannerAd;
    public string inter;
    public string appopen;
    public string rewarded;

    private void Awake()
    {
        Instance = this;
    }


    // Start is called before the first frame update
    void Start()
    {
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
            FirebaseApp app = FirebaseApp.DefaultInstance;
            reference = FirebaseDatabase.DefaultInstance.RootReference;


        });

        
        Invoke(nameof(ReadIDsFromDataBase), 0.5f);
        Invoke(nameof(NextScene), 2f);
    }
    public void ReadIDsFromDataBase()
    {
        reference.Child("Game Name").Child("Ads Type").GetValueAsync().ContinueWith(task =>
        {
            if (task.IsCompleted)
            {
                Debug.LogError("Get");
                DataSnapshot snapshot = task.Result;

                BannerAd= snapshot.Child("SmartBannerAD").Value.ToString();
                BigBannerAd= snapshot.Child("BigBannerAd").Value.ToString();
                inter= snapshot.Child("InterstatialAd").Value.ToString();
                appopen= snapshot.Child("AppOpenAd").Value.ToString();
                rewarded=snapshot.Child("RewardedAd").Value.ToString();

                

            }
            else
            {
                Panel.SetActive(true);
            }
            
        });
    }


    public void NextScene()
    {
        SceneManager.LoadScene(1);
    }

}
