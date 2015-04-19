using UnityEngine;
using System.Collections;

public class PushTriggerScript : MonoBehaviour {

	public PlayerControls player;
	
	void OnTriggerEnter2D (Collider2D coll) {
		player.setPush (true);
	}

	void OnTriggerExit2D (Collider2D coll) {
		player.setPush (false);
	}
}
