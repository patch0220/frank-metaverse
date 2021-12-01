using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PasswordLock : MonoBehaviour {


    // Password variables
    private readonly string correctPassword = "Escape231";
    private readonly string correctPin = "2615";
    public string password;
    public string pin;

    //Gameobject refrences
    public GameObject character;
    public GameObject passwordBox;
    public GameObject passwordInput;
    public GameObject pinInput;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void checkInput()
    {
        //Gets the text inside the input fields and assigns them to the respective variables
        password = passwordInput.GetComponent<InputField>().text;
        pin = pinInput.GetComponent<InputField>().text;

        if (password.Equals(correctPassword))
        {
            passwordBox.GetComponent<Inspectable>().openDoor();
            Cursor.lockState = CursorLockMode.Locked;
            character.GetComponent<CharacterController>().isPuzzle = false;
            Destroy(passwordBox.GetComponent<Inspectable>());
            passwordBox.tag = "Untagged";
            Destroy(gameObject);
        }
    }
}
