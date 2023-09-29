using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class JointBreak : MonoBehaviour
{
    public static bool JBreak;
    public GameObject Base;
   
    public static float Distance;

    // Start is called before the first frame update
    void Start()
    {
        JBreak = false;
    }

    // Update is called once per frame
    void Update()
    {
        Distance = Vector3.Distance(Base.transform.position, gameObject.transform.position);
        
        if (Distance > GlobalVariables.TetherLength)
        {
            JBreak = true;

        }

 
    }
}
