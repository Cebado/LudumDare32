using UnityEngine;
using System.Collections;

public class HitHeadTriggerScript : MonoBehaviour {

	public PlayerControls player;
	
	void OnTriggerEnter2D (Collider2D coll) {
		if (coll.tag == "Box") {
			if(coll.GetComponent<Rigidbody2D>().velocity.y < 0f)
				player.PlayerDie();
		}
	}
}
