using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoinsManager : MonoBehaviour
{
	public static CoinsManager instance;
	public GameObject CoinsHeader;

	public Text CoinsText;

	void Awake ()
	{
		if (instance == null)
			instance = this;
		CoinsText.text = coins.ToString ();

		DontDestroyOnLoad (gameObject);

	

 
	}

    public void Update()
    {
        CoinsText.text = coins.ToString();
    }

    public int coins {
		get { return PlayerPrefs.GetInt ("Coins",50); }
		set { PlayerPrefs.SetInt ("Coins", value); }
	}


	public void EnableCoinsCanvas(bool value)
	{
		CoinsHeader.SetActive (value);
		CoinsText.gameObject.SetActive (value);
	}
	public void addCoins (int amount)
	{
		StartCoroutine (coinsAnimationPlayer (amount));
	}
	public void deductCoins(int amount)
	{
		StartCoroutine(deductCoinsAnimationPlayer(amount));
	}


	IEnumerator coinsAnimationPlayer (int amount)
	{
		float t = coins+amount;
		while (t > coins) {
			coins++;
			CoinsText.text = coins.ToString ();
			yield return new WaitForEndOfFrame ();
		}

		//coins = amount;
		CoinsText.text = coins.ToString ();

	}
	IEnumerator deductCoinsAnimationPlayer(int amount)
	{
		float t = amount - amount;
		while (t < coins)
		{
			coins--;
			CoinsText.text = coins.ToString();
           
        }
        yield return null;
        //coins = amount;
        CoinsText.text = coins.ToString();

	}
}
