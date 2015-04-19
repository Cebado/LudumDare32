using UnityEngine;
using System.Collections;

public class ClickEffect : MonoBehaviour {

	public static ClickEffect instance;

	SpriteRenderer sr;
	public Sprite[] sprites;

	void Awake(){
		instance = this;
		sr = this.GetComponent<SpriteRenderer> ();
	}

	public void Click(Vector3 position){
		StopAllCoroutines ();
		position = Camera.main.ScreenToWorldPoint(position);
		position.z = -1f;
		this.transform.position = position;
		sr.enabled = true;
		StartCoroutine (DoClickEffect());
	}

	private IEnumerator DoClickEffect(){
		for (int i = 0; i < sprites.Length; i++) {
			sr.sprite = sprites[i];
			yield return new WaitForSeconds(0.07f);
		}
		sr.enabled = false;
	}

}
