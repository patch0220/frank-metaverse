using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    Vector2 mouseLook; // Tracks movement of camera
    Vector2 smoothV; // Smooths out mouse movement
    public float sensitivity = 1.5f;
    public float smoothing = 2.0f;
    GameObject character;
	// Use this for initialization
	void Start () {
        character = transform.parent.gameObject;
	}

    // Update is called once per frame
    void Update()
    {
        if (character.GetComponent<CharacterController>().isPause == false && character.GetComponent<CharacterController>().isPuzzle == false)
        {
            var deltaMouseMovement = new Vector2(Input.GetAxisRaw("Mouse X"), Input.GetAxisRaw("Mouse Y"));

            deltaMouseMovement = Vector2.Scale(deltaMouseMovement, new Vector2(sensitivity * smoothing, sensitivity * smoothing));
            //Lerp is linear interpretation (lerp smooths movement rather than snapping to new position)
            smoothV.x = Mathf.Lerp(smoothV.x, deltaMouseMovement.x, 1f / smoothing);
            smoothV.y = Mathf.Lerp(smoothV.y, deltaMouseMovement.y, 1f / smoothing);
            //After we smooth the movement we add it to the mouse movement
            mouseLook += smoothV;
            //Limits how far the mouseLook can go
            mouseLook.y = Mathf.Clamp(mouseLook.y, -90, 90);

            //Applys rotations to the camera and character
            transform.localRotation = Quaternion.AngleAxis(-mouseLook.y, Vector3.right);
            character.transform.localRotation = Quaternion.AngleAxis(mouseLook.x, character.transform.up);
        } else
        {
            //Applys rotations to the camera and character
            transform.localRotation = Quaternion.AngleAxis(-mouseLook.y, Vector3.right);
            character.transform.localRotation = Quaternion.AngleAxis(mouseLook.x, character.transform.up);
        }
    }
}
