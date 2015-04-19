using UnityEngine;
using System.Collections;

public class DontDestroyScript : MonoBehaviour {

	public static DontDestroyScript instance;
	
	void Awake() {
		if(instance)
			DestroyImmediate(gameObject);
		else {
			DontDestroyOnLoad(gameObject);
			instance = this;
		}
	}

}
