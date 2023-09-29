using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


public class GameUI : MonoBehaviour
{
    public TextMeshProUGUI TetherL;
    public TextMeshProUGUI BoostM;
    public TextMeshProUGUI FuelR;
    public TextMeshProUGUI OxyR;
    public TextMeshProUGUI RadarL;
    public TextMeshProUGUI SuitL;
    public TextMeshProUGUI LuckL;
    public double calc = 1;

    // Start is called before the first frame update
    void Start()
    {
        enabled = true;
    }

    // Update is called once per frame
    void Update()

    {


        if (Generation.multiplier == 2)
        {
            LuckL.text = "Lucky: Yes";
        }
        else
        {
            LuckL.text = "Lucky: No";
        }


        if (calc > 0)
        {
            calc = (System.Math.Round((1 - Move.oxyTime / GlobalVariables.OxygenReserve) * 100, 2));
        }

        else
        {
            calc = 0;
        }


        //calc = Mathf.Clamp(calc, 0d, 100d);
        SuitL.text = "Suit Breakage Chance: " + (100 - (100 * GlobalVariables.ArmourChance) + "%");

        OxyR.text = "Oxygen Left: " + calc + "%";

        if (calc < 10)
        {
            OxyR.color = new Color32(255, 133, 0, 255);
        }

        if (calc <= 0)
        {
            OxyR.text = "Oxygen Left: " + "0" + "%";
            OxyR.color = new Color32(255, 0, 0, 255);
            GameObject.FindWithTag("Player").GetComponent<Pause>().Freeze(2);
            enabled = false;
            
        }

        TetherL.text = "Tether Length: " + System.Math.Round(JointBreak.Distance, 2) + "/ " + (GlobalVariables.TetherLength); TetherL.text = "Tether Length: " + System.Math.Round(JointBreak.Distance, 2) + "/ " + (GlobalVariables.TetherLength);

        if ((JointBreak.Distance / GlobalVariables.TetherLength > 0.90))
        {
            TetherL.color = new Color32(255, 133, 0, 255);
        }
        if ((JointBreak.Distance / GlobalVariables.TetherLength > 1))
        {
            TetherL.color = new Color32(255, 0, 0, 255);
        }

        if ((JointBreak.Distance / GlobalVariables.TetherLength <= 0.90))
        {
            TetherL.color = new Color32(255, 255, 255, 255);
        }

        BoostM.text = "Launch Speed: " + GlobalVariables.BoostMultiplier + "X";

        if (Move.totalTime >= GlobalVariables.FuelReserve)
        {
            Move.totalTime = GlobalVariables.FuelReserve;
        }
       
        FuelR.text = "Fuel Reserve: " + System.Math.Round(Move.totalTime,2) + "/" + GlobalVariables.FuelReserve;
        
        if ((Move.totalTime / GlobalVariables.FuelReserve > 0.90))
        {
            FuelR.color = new Color32(255, 133, 0, 255);
        }
        if (Move.totalTime / GlobalVariables.FuelReserve > 0.999999)
        {
            FuelR.color = new Color32(255, 0, 0, 255);
            GameObject.FindWithTag("Player").GetComponent<Pause>().Freeze(1);
            enabled = false;

        }

        if ((Move.totalTime / GlobalVariables.FuelReserve <= 0.90))
        {
            FuelR.color = new Color32(255, 255, 255, 255);
        }

        RadarL.text = "Radar: " + GlobalVariables.cameraPos + " Unit Boost";
    }
}
