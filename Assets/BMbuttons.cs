using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BMbuttons : MonoBehaviour
{
    public GameObject EndPanel;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Intro()
    {
        GlobalVariables.Money = 20;
        GlobalVariables.Tetherlevel = -1;
        GlobalVariables.Launchlevel = -1;
        GlobalVariables.Rocketlevel = -1;
        GlobalVariables.Oxylevel = -1;
        GlobalVariables.Junklevel = -1;
        GlobalVariables.Radarlevel = -1;
        GlobalVariables.Armourlevel = -1;
        GlobalVariables.Savelevel = -1;
        GlobalVariables.Lucklevel = -1;
        GlobalVariables.Goldlevel = -1;

    GlobalVariables.TetherLength = 50;
        GlobalVariables.BoostMultiplier = 2;
        GlobalVariables.FuelReserve = 15;
        GlobalVariables.OxygenReserve = 15f;
        GlobalVariables.stop = false;
        GlobalVariables.cameraPos = 0;
        GlobalVariables.ArmourChance = 0;
        GlobalVariables.Luck = 0f;

        GlobalVariables.SWMoney = 0;
        GlobalVariables.SJ2Count = 0;
        GlobalVariables.SJCount = 0;
        GlobalVariables.IRCount = 0;
        GlobalVariables.GOCount = 0;
        GlobalVariables.DICount = 0;
        GlobalVariables.rand = 0;
        SceneManager.LoadScene(1);
    }

    public void SGame()
    {
        SceneManager.LoadScene(3);
    }

    public void Shop()
    {
        SceneManager.LoadScene(2);
        EndPanel.SetActive(false);
        GlobalVariables.SWMoney = 0;
    }

    public void Restart()
    {
        SceneManager.LoadScene(3);
        EndPanel.SetActive(false);
        GlobalVariables.SWMoney = 0;
    }

    public void Quit()
    {
        Application.Quit();
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;

#endif
    }

}
