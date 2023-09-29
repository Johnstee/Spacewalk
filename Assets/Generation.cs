using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Generation : MonoBehaviour
{
    public int choice;
    public int xpos, ypos;
    public GameObject asteroid1, asteroid2;
    public GameObject spacejunk1, spacejunk2, iron, gold, diamond;
    public static int multiplier;
    // Start is called before the first frame update
    void Start()
    {
        multiplier = 1;
        Spawn();
        
    }

    // Update is called once per frame
    void Update()
    {

        //5-190
    }


    public void Spawn()
    {
        if(GlobalVariables.Lucklevel == 0) 
        { 
        
            if (GlobalVariables.PercentChance(0.5f))
            {
                multiplier = 2;
            }
            else
            {
                multiplier = 1;
            }

        }
        

        for (int i = 0; i < 35; i++)
        {
            choice = Random.Range(0, 2);
            if (choice == 0)
            {
                xpos = Random.Range(5, 190);
                ypos = Random.Range(-5, 5);
                Instantiate(asteroid1, new Vector3(xpos, ypos, 0), Quaternion.identity);
            }
            if (choice == 1)
            {
                xpos = Random.Range(5, 190);
                ypos = Random.Range(-5, 5);
                Instantiate(asteroid2, new Vector3(xpos, ypos, 0), Quaternion.identity);
            }


        }

        for (int i = 0; i < 25*multiplier; i++)
        {
            xpos = Random.Range(5, 190);
            ypos = Random.Range(-5, 5);
            Instantiate(spacejunk1, new Vector3(xpos, ypos, 0), Quaternion.identity);
                
        }

        for (int i = 0; i < 15*multiplier; i++)
        {
            xpos = Random.Range(5, 190);
            ypos = Random.Range(-5, 5);
            Instantiate(spacejunk2, new Vector3(xpos, ypos, 0), Quaternion.identity);
        }

        for (int i = 0; i < 6*multiplier; i++)
        {
            xpos = Random.Range(5, 190);
            ypos = Random.Range(-5, 5);
            Instantiate(iron, new Vector3(xpos, ypos, 0), Quaternion.identity);
        }

        for (int i = 0; i < 3*multiplier; i++)
        {
            xpos = Random.Range(5, 190);
            ypos = Random.Range(-5, 5);
            Instantiate(gold, new Vector3(xpos, ypos, 0), Quaternion.identity);
        }

        choice = Random.Range(1, 5);
        if (multiplier == 2)
        {
            xpos = Random.Range(5, 190);
            ypos = Random.Range(-5, 5);
            Instantiate(diamond, new Vector3(xpos, ypos, 0), Quaternion.identity);
        }

        else if (choice == 3 || choice == 4)
        {
            xpos = Random.Range(5, 190);
            ypos = Random.Range(-5, 5);
            Instantiate(diamond, new Vector3(xpos, ypos, 0), Quaternion.identity);

        }
    }


}
