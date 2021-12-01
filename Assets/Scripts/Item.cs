using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Item : MonoBehaviour {

    public string title;
    public int id;
    public Sprite inventorySprite;
    public Sprite detailSprite;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    //When we pick up item and have to add to invenvtory this helps keep data of item
    public void addToInventory(string title, int id, Sprite inventorySprite, Sprite detailSprite)
    {
        this.title = title;
        this.id = id;
        this.inventorySprite = inventorySprite;
        this.detailSprite = detailSprite;
        transform.GetComponent<Image>().sprite = inventorySprite;
    }
}
