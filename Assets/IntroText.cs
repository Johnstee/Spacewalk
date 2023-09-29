using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class IntroText : MonoBehaviour
{
    public GameObject gold, iron, sj1, sj2, diamond, asteroid;
    public TextMeshProUGUI INTTEXT;
    // Start is called before the first frame update
    public int ButtonNum;
    public Button Cont;
    public TextMeshProUGUI ContText;
    void Start()
    {
        gold.SetActive(false);
        iron.SetActive(false);
        sj1.SetActive(false);
        sj2.SetActive(false);
        diamond.SetActive(false);
        asteroid.SetActive(false);
        ContText.text = "CONTINUE";
        INTTEXT.text = "HEY YOU!\nThe space station was just\nhit by debris. If we don't\nrepair it soon, all of us will\ndie.";
        ButtonNum = 0;
        Cont.enabled = false;
        StartCoroutine(buttonDelay());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void NextButton()
    {
        ButtonNum++;
        Switch();
    }

    IEnumerator buttonDelay()
    {
        yield return new WaitForSeconds(5);
        Cont.enabled = true;
    }

    public void Switch()
    {
        switch (ButtonNum)
        {
            case 0:
                INTTEXT.text = "HEY YOU!\nThe space station was just\nhit by debris. If we don't\nrepair it soon, all of us will\ndie.";
                break;
            case 1:
                Cont.enabled = false;
                StartCoroutine(buttonDelay());
                INTTEXT.text = "As one of our most\nexperienced astronauts,\nwe're sending you out to\ngather supplies for the\nship's repair.";
                break;
            case 2:
                Cont.enabled = false;
                StartCoroutine(buttonDelay());
                INTTEXT.text = "Here's $20 worth of\nspace junk. Use it to make\nupgrades to your gear in\nTHE SHOP.";
                break;
            case 3:
                Cont.enabled = false;
                StartCoroutine(buttonDelay());
                INTTEXT.text = "Remember to use your\nboosters using the ARROW\nor WASD keys and to reel\nin your tether with K. If\nyou die rather than reeling\nin, money will be reduced.";

                ContText.text = "CONTINUE";
                break;
            case 4:
                Cont.enabled = false;
                StartCoroutine(buttonDelay());
                INTTEXT.text = "<color=green>SPACEJUNK      DIAMOND\n\n\nGOLD    IRON    <color=red>ASTEROID";
                gold.SetActive(true);
                iron.SetActive(true);
                sj1.SetActive(true);
                sj2.SetActive(true);
                diamond.SetActive(true);
                asteroid.SetActive(true);

                ContText.text = "CONTINUE";
                break;
            case 5:
                Cont.enabled = false;
                StartCoroutine(buttonDelay());
                INTTEXT.text = "Good luck and may God\nhelp us all...";
                gold.SetActive(false);
                iron.SetActive(false);
                sj1.SetActive(false);
                sj2.SetActive(false);
                diamond.SetActive(false);
                asteroid.SetActive(false);
                ContText.text = "BEGIN";
                break;
            case 6:
                SceneManager.LoadScene(2);
                break;
        }
    }
}
