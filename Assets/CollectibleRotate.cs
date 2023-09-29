using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollectibleRotate : MonoBehaviour
{
    
    public float random;
    // Start is called before the first frame update
    void Start()
    {
        random = Random.Range(-1f, 1f);
    }

    // Update is called once per frame
    void Update()
    {
        if (!GlobalVariables.stop)
        {
            transform.Rotate(0f, 0f, random);
        }
    }

    private void OnTriggerEnter(Collider collision)
    {

        if (collision.gameObject.tag == "Player")
        {
            if (gameObject.CompareTag("SJ"))
            {
                //GlobalVariables.Money += 1;
                GlobalVariables.SWMoney += 1;
                GlobalVariables.SJCount++;
            }
           
            if (gameObject.CompareTag("SJ2"))
            {
               //GlobalVariables.Money += 5;
                GlobalVariables.SWMoney += 5;
                GlobalVariables.SJ2Count++;
            }

            if (gameObject.CompareTag("IR"))
            {
                //GlobalVariables.Money += 10;
                GlobalVariables.SWMoney += 10;
                GlobalVariables.IRCount++;
            }
           
            if (gameObject.CompareTag("GO"))
            {
                //GlobalVariables.Money += 20;
                GlobalVariables.SWMoney += 20;
                GlobalVariables.GOCount++;
            }

            if (gameObject.CompareTag("DI"))
            {
                //GlobalVariables.Money += 50;
                GlobalVariables.SWMoney += 50;
                GlobalVariables.DICount++;
            }

            Destroy(gameObject);
        }
    }
}
