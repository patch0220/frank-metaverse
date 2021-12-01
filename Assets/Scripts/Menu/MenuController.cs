using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour {

    public GameObject mainMenuPanel;
    public GameObject controlPanel;

    public void clickPlay()
    {
        //Switch to room scene
        SceneManager.LoadScene(1);
    }

    public void clickControls()
    {
        //Deactivate the main menu panel, activate control panel
        mainMenuPanel.SetActive(false);
        controlPanel.SetActive(true);

    }

    public void clickBack()
    {
        //Deactivate control panel, activate menu
        controlPanel.SetActive(false);
        mainMenuPanel.SetActive(true);
    }

    public void clickExit()
    {
        //Exit the game
        Application.Quit();
    }
}
