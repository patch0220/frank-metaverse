using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory : MonoBehaviour {
    
    public GameObject detailsPanel;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void selectItem(GameObject item)
    {
        Debug.Log("SELCTING ITEM");
        string itemName = item.GetComponent<Item>().title;
        Sprite itemSprite = item.GetComponent<Item>().detailSprite;
        detailsPanel.transform.GetChild(0).GetComponent<Text>().text = itemName;
        detailsPanel.transform.GetChild(1).GetComponent<Image>().sprite = itemSprite;
    }
}
