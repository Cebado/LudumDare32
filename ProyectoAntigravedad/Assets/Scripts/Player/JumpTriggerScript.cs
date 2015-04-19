using UnityEngine;
using System.Collections;

public class JumpTriggerScript : MonoBehaviour {

	public PlayerControls player;

	void OnTriggerEnter2D (Collider2D coll) {
		player.setJump (true);
	}
	

}
