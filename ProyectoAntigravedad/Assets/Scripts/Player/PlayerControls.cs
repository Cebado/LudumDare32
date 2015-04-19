using UnityEngine;
using System.Collections;

public class PlayerControls : MonoBehaviour {


	private bool alive = true;

	public float horizontalSpeed = 5f;
	public float moveForce = 2f;
	public float jumpForce = 500f;

	CameraScript cameraS;
	Rigidbody2D rigidBody;

	public bool push = false;
	public bool canJump = false;
	public bool jumpButtonReleased = true;
	private bool directionRight = false;


	Animator anim;
	public GameObject view;

	public enum PLAYER_STATE {IDLE = 0, RUNNING = 1, JUMPING = 2, PUSHING = 3}
	public PLAYER_STATE playerState = PLAYER_STATE.IDLE;

	public SpriteRenderer cero, uno, dos;
	private int diamantes = 0;

	public AudioClip clipJump;
	public AudioClip clipHit;
	public AudioClip clipDie;
	public AudioClip clipCoin;

	AudioSource audioS;

	// Use this for initialization
	void Awake () {
		cameraS = Camera.main.GetComponent<CameraScript> ();
		rigidBody = this.transform.GetComponent<Rigidbody2D> ();
		anim = view.transform.GetComponent<Animator> ();
		audioS = this.GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		if (alive) {
			checkControls();
		}
	}

	public void setJump(bool _jump){
		canJump = _jump;
	}

	public void setPush(bool _push){
		push = _push;
	}

	public void PlayerDie(){
		alive = false;
		this.GetComponent<BoxCollider2D> ().enabled = false;
		rigidBody.velocity = Vector2.zero;
		rigidBody.gravityScale = 3f;
		rigidBody.AddForce (Vector2.up * jumpForce * 2);
		cameraS.alive = false;

		StartCoroutine (Restart ());
		audioS.clip = clipDie;
		audioS.Play();
	}

	IEnumerator Restart(){
		yield return new WaitForSeconds (2f);
		Application.LoadLevel ("GameScene");
	}

	void checkControls () {
		if ((Input.GetKey (KeyCode.D) || Input.GetKey (KeyCode.RightArrow)) && !Input.GetKey (KeyCode.A) && !Input.GetKey (KeyCode.LeftArrow)) {
			if(push && playerState != PLAYER_STATE.PUSHING && directionRight){
				anim.SetTrigger("Push");
				playerState = PLAYER_STATE.PUSHING;
			}
			else if(playerState != PLAYER_STATE.RUNNING && !push){
				anim.SetTrigger("Run");
				playerState = PLAYER_STATE.RUNNING;
			}
			this.transform.localScale = Vector3.one;
			rigidBody.AddForce (Vector2.right * moveForce * Time.fixedDeltaTime);
			cameraS.lookRight = true;
			directionRight = true;
		} else if (Input.GetKey (KeyCode.A) || Input.GetKey (KeyCode.LeftArrow)) {
			if(push && playerState != PLAYER_STATE.PUSHING && !directionRight){
				anim.SetTrigger("Push");
				playerState = PLAYER_STATE.PUSHING;
			}
			else if(playerState != PLAYER_STATE.RUNNING && !push){
				anim.SetTrigger("Run");
				playerState = PLAYER_STATE.RUNNING;
			}
			Vector3 localScale = Vector3.one;
			localScale.x = -1f;
			this.transform.localScale = localScale;
			rigidBody.AddForce (Vector2.right * (-1f) * moveForce * Time.fixedDeltaTime);
			cameraS.lookRight = false;
			directionRight = false;
		}

		if (canJump && jumpButtonReleased) {
			if (Input.GetKey (KeyCode.W) || Input.GetKey (KeyCode.UpArrow)) {
				canJump = false;
				jumpButtonReleased = false;
				rigidBody.AddForce (Vector2.up * jumpForce);
				playerState = PLAYER_STATE.JUMPING;
				audioS.clip = clipJump;
				audioS.Play();
			} 
		}
		
		Vector3 velocity = rigidBody.velocity;

		if (velocity.x >= horizontalSpeed)
			velocity.x = horizontalSpeed;
		if (velocity.x <= -horizontalSpeed)
			velocity.x = -horizontalSpeed;
		
		rigidBody.velocity = velocity;

		if (!Input.GetKey (KeyCode.W) && !Input.GetKey (KeyCode.UpArrow)) {
			jumpButtonReleased = true;
		} 

		if (!Input.GetKey (KeyCode.W) && !Input.GetKey (KeyCode.UpArrow)
		    && !Input.GetKey (KeyCode.A) && !Input.GetKey (KeyCode.LeftArrow)
		    && !Input.GetKey (KeyCode.D) && !Input.GetKey (KeyCode.RightArrow)
		    && playerState != PLAYER_STATE.IDLE) {
			anim.SetTrigger("Idle");
			playerState = PLAYER_STATE.IDLE;
		} 

		if (Input.GetKey (KeyCode.R))
			Application.LoadLevel ("GameScene");
		 
	}

	void OnTriggerEnter2D (Collider2D coll) {
		if (alive && coll.tag == "Pinchos") {
			PlayerDie();
		}

		if (alive && coll.tag == "Diamante") {
			coll.gameObject.SetActive(false);
			diamantes++;
			audioS.clip = clipCoin;
			audioS.Play();
			if(diamantes == 1){
				cero.enabled = false;
				uno.enabled = true;
			}
			if(diamantes == 2){
				uno.enabled = false;
				dos.enabled = true;
			}
		}

		if (alive && coll.tag == "Exit") {
			Application.LoadLevel ("End");
		}
	}

	void OnColliderEnter2D (Collider2D coll) {
		if (alive && coll.tag == "Pinchos") {
			PlayerDie ();
		} else {
			audioS.clip = clipHit;
			audioS.Play();
		}
	}
}
