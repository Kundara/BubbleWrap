using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Pump : MonoBehaviour {

	float alpha = 0f;
	Image image;
	public float pumpAmount = 0.1f;
	public float dropAmount = 0.1f;

	// Use this for initialization
	void Start () {
		image = GetComponent<Image>();
	}
	
	// Update is called once per frame
	void Update () {
		if (alpha > 0){
			alpha -= dropAmount * Time.deltaTime;
			if (alpha < 0){
				alpha = 0;
			} else {
				if (alpha > 1f)
					alpha = 1f;
			}
			image.color = new Color (image.color.r, image.color.g , image.color.b, alpha);

		}
	}

	public void Pumpit (int score){
		alpha += pumpAmount * score;
	}
}
