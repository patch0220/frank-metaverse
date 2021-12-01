using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inspectable : MonoBehaviour {

    public GameObject character;
	public GameObject solvedObject;
	public GameObject puzzleUI;
    public GameObject door;
    public GameObject doorOpen;

	void Start() {

	}

	void Update() {
			if (Input.GetKeyDown (KeyCode.Space) && character.GetComponent<CharacterController> ().isPuzzle) {
				if (puzzleUI.activeSelf) {
					togglePuzzle ();
				}
			}
	}

	public void togglePuzzle() {
		puzzleUI.SetActive (!puzzleUI.activeSelf);
        //If the puzzle is active
        //Deactivate character scripts
		if (puzzleUI.activeSelf) {
			Debug.Log ("OPENING PUZZLE");
            Cursor.lockState = CursorLockMode.None;
            character.GetComponent<CharacterController>().isPuzzle = true;
		} else {
			Debug.Log ("CLOSING PUZZLE");
            Cursor.lockState = CursorLockMode.Locked;
            character.GetComponent<CharacterController>().isPuzzle = false;
        }
	}

    public void unlock()
    {
		Instantiate(solvedObject, transform.position, transform.rotation);
		Cursor.lockState = CursorLockMode.Locked;
        character.GetComponent<CharacterController>().isPuzzle = false;
        Destroy(gameObject);
    }

    public void openDoor()
    {
        //Needed to manually assign position vector of new door because of the different rotation
        var doorPos = door.transform.position;
        doorPos.x = -7.82f;
        doorPos.y = 0.28f;
        doorPos.z = 1.67f;
        Instantiate(doorOpen, doorPos, doorOpen.transform.rotation);
        Cursor.lockState = CursorLockMode.Locked;
        character.GetComponent<CharacterController>().isPuzzle = false;
        Destroy(door);
    }

}
