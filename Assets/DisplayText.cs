using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class DisplayText : MonoBehaviour
{
    public TextMeshProUGUI Disp;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Display(int upgrade, int number, int price)
    {
        Debug.Log("Disp triggered");
        switch (upgrade)
        {
            case 0:
                Disp.text = "[TETHER LENGTH] - Upgrades the length of your tether, allowing you to fly further away" + " \n- LEVEL " + (number + 1) + " $" + price;
                break;
            case 1:
                Disp.text = "[LAUNCH SPEED] - Upgrades the speed at launch, allowing you to get further out faster" + " \n- LEVEL " + (number + 1) + " $" + price;
                break;
            case 2:
                Disp.text = "[ROCKET FUEL] - Upgrades the amount of fuel available, allowing you to move more before running out" + " \n- LEVEL " + (number + 1) + " $" + price;
                break;
            case 3:
                Disp.text = "[O2 DURATION] - Upgrades the amount of carried oxygen, allowing you to last longer in space" + " \n- LEVEL " + (number + 1) + " $" + price;
                break;
            case 4:
                Disp.text = "[JUNK MAGNET] - Upgrades duration or purchases the junk magnet, use the x key to momentarily attract space junk" + " \n- LEVEL " + (number + 1) + " $" + price;
                break;
            case 5:
                Disp.text = "[RADAR] - Upgrades length or purchases the radar, allowing you to see ahead slightly" + " \n- LEVEL " + (number + 1) + " $" + price;
                break;
            case 6:
                Disp.text = "[REINFORCE SUIT] - Upgrades or purchases the reinforced suit, giving a chance of survival when hitting asteroids " + " \n- LEVEL " + (number + 1) + " $" + price;
                break;
            case 7:
                Disp.text = "[SAVE THE STATION] - Repair and refuel the space station" + "\n$" + price;
                break;
            case 8:
                Disp.text = "[PURE LUCK] - 50% chance that resource spawn rates are doubled" + "\n$" + price;
                break;
            case 9:
                Disp.text = "[GOLDEN SUIT] - Doesn't do anything, but it looks shiny" + "\n$" + price;
                break;
        }
    }
}
