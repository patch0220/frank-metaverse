using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LockedObject : MonoBehaviour {

	public GameObject player;
	public GameObject unlockedObject;
	private List<int> inventory;
	public int keyID;

	// Use this for initialization
	void Start () {
		this.inventory = player.GetComponent<CharacterController> ().inventory;
	}
	
	// Update is called once per frame
	void Update () {
		
			
	}

	public void unlock() {
		Debug.Log ("Trying to unlock");
		foreach (int id in inventory) {
			if (id == keyID) {
				Instantiate (unlockedObject, transform.position, transform.rotation);
                if (name == "passwordBox")
                {
                    GetComponent<Inspectable>().enabled = true;
                    Destroy(transform.GetChild(1).gameObject);
                    Destroy(this);
                    gameObject.tag = "Inspectable";
                    break;
                } else
                {
                    Destroy(gameObject);
                    break;
                }
            }
		}
	}
}
