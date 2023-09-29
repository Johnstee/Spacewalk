using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraD : MonoBehaviour
{
    public GameObject Player1;
    float minPosition = 0;
    float maxPosition = 5000;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        if (GlobalVariables.Radarlevel == -1)
        {
            gameObject.SetActive(false);
        }
        else
        {
            gameObject.SetActive(true);
        }

        transform.position = new Vector3(Mathf.Clamp(Player1.transform.position.x + GlobalVariables.cameraPos, minPosition, maxPosition), transform.position.y, transform.position.z);
    }
}
