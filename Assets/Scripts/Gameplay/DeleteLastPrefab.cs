using UnityEngine;

public class DeleteLastPrefab : MonoBehaviour
{
    public string prefabPath; // Path to the prefab relative to the Resources folder

    private GameObject lastPrefabInstance;

    public void DeleteLastPrefabInstance()
    {
        if (lastPrefabInstance != null)
        {
            Destroy(lastPrefabInstance);
            Resources.UnloadUnusedAssets();
        }
    }

    private void Start()
    {
        // Load the prefab from the Resources folder and instantiate it
        GameObject prefab = Resources.Load<GameObject>(prefabPath);
        if (prefab != null)
        {
            lastPrefabInstance = Instantiate(prefab);
        }
    }
}
