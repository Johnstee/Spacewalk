using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class Move : MonoBehaviour
{
    public static bool MoveAllowed;
    public Rigidbody playerRb;
    public float hspeed = 10f;
    public float vspeed = 0.25f;
    float xVel, yVel;
    public GameObject Reel;
    float ReelMultiplier = 10f;
    float Hori, Vert;
    public float limit = 4f;
    public bool IsReel = false;
    public float startTimeV, startTimeH;
    public static float totalTime;
    public static float oxyTime = 0;
    public TextMeshProUGUI boostText;
    public float startTime;
    public static float bCheckNum = 0;
    bool boostCheck = false;
    public Sprite def;
    public Sprite gold;

    // Start is called before the first frame update
    void Start()
    {

        bCheckNum = 0;
        GlobalVariables.SWMoney = 0;
        GlobalVariables.SJ2Count = 0;
        GlobalVariables.SJCount = 0;
        GlobalVariables.IRCount = 0;
        GlobalVariables.GOCount = 0;
        GlobalVariables.DICount = 0;
        totalTime = 0;
        startTime = Time.time;
  


    playerRb.AddForce(gameObject.transform.up * GlobalVariables.BoostMultiplier, ForceMode.Impulse);
        StartCoroutine(BoostDelay());
        

        //Debug.Log(GlobalVariables.BoostMultiplier);

    }
    // Update is called once per frame
    void Update()
    {

        
 if (GlobalVariables.Goldlevel == 0)
        {
            gameObject.GetComponent<SpriteRenderer>().sprite = gold;
        }
 else
        {
            gameObject.GetComponent<SpriteRenderer>().sprite = def;
        }

        //Debug.Log(GlobalVariables.BoostMultiplier);

        oxyTime = Time.time - startTime;
        

        if (boostCheck)
        {

            if(gameObject.transform.position.y >= 6 || gameObject.transform.position.y <= -6 || gameObject.transform.position.x < -9)
            {
                gameObject.GetComponent<Pause>().Freeze(4);
            }

            if (Input.GetButton("Horizontal"))
            {
                totalTime += Time.deltaTime;
            }

            if (Input.GetButton("Vertical"))
            {
                totalTime += Time.deltaTime;
            }

            if (MoveAllowed)
            {
                Hori = Input.GetAxis("Horizontal");
                Vert = Input.GetAxis("Vertical");
            }



            transform.Rotate(Vector3.forward * -Hori * hspeed);
            //transform.Translate(Vector2.up * Vert * vspeed);

            // Debug.Log(playerRb.velocity);

            //if ( playerRb.velocity.x < limit && playerRb.velocity.y < limit && playerRb.velocity.x > -limit && playerRb.velocity.y > -limit)
            //{
            if (!IsReel)
            {
                playerRb.AddForce(this.transform.up * Vert * 0.5f, ForceMode.Impulse);
                xVel = playerRb.velocity.x;
                yVel = playerRb.velocity.y;

                xVel = Mathf.Clamp(xVel, -limit, limit);
                yVel = Mathf.Clamp(yVel, -limit, limit);

                playerRb.velocity = new Vector2(xVel, yVel);
            }

            else
            {
                if (Vector3.Distance(this.transform.position, Reel.transform.position) < 5)
                {
                    playerRb.velocity = new Vector2(0, 0);
                }
            }
            //}

            if (Input.GetKey("k") && MoveAllowed)
            {
                IsReel = true;
                playerRb.AddForce((Reel.transform.position - transform.position) * ReelMultiplier);
                gameObject.GetComponent<BoxCollider>().enabled = false;
            }

            if(IsReel && JointBreak.Distance < 6)
            {
                gameObject.GetComponent<Pause>().Freeze(5);
            }




        }



    }
    IEnumerator BoostDelay()
    {
        gameObject.GetComponent<BoxCollider>().enabled = false;
        //Debug.Log(GlobalVariables.BoostMultiplier);
        boostText.text = "Boosting.";
        yield return new WaitForSeconds(1);
        boostText.text = "Boosting..";
        yield return new WaitForSeconds(1);
        boostText.text = "Boosting...";
        yield return new WaitForSeconds(1);

        IsReel = false;
        MoveAllowed = true;

        boostText.text = "";
        boostCheck = true;
        
        gameObject.GetComponent<BoxCollider>().enabled = true;
        yield return new WaitForSeconds(0.1f);
        bCheckNum++;
    }

  
}

