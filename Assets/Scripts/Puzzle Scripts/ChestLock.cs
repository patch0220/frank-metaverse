using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChestLock : MonoBehaviour {

    // Colours range from 0 - 6
    // 0 = red
    // 1 = orange
    // 2 = yellow
    // 3 = green
    // 4 = blue
    // 5 = purple
    // 6 = pink
    readonly int[] correctCode = { 3, 4, 0, 2 };
	public GameObject puzzleObject;
    public int[] currentCode = new int[4];
    public GameObject[] buttons = new GameObject[4];

	private bool isCorrect = false;

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		Debug.Log (puzzleObject.name);
	}

    public void buttonPressed(int buttonPos)
    {
        if (currentCode[buttonPos] < 6)
        {
            currentCode[buttonPos]++;
        }
        else
        {
            currentCode[buttonPos] = 0;
        }

        //Change the colour
        if (currentCode[buttonPos] == 0) // RED
        {
            buttons[buttonPos].GetComponent<Image>().color = new Color32(220, 20, 60, 255);
        }
        else if (currentCode[buttonPos] == 1) // ORANGE
        {
            buttons[buttonPos].GetComponent<Image>().color = new Color32(255, 165, 0, 255);
        }
        else if (currentCode[buttonPos] == 2) // YELLOW
        {
            buttons[buttonPos].GetComponent<Image>().color = new Color32(255, 255, 51, 255);

        }
        else if (currentCode[buttonPos] == 3) // GREEN
        {
            buttons[buttonPos].GetComponent<Image>().color = new Color32(152, 251, 152, 255);

        }
        else if (currentCode[buttonPos] == 4) // BLUE
        {
            buttons[buttonPos].GetComponent<Image>().color = new Color32(135, 206, 250, 255);
        }
        else if (currentCode[buttonPos] == 5) //Purple
        {
            buttons[buttonPos].GetComponent<Image>().color = new Color32(218, 112, 214, 255);

        }
        else if (currentCode[buttonPos] == 6) // Pink
        {
            buttons[buttonPos].GetComponent<Image>().color = new Color32(255, 182, 193, 255);
		}
		checkCode();

    }

	public void unlock() {
		if (isCorrect)
		{
			puzzleObject.GetComponent<Inspectable>().unlock();
			Destroy(gameObject);
		}
	}

	void checkCode() {
		for (int i = 0; i < currentCode.Length; i++) {
			if (currentCode [i] == correctCode [i]) {
				isCorrect = true;
			} else {
				isCorrect = false;
				break;
			}
		}
	}
		
}
