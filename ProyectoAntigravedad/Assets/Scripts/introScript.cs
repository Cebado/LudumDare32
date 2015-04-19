using UnityEngine;
using System.Collections;

public class introScript : MonoBehaviour {

	public bool startGame = false;
	public bool goToBeggining = false;

	public GameObject next;

	void OnMouseDown(){
		if (startGame)
			Application.LoadLevel ("GameScene");
		else if (goToBeggining)
			Application.LoadLevel ("Intro");
		else
			this.gameObject.SetActive (false);
		if(next != null)
			next.SetActive (true);
	}
}
