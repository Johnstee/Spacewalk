using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class EndText : MonoBehaviour
{
    public TextMeshProUGUI INTTEXT;
    // Start is called before the first frame update
    public int ButtonNum2;
    public Button Cont;
    public TextMeshProUGUI ContText;
    void Start()
    {
        ContText.text = "CONTINUE";
        INTTEXT.text = "Congratulations!\nYou've successfully\nrepaired the space station and saved everybody on\nboard!";
        ButtonNum2 = 0;
        Cont.interactable = false;
        StartCoroutine(buttonDelay());
        Cont.interactable = true;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void NextButton()
    {
        ButtonNum2++;
        Switch();
    }

    IEnumerator buttonDelay()
    {
        yield return new WaitForSeconds(5);
        Cont.interactable = true;
    }

    public void Switch()
    {
        switch (ButtonNum2)
        {
            case 0:
                INTTEXT.text = "Congratulations!\nYou've successfully\nrepaired the space station and saved everybody on\nboard!";
                break;
            case 1:
                Cont.interactable = false;
                StartCoroutine(buttonDelay());
                INTTEXT.text = "Due to your great bravery\nand sacrifice, the president\nhas decided to issue you\nthe congressional space\nmedal of honor.";
                break;
            case 2:
                Cont.interactable = false;
                StartCoroutine(buttonDelay());
                INTTEXT.text = "Congratulations and good\nluck on your future\nendeavours!";
                ContText.text = "END";
                break;

            case 3:
                Cont.interactable = false;
                SceneManager.LoadScene(5);
                Destroy(this);

                break;
        }
    }
}
