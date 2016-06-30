using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Vibrator : MonoBehaviour {

	Vector2 startPos;
	Vector3 vel = Vector3.zero;
	float smoothTime = 0.01f;
	public float powerMultiplier = 1.2f;
	RectTransform ourRect;

	// Use this for initialization
	void Start () {
		ourRect = GetComponent<RectTransform>();
		startPos = ourRect.anchoredPosition;
	}
	
	// Update is called once per frame
	void Update () {
		ourRect.anchoredPosition = Vector3.SmoothDamp(ourRect.anchoredPosition , startPos + Random.insideUnitCircle * powerMultiplier , ref vel , smoothTime);
	}
}
