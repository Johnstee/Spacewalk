using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Pause : MonoBehaviour
{
    public TextMeshProUGUI FrzReason;
    public TextMeshProUGUI TotalMon;
    public TextMeshProUGUI SJ;
    public TextMeshProUGUI SJ2;
    public TextMeshProUGUI IR;
    public TextMeshProUGUI GO;
    public TextMeshProUGUI DI;
    public TextMeshProUGUI SWM;
    public GameObject EndPanel;
    public bool reduction;
    public TextMeshProUGUI Red;
    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1;
        EndPanel.SetActive(false);
        reduction = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Freeze(int Freezereason)
    {
        Debug.Log("Round Money" + GlobalVariables.SWMoney);
        if (Freezereason == 5)
        {
            GlobalVariables.Money += (int)(GlobalVariables.SWMoney);
            reduction = false;
            Red.text = "Reduction: None";
        }
        else
        {
            GlobalVariables.Money = GlobalVariables.Money + (int)((GlobalVariables.SWMoney / 10) * 9);
            Debug.Log("Reduced Money" + ((GlobalVariables.SWMoney / 10) * 9));
            reduction = true;
            Red.text = "<color=red>Reduction: 10% (death)";
        }
        
        SJ.text = "Space Junk($1) Collected: " + GlobalVariables.SJCount;
        SJ2.text = "Space Junk II ($5) Collected: " + GlobalVariables.SJ2Count;
        IR.text = "Iron ($10) Collected: " + GlobalVariables.IRCount;
        GO.text = "Gold ($20) Collected: " + GlobalVariables.GOCount;
        DI.text = "Diamond ($50) Collected: " + GlobalVariables.DICount;
        SWM.text = "Money Earnt This Space Walk: $" + GlobalVariables.SWMoney;

        TotalMon.text = "Total Money: $" + GlobalVariables.Money;

        //Freezereason
        // 0 - died by asteroid
        //1 - ran out of fuel
        //2 - ran out of oxygen
        //3 - tether broke
        //4 - flew offscreen
        //5 - reel in
        //6 - dev option or unrelated to round end

        switch(Freezereason)
        {
            case 0:
                FrzReason.text = "Cause Of Death: " + "Asteroid";
                break;
            case 1:
                FrzReason.text = "Cause Of Death: " + "Ran Out Of Fuel";
                break;
            case 2:
                FrzReason.text = "Cause Of Death: " + "Ran Out Of Oxygen";
                break;
            case 3:
                FrzReason.text = "Cause Of Death: " + "Tether Broke";
                break;
            case 4:
                FrzReason.text = "Cause Of Death: " + "Flew Away";
                break;
            case 5:
                FrzReason.text = "Cause Of Death: " + "N/A Reeled In";
                break;
            case 6:
                FrzReason.text = "Cause Of Death: " + "DEV";
                break;
            default:
                FrzReason.text = "Cause Of Death: " + "Error";
                break;
        }
        

        Rigidbody[] rb = Rigidbody.FindObjectsOfType(typeof(Rigidbody)) as Rigidbody[];
        foreach (Rigidbody body in rb)
        {
            Debug.Log("Freeze");
            body.constraints = RigidbodyConstraints.FreezeAll;
            body.isKinematic = true;
        }

        Time.timeScale = 0;
        Move.MoveAllowed = false;
        GlobalVariables.stop = true;
        Destroy(GameObject.FindWithTag("Player").GetComponent<Move>());
        EndPanel.SetActive(true);
    }
}
