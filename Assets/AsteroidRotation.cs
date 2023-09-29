using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AsteroidRotation : MonoBehaviour
{
    public float random;
    
    // Start is called before the first frame update
    void Start()
    {
        GlobalVariables.stop = false;
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
        if (Move.bCheckNum == 0)
        {
            Destroy(gameObject);
        }

        else
        {
            Debug.Log(GlobalVariables.PercentChance(GlobalVariables.ArmourChance));
            if (collision.gameObject.tag == "Player" && !GlobalVariables.PercentChance(GlobalVariables.ArmourChance))
            {
                GlobalVariables.stop = true;
                collision.gameObject.GetComponent<Pause>().Freeze(0);
            }
            else
            {
                Destroy(gameObject);
            }
        }

    }
}
