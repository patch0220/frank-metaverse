using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Slot : MonoBehaviour , ISelectHandler{

    private GameObject inventory;

	// Use this for initialization
	void Start () {
        inventory = transform.root.GetChild(0).gameObject;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void OnSelect(BaseEventData eventData)
    {
        inventory.GetComponent<Inventory>().selectItem(transform.GetChild(0).gameObject);
    }
}
