using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelSelectionManager : MonoBehaviour
{

    public Image bg;
    public Sprite[] bgSprites;
    public Image[] levelImages;
    public Sprite[] allButtonSprites;
    // Start is called before the first frame update


    private void OnEnable()
    {
        bg.sprite = bgSprites[HomeManager._currentCategory];//categoryIndex
        for (int i = 0; i < levelImages.Length; i++)
        {
            levelImages[i].sprite = allButtonSprites[HomeManager._currentCategory]; //
        }
    }
}