using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HoverScript : MonoBehaviour
{
    public int upgrade;
    public int number;
    public int price;

    private void Update()
    {
        price = gameObject.GetComponent<Purchased>().newPrice;
    }


    public void Send()
    {
        GameObject.Find("GameManager").GetComponent<DisplayText>().Display(this.upgrade, this.number, this.price);
    }
}
