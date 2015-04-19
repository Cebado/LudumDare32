using UnityEngine;
using System.Collections;

public class GravityObjects : MonoBehaviour {

	Rigidbody2D rigidBody;
	// Use this for initialization
	void Awake () {
		rigidBody = this.transform.GetComponent<Rigidbody2D> ();
	}
	
	void OnMouseDown(){
		rigidBody.gravityScale *= -1;
		ClickEffect.instance.Click (Input.mousePosition);
	}
}
