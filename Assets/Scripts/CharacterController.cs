using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterController : MonoBehaviour {


	// Character Variables
	private GameObject camera;
	public GameObject handPosition;
	public GameObject handItem;
    public float speed = 10.0f;
	public float pickUpRange = 5.0f;
    public bool isPause = false;
    public bool isPuzzle = false;


    // Inventory Components
	public List<int> inventory;
    public GameObject inventoryPanel;
    public GameObject slotPanel;
    public GameObject slotObject;
    public GameObject itemObject;

    // Game Variables
	public GameObject pausePanel;

	// Use this for initialization
	void Start () {
		camera = transform.GetChild(0).gameObject;
        Cursor.lockState = CursorLockMode.Locked;
	}
	
	// Update is called once per frame
	void Update () {
		input ();
        if (!isPause && !isPuzzle)
        {
            //Gets values to make a direction vector
            float translation = Input.GetAxis("Horizontal") * speed;
            float strafe = Input.GetAxis("Vertical") * speed;
            //Time.delta time is the time b/w frames. Time b/w frames depends on computer so this makes movement smooth.
            translation *= Time.deltaTime;
            strafe *= Time.deltaTime;

            //Creates the direction vector and applys it to the player's transform
            Vector3 directionVector = new Vector3(translation, 0, strafe);
            transform.Translate(directionVector);
        }
		
	}

	public void input() {

        if (!isPuzzle)
        {
            if (Input.GetKeyDown("i"))
            {
				togglePanel (inventoryPanel);
            }

			if (Input.GetKeyDown("escape")) {
				togglePanel (pausePanel);
			}
        }

        if (!isPause && !isPuzzle)
        {
            if (Input.GetMouseButtonDown(0))
            {
                RaycastHit hit;
                Debug.DrawLine(camera.transform.position, camera.transform.forward * pickUpRange, Color.green, 5.0f, false);
                if (Physics.Raycast(camera.transform.position, camera.transform.forward, out hit, pickUpRange))
                {
                    GameObject tempObject = hit.transform.gameObject;
                    if (hit.transform.tag == "Pickup")
                    {
                        Debug.Log("Trying to pickup item");
                        pickupItem(tempObject);
                    }

                    if (hit.transform.tag == "Inspectable")
                    {
                        tempObject.GetComponent<Inspectable>().togglePuzzle();
                        isPuzzle = true;
                    }

                    if (hit.transform.tag == "Locked")
                    {
                        tempObject.GetComponent<LockedObject>().unlock();
                    }

                    if (hit.transform.name == "lamp")
                    {
                        GameObject light = tempObject.transform.GetChild(4).gameObject;
                        light.SetActive(!light.activeSelf);
                    }
                }
            }
        }
	}
 
	public void togglePanel(GameObject panel) {
		if (isPause)
		{
			panel.SetActive(false);
			Time.timeScale = 1;
			Cursor.lockState = CursorLockMode.Locked;
		}
		else
		{
			panel.SetActive(true);
			Time.timeScale = 0;
			Cursor.lockState = CursorLockMode.None;
		}
		isPause = !isPause;
	}

    // Picking up items
    void pickupItem(GameObject tempObject)
    {
        // Creates temp variable to store the item data
        Item tempItem = tempObject.GetComponent<Item>();
        string title = tempItem.title;
        int id = tempItem.id;
        Sprite inventorySprite = tempItem.inventorySprite;
        Sprite detailSprite = tempItem.detailSprite;

        // Creates a new spot in the inventory
        GameObject slot = Instantiate(slotObject, slotPanel.transform);
        GameObject item = Instantiate(itemObject, slot.transform);
        // Uses the data from the item we click to add to the actual inventory
        item.GetComponent<Item>().addToInventory(title, id, inventorySprite, detailSprite);

		if (tempObject.name == "Flashlight") {
			Instantiate (handItem, handPosition.transform);
			Debug.Log ("Equiping Flashlight");
		}
		inventory.Add (id);
        //Removes the object from the world after everything is done
        Destroy(tempObject);
    }

    public void exitGame()
    {
        Application.Quit();
    }
}
