using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class CameraS : MonoBehaviour
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
        transform.position = new Vector3(Mathf.Clamp(Player1.transform.position.x, minPosition, maxPosition), transform.position.y, transform.position.z);
    }
}
