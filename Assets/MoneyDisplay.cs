using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class MoneyDisplay : MonoBehaviour
{
    public TextMeshProUGUI MonText;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        MonText.text = "MONEY:\n$" + (GlobalVariables.Money);
    }
}
