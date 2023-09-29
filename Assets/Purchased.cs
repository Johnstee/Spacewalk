using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Purchased : MonoBehaviour
{
    public int Price;

    public bool purch = false;
    
    int upgrade;
    int level;
    bool Toggleon;
    public int tempPrice, newPrice = 0;
    // Start is called before the first frame update
    void Start()
    {
        tempPrice = 0;
    }

    // Update is called once per frame
    void Update()
    {

        if (GlobalVariables.Savelevel == 0)
        {
            Time.timeScale = 1;
            SceneManager.LoadScene(4);
            
        }

        int Money = GlobalVariables.Money;
        upgrade = gameObject.GetComponent<HoverScript>().upgrade;
        level = gameObject.GetComponent<HoverScript>().number;

        
         
        switch (upgrade)
        {
            case 0:
                if (level <= GlobalVariables.Tetherlevel)
                {
                    gameObject.GetComponent<Toggle>().isOn = true;
                    gameObject.GetComponent<Toggle>().interactable = false;
                    purch = true;
                }
                break;

            case 1:
                if (level <= GlobalVariables.Launchlevel)
                {
                    gameObject.GetComponent<Toggle>().isOn = true;
                    gameObject.GetComponent<Toggle>().interactable = false;
                    purch = true;
                }
                break;

            case 2:
                if (level <= GlobalVariables.Rocketlevel)
                {
                    gameObject.GetComponent<Toggle>().isOn = true;
                    gameObject.GetComponent<Toggle>().interactable = false;
                    purch = true;
                }
                break;

            case 3:
                if (level <= GlobalVariables.Oxylevel)
                {
                    gameObject.GetComponent<Toggle>().isOn = true;
                    gameObject.GetComponent<Toggle>().interactable = false;
                    purch = true;
                }
                break;

            case 4:
                if (level <= GlobalVariables.Junklevel)
                {
                    gameObject.GetComponent<Toggle>().isOn = true;
                    gameObject.GetComponent<Toggle>().interactable = false;
                    purch = true;
                }
                break;

            case 5:
                if (level <= GlobalVariables.Radarlevel)
                {
                    gameObject.GetComponent<Toggle>().isOn = true;
                    gameObject.GetComponent<Toggle>().interactable = false;
                    purch = true;
                }
                break;

            case 6:
                if (level <= GlobalVariables.Armourlevel)
                {
                    gameObject.GetComponent<Toggle>().isOn = true;
                    gameObject.GetComponent<Toggle>().interactable = false;
                    purch = true;
                }
                break;

            case 7:
                if (level <= GlobalVariables.Savelevel)
                {
                    gameObject.GetComponent<Toggle>().isOn = true;
                    gameObject.GetComponent<Toggle>().interactable = false;
                    purch = true;
                }
                break;
            case 8:
                if (level <= GlobalVariables.Lucklevel)
                {
                    gameObject.GetComponent<Toggle>().isOn = true;
                    gameObject.GetComponent<Toggle>().interactable = false;
                    purch = true;
                }
                break;
            case 9:
                if (level <= GlobalVariables.Goldlevel)
                {
                    gameObject.GetComponent<Toggle>().isOn = true;
                    gameObject.GetComponent<Toggle>().interactable = false;
                    purch = true;
                }
                break;
        }

        switch (upgrade)
        {
            case 0:
                tempPrice = 0;
                switch (level)
                {
                    case 0:
                        tempPrice += Price;
                        newPrice = tempPrice;
                        break;
                    case 1:
                        tempPrice += Price;

                        for (int i = 0; i < 1; i++)
                        {
                            if (GameObject.Find(("T" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("T" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 2:
                        tempPrice += Price;

                        for (int i = 0; i < 2; i++)
                        {
                            if (GameObject.Find(("T" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("T" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 3:
                        tempPrice += Price;

                        for (int i = 0; i < 3; i++)
                        {
                            if (GameObject.Find(("T" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("T" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 4:
                        tempPrice += Price;

                        for (int i = 0; i < 4; i++)
                        {
                            if (GameObject.Find(("T" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("T" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 5:
                        tempPrice += Price;

                        for (int i = 0; i < 5; i++)
                        {
                            if (GameObject.Find(("T" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("T" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 6:
                        tempPrice += Price;

                        for (int i = 0; i < 6; i++)
                        {
                            if (GameObject.Find(("T" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("T" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 7:

                        tempPrice += Price;

                        for (int i = 0; i < 7; i++)
                        {
                            if (GameObject.Find(("T" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("T" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 8:

                        tempPrice += Price;

                        for (int i = 0; i < 8; i++)
                        {
                            if (GameObject.Find(("T" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("T" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 9:

                        tempPrice += Price;

                        for (int i = 0; i < 9; i++)
                        {
                            if (GameObject.Find(("T" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("T" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;


                }
                break;

            case 1:
                tempPrice = 0;
                switch (level)
                {
                    case 0:
                        tempPrice += Price;
                        newPrice = tempPrice;
                        break;
                    case 1:
                        tempPrice += Price;

                        for (int i = 0; i < 1; i++)
                        {
                            if (GameObject.Find(("L" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("L" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 2:
                        tempPrice += Price;

                        for (int i = 0; i < 2; i++)
                        {
                            if (GameObject.Find(("L" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("L" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 3:
                        tempPrice += Price;

                        for (int i = 0; i < 3; i++)
                        {
                            if (GameObject.Find(("L" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("L" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 4:
                        tempPrice += Price;

                        for (int i = 0; i < 4; i++)
                        {
                            if (GameObject.Find(("L" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("L" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 5:
                        tempPrice += Price;

                        for (int i = 0; i < 5; i++)
                        {
                            if (GameObject.Find(("L" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("L" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 6:
                        tempPrice += Price;

                        for (int i = 0; i < 6; i++)
                        {
                            if (GameObject.Find(("L" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("L" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 7:

                        tempPrice += Price;

                        for (int i = 0; i < 7; i++)
                        {
                            if (GameObject.Find(("L" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("L" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 8:

                        tempPrice += Price;

                        for (int i = 0; i < 8; i++)
                        {
                            if (GameObject.Find(("L" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("L" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 9:

                        tempPrice += Price;

                        for (int i = 0; i < 9; i++)
                        {
                            if (GameObject.Find(("L" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("L" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;


                }
                break;

            case 2:
                tempPrice = 0;
                switch (level)
                {
                    case 0:
                        tempPrice += Price;
                        newPrice = tempPrice;
                        break;
                    case 1:
                        tempPrice += Price;

                        for (int i = 0; i < 1; i++)
                        {
                            if (GameObject.Find(("R" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("R" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 2:
                        tempPrice += Price;

                        for (int i = 0; i < 2; i++)
                        {
                            if (GameObject.Find(("R" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("R" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 3:
                        tempPrice += Price;

                        for (int i = 0; i < 3; i++)
                        {
                            if (GameObject.Find(("R" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("R" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 4:
                        tempPrice += Price;

                        for (int i = 0; i < 4; i++)
                        {
                            if (GameObject.Find(("R" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("R" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 5:
                        tempPrice += Price;

                        for (int i = 0; i < 5; i++)
                        {
                            if (GameObject.Find(("R" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("R" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 6:
                        tempPrice += Price;

                        for (int i = 0; i < 6; i++)
                        {
                            if (GameObject.Find(("R" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("R" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 7:

                        tempPrice += Price;

                        for (int i = 0; i < 7; i++)
                        {
                            if (GameObject.Find(("R" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("R" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 8:

                        tempPrice += Price;

                        for (int i = 0; i < 8; i++)
                        {
                            if (GameObject.Find(("R" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("R" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 9:

                        tempPrice += Price;

                        for (int i = 0; i < 9; i++)
                        {
                            if (GameObject.Find(("R" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("R" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;


                }
                break;

            case 3:
                tempPrice = 0;
                switch (level)
                {
                    case 0:
                        tempPrice += Price;
                        newPrice = tempPrice;
                        break;
                    case 1:
                        tempPrice += Price;

                        for (int i = 0; i < 1; i++)
                        {
                            if (GameObject.Find(("O" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("O" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 2:
                        tempPrice += Price;

                        for (int i = 0; i < 2; i++)
                        {
                            if (GameObject.Find(("O" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("O" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 3:
                        tempPrice += Price;

                        for (int i = 0; i < 3; i++)
                        {
                            if (GameObject.Find(("O" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("O" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 4:
                        tempPrice += Price;

                        for (int i = 0; i < 4; i++)
                        {
                            if (GameObject.Find(("O" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("O" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 5:
                        tempPrice += Price;

                        for (int i = 0; i < 5; i++)
                        {
                            if (GameObject.Find(("O" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("O" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 6:
                        tempPrice += Price;

                        for (int i = 0; i < 6; i++)
                        {
                            if (GameObject.Find(("O" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("O" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 7:

                        tempPrice += Price;

                        for (int i = 0; i < 7; i++)
                        {
                            if (GameObject.Find(("O" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("O" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 8:

                        tempPrice += Price;

                        for (int i = 0; i < 8; i++)
                        {
                            if (GameObject.Find(("O" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("O" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;

                    case 9:

                        tempPrice += Price;

                        for (int i = 0; i < 9; i++)
                        {
                            if (GameObject.Find(("O" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("O" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;


                }
                break;

            case 5:
                tempPrice = 0;
                switch (level)
                {
                    case 0:
                        tempPrice += Price;
                        newPrice = tempPrice;
                        break;
                    case 1:
                        tempPrice += Price;

                        for (int i = 0; i < 1; i++)
                        {
                            if (GameObject.Find(("RA" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("RA" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 2:
                        tempPrice += Price;

                        for (int i = 0; i < 2; i++)
                        {
                            if (GameObject.Find(("RA" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("RA" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                }
                break;

            case 6:
                tempPrice = 0;
                switch (level)
                {
                    case 0:
                        tempPrice += Price;
                        newPrice = tempPrice;
                        break;
                    case 1:
                        tempPrice += Price;

                        for (int i = 0; i < 1; i++)
                        {
                            if (GameObject.Find(("AR" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("AR" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                    case 2:
                        tempPrice += Price;

                        for (int i = 0; i < 2; i++)
                        {
                            if (GameObject.Find(("AR" + i)).GetComponent<Purchased>().purch == false)
                            {
                                tempPrice += GameObject.Find(("AR" + i)).GetComponent<Purchased>().Price;
                            }
                        }
                        newPrice = tempPrice;
                        tempPrice = 0;
                        break;
                }
                break;

            case 7:
                tempPrice = 0;
                switch (level)
                {
                    case 0:
                        tempPrice += Price;
                        newPrice = tempPrice;
                        break;
                }
                break;

            case 8:
                tempPrice = 0;
                switch (level)
                {
                    case 0:
                        tempPrice += Price;
                        newPrice = tempPrice;
                        break;
                }
                break;
            case 9:
                tempPrice = 0;
                switch (level)
                {
                    case 0:
                        tempPrice += Price;
                        newPrice = tempPrice;
                        break;
                }
                break;
        }

    }

    public void OnClickBuy()
    {
        //Debug.Log(Price + "Price");
        //Debug.Log(GlobalVariables.Money + "Money");


        print("Money: " + GlobalVariables.Money.ToString() + ", price: " + Price.ToString() + ", is purchased " + purch);

        

        if (GlobalVariables.Money >= newPrice && purch == false)
        {
            purch = true;
            gameObject.GetComponent<Toggle>().isOn = true;
            GlobalVariables.Money -= newPrice;
            gameObject.GetComponent<Toggle>().interactable = false;

            print("Money: " + GlobalVariables.Money.ToString() + ", price: " + newPrice.ToString() + ", is purchased " + purch);



            switch (upgrade)
            {
                case 0:
                    GlobalVariables.Tetherlevel = level;
                    break;

                case 1:
                    GlobalVariables.Launchlevel = level;
                    break;

                case 2:
                    GlobalVariables.Rocketlevel = level;
                    break;

                case 3:
                    GlobalVariables.Oxylevel = level;
                    break;

                case 4:
                    GlobalVariables.Junklevel = level;
                    break;

                case 5:
                    GlobalVariables.Radarlevel = level;
                    break;
                case 6:
                    GlobalVariables.Armourlevel = level;
                    break;  
                case 7:
                    GlobalVariables.Savelevel = level;
                    break;
                case 8:
                    GlobalVariables.Lucklevel = level;
                    break;
                case 9:
                    GlobalVariables.Goldlevel = level;
                    break;
            }
            
            
            
        }

        else if (newPrice > GlobalVariables.Money && purch == false)
        {
            gameObject.GetComponent<Toggle>().isOn = false;
            print("AAAAAAAAAAAAA: " + gameObject.GetComponent<Toggle>().isOn);
        }
    }
}
