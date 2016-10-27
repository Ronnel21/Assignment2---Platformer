using UnityEngine;
using System.Collections;

public class CheckPointController : MonoBehaviour {

    //Private Instance
    private Transform _transform;

    //Public Instance
    public GameObject SpawnPoint;

	// Use this for initialization
	void Start () {
        this._transform = GetComponent<Transform>();
        this.SpawnPoint = GameObject.FindWithTag("SpawnPoint");
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            this.SpawnPoint.transform.position = this.transform.position;
        }

    }
}
