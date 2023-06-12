using UnityEngine;
using System.Collections;
using SimpleJSON;

public class TitleScreenGUI : MonoBehaviour {

	
	
	private static Rect windowRect = new Rect(10, 10, Screen.width - 20, Screen.height - 20);
	private static Rect levelsRect = new Rect(30, 120, Screen.width - 60, 30); 
	
	public static Level[] levels;
	
	public static Level currentLevel = null;
	
	public static bool levelsLoaded = false;
	
	void Start() {
		if (!levelsLoaded) {
			levels = new Level[5];
			levels[0] = LoadLevel ("level1");
			levels[1] = LoadLevel ("level2");
			levels[2] = LoadLevel ("level3");
			levels[3] = LoadLevel ("level4");
			levels[4] = LoadLevel ("level5");
			
			levelsLoaded = true;
		}
		
	}
	
	private Level LoadLevel(string fileName) {
		TextAsset tx = Resources.Load (fileName) as TextAsset;
		var N = JSON.Parse(tx.text);
		
		Level l = new Level();
		l.name = N["name"];
		l.version = N["version"];
		//l.roadLevel = N["roadLevel"].AsInt;
		l.anchorPointLocations = new Tuple<int, int>[N["anchorPointLocations"].Count];
		for (int i = 0; i != l.anchorPointLocations.Length; i++) {
			var APL = N["anchorPointLocations"][i];
			l.anchorPointLocations[i] = Tuple<int, int>.Of (APL[0].AsInt, APL[1].AsInt);
		}
	/////	Debug.LogError (l.anchorPointLocations.Length);
		l.budget = N["budget"].AsInt;
		
		l.heights = new float[N["heights"].Count];
		for (int i = 0; i != l.heights.Length; i++) {
			l.heights[i] = N["heights"][i].AsFloat;
		}
		return l;
	}
	
	void OnGUI() {
	
		
		for (int i = 0; i != levels.Length; i++) {
			Rect r = new Rect(levelsRect);
			r.y += i*(r.height+10);
			if (GUI.Button(r, levels[i].name)) {
				currentLevel = levels[i];
				Application.LoadLevel ("BridgeBuilder");
			}
		}
	}
}
