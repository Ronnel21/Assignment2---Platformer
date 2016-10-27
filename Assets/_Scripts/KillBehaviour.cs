using UnityEngine;
using System.Collections;

public class KillBehaviour : MonoBehaviour {

	private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.CompareTag("DeathPlane"))
        {
            Destroy(this.gameObject);
        }
    }
}
