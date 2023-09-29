using System.Collections;
using System.Collections.Generic;
using UnityEngine;




public class GlobalVariables : MonoBehaviour
{
    public static int Money = 20;
    public static float Tetherlevel = -1;
    public static float Launchlevel = -1;
    public static float Rocketlevel = -1;
    public static float Oxylevel = -1;
    public static float Junklevel = -1;
    public static float Radarlevel = -1;
    public static float Armourlevel = -1;
    public static float Savelevel = -1;
    public static float Lucklevel = -1;
    public static float Goldlevel = -1;

    public static float TetherLength = 50;
    public static float BoostMultiplier = 2;
    public static float FuelReserve = 15;
    public static float OxygenReserve = 15f;
    public static bool stop = false;
    public static int cameraPos = 0;
    public static float ArmourChance = 0;
    public static float Luck = 0.0f;

    public static float SWMoney = 0;
    public static int SJCount = 0;
    public static int SJ2Count = 0;
    public static int IRCount = 0;
    public static int GOCount = 0;
    public static int DICount = 0;
    public static float rand = 0;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public static bool PercentChance(float percentage)
    {
        Debug.Log("PChance executed " + percentage + "%");
        rand = Random.Range(0f, 1f);
        if (rand < percentage)
        {
            Debug.Log("PChance TRUE");
            return true;
        }
        else
        {
            Debug.Log("PChance FALSE");
            return false;
        }
        
    }

    // Update is called once per frame
    void Update()
    {
       // Debug.Log("radar" + Radarlevel);
        switch (Radarlevel)
        {
            
            case -1:
                cameraPos = 0;
                break;
            case 0:
                cameraPos = 2;
                break;
            case 1:
                cameraPos = 3;
                break;
            case 2:
                cameraPos = 4;
                break;
        }    
        
        switch (Tetherlevel)
        {
            case -1:
                TetherLength = 50;
                break;
            case 0:
                TetherLength = 60;
                break;
            case 1:
                TetherLength = 70;
                break;
            case 2:
                TetherLength = 80;
                break;
            case 3:
                TetherLength = 90;
                break;
            case 4:
                TetherLength = 100;
                break;
            case 5:
                TetherLength = 110;
                break;
            case 6:
                TetherLength = 120;
                break;
            case 7:
                TetherLength = 130;
                break;
            case 8:
                TetherLength = 140;
                break;
            case 9:
                TetherLength = 160;
                break;
        }

        switch (Launchlevel)
        {
            case -1:
                BoostMultiplier = 2;
                break;
            case 0:
                BoostMultiplier = 3;
                break;
            case 1:
                BoostMultiplier = 4;
                break;
            case 2:
                BoostMultiplier = 5;
                break;
            case 3:
                BoostMultiplier = 6;
                break;
            case 4:
                BoostMultiplier = 7;
                break;
            case 5:
                BoostMultiplier = 8;
                break;
            case 6:
                BoostMultiplier = 9;
                break;
            case 7:
                BoostMultiplier = 10;
                break;
            case 8:
                BoostMultiplier = 11;
                break;
            case 9:
                BoostMultiplier = 12;
                break;
        }

        switch (Rocketlevel)
        {
            case -1:
                FuelReserve = 15;
                break;
            case 0:
                FuelReserve = 20;
                break;
            case 1:
                FuelReserve = 25;
                break;
            case 2:
                FuelReserve = 30;
                break;
            case 3:
                FuelReserve = 35;
                break;
            case 4:
                FuelReserve = 40;
                break;
            case 5:
                FuelReserve = 45;
                break;
            case 6:
                FuelReserve = 50;
                break;
            case 7:
                FuelReserve = 55;
                break;
            case 8:
                FuelReserve = 60;
                break;
            case 9:
                FuelReserve = 65;
                break;
        }

        switch (Oxylevel)
        {
            case -1:
                OxygenReserve = 15;
                break;
            case 0:
                OxygenReserve = 20;
                break;
            case 1:
                OxygenReserve = 25;
                break;
            case 2:
                OxygenReserve = 30;
                break;
            case 3:
                OxygenReserve = 35;
                break;
            case 4:
                OxygenReserve = 40;
                break;
            case 5:
                OxygenReserve = 45;
                break;
            case 6:
                OxygenReserve = 50;
                break;
            case 7:
                OxygenReserve = 55;
                break;
            case 8:
                OxygenReserve = 60;
                break;
            case 9:
                OxygenReserve = 65;
                break;
        }

        switch (Armourlevel)
        {
            case -1:
                ArmourChance = 0;
                break;
            case 0:
                ArmourChance = 0.3f;
                break;
            case 1:
                ArmourChance = 0.4f;
                break;
            case 2:
                ArmourChance = 0.5f;
                break;


        }

    }
}
