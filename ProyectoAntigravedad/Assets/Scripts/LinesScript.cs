using UnityEngine;
using System.Collections;

public class LinesScript : MonoBehaviour {

	public Sprite[] sprites;
	private SpriteRenderer sp;

	public float min = 0.15f;
	public float max = 0.4f;

	public bool change {get; set;}

	void Awake(){
		change = true;
		sp = this.GetComponent<SpriteRenderer> ();
		StartCoroutine (ChangeSprite ());
	}

	IEnumerator ChangeSprite(){
		while (change) {
			sp.sprite = sprites[Random.Range(0, sprites.Length)];
			yield return new WaitForSeconds(Random.Range(min, max));
		}
	}
}
