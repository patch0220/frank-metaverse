using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BriefcaseLock : MonoBehaviour {

    public GameObject puzzleObject;
    public GameObject[] lockSlots = new GameObject[4];
    public int[] correctCode = { 3, 2, 9, 5 };
    private int[] currentCode = new int[4];
    private bool isCorrect = false;


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void increaseNum(int slotPosition) {
        if (currentCode[slotPosition] < 9)
        {
            currentCode[slotPosition]++;
            lockSlots[slotPosition].GetComponent<Text>().text = currentCode[slotPosition].ToString();
        } else
        {
            currentCode[slotPosition] = 0;
            lockSlots[slotPosition].GetComponent<Text>().text = currentCode[slotPosition].ToString();
        }
        checkCode();
	}

    public void decreaseNum(int slotPosition)
    {
        if (currentCode[slotPosition] > 0)
        {
            currentCode[slotPosition]--;
            lockSlots[slotPosition].GetComponent<Text>().text = currentCode[slotPosition].ToString();
        }
        else
        {
            currentCode[slotPosition] = 9;
            lockSlots[slotPosition].GetComponent<Text>().text = currentCode[slotPosition].ToString();
        }
        checkCode();
    }

    void checkCode()
    {
        for (int i = 0; i < correctCode.Length; i++)
        {
            if (currentCode[i] == correctCode[i])
            {
                isCorrect = true;
            } else
            {
                isCorrect = false;
                break;
            }
        }
    }

    public void unlock()
    {
        if (isCorrect)
        {
            puzzleObject.GetComponent<Inspectable>().unlock();
            Destroy(gameObject);
        }
    }
}
