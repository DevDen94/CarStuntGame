using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class checkForInternet : MonoBehaviour
{
    // URL to check for internet connectivity
    public string internetCheckURL = "http://www.google.com";
    // Callback for displaying connectivity status
    public delegate void ConnectivityStatus(bool isConnected);
    public static event ConnectivityStatus OnInternetConnectivityChanged;
    private bool isConnected = false;
    private void Start()
    {
        // Start checking connectivity
        StartCoroutine(CheckInternetConnectivity());
    }
    private IEnumerator CheckInternetConnectivity()
    {
            // Create a UnityWebRequest to check connectivity
            using (var request = new UnityEngine.Networking.UnityWebRequest(internetCheckURL))
            {
                request.method = UnityEngine.Networking.UnityWebRequest.kHttpVerbHEAD;
                yield return request.SendWebRequest();
                // Check if the request completed without errors
                if (!request.isNetworkError && !request.isHttpError)
                {
                    isConnected = true;
                }
                else
                {
                    isConnected = false;
                }
                // Invoke the event to notify listeners about the status change
                if (OnInternetConnectivityChanged != null)
                {
                    OnInternetConnectivityChanged.Invoke(isConnected);
                }
            }
    }
}