using UnityEngine;
using System.Collections;

public class PlatformFall : MonoBehaviour {

    //Private Instance
    private Rigidbody2D rb2d;

    //Public Instance
    public float fallDelay = 1f;

	// Use this for initialization
	void Awake () {
        rb2d = GetComponent<Rigidbody2D>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    private void onCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Invoke("Fall", fallDelay);
        }
    }

    private void Fall()
    {
        rb2d.isKinematic = false;
    }
}
