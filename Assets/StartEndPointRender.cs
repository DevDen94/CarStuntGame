using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartEndPointRender : MonoBehaviour
{
    void Update()
    {
        Vector2 screenPoint = Camera.main.WorldToScreenPoint(transform.position);
        Debug.LogError(screenPoint);
        if (screenPoint.x > 0)
        {
            transform.localPosition = new Vector3(transform.localPosition.x, transform.localPosition.y, transform.localPosition.z * 1);
        }
        else
        {
            transform.localPosition = new Vector3(transform.localPosition.x, transform.localPosition.y, transform.localPosition.z * (-1));

        }
    }
}
