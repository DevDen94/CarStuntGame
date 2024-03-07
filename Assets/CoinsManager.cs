using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoinsManager : MonoBehaviour
{
	public static CoinsManager instance;

	public Text CoinsText;

	void Awake ()
	{
		if (instance == null)
			instance = this;
		CoinsText.text = coins.ToString ();
	}


	int coins {
		get { return PlayerPrefs.GetInt ("Coins", 10000); }
		set { PlayerPrefs.SetInt ("Coins", value); }
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
		float t = coins - amount;
		while (t < coins)
		{
			coins--;
			CoinsText.text = coins.ToString();
			yield return new WaitForEndOfFrame();
		}

		//coins = amount;
		CoinsText.text = coins.ToString();

	}
}
