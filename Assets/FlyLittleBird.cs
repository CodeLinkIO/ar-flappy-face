using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlyLittleBird : MonoBehaviour
{
    public float velocity = 1;
    private Rigidbody2D rb;
    FaceDetector faceDetector;
    public float lastY;
    private bool isLoaded = false;
    float norm = 0;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        faceDetector = (FaceDetector)FindObjectOfType(typeof(FaceDetector));
        Debug.Log(lastY);

    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(faceDetector.faceY);
        //if (Input.GetMouseButtonDown(0))
        //{
        //    rb.velocity = Vector2.up * velocity;  
        //}
        //float norm = Mathf.Clamp(faceDetector.faceY - lastY, -1, -1);
        float step = 5f * Time.deltaTime;
        if (isLoaded == false && faceDetector.faceY != 0)
        {
            lastY = faceDetector.faceY;
            isLoaded = true;
            norm = lastY/100;
        }
        else {
            transform.position = Vector3.MoveTowards(transform.position, new Vector3(0, 2*norm + 2* (lastY / 100 - faceDetector.faceY / 100), 0), step);
            lastY = transform.position.y;
        }
        //float norm = Mathf.Clamp(faceDetector.faceY - lastY, -1, -1);
        


    }
}
