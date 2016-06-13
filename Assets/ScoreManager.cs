using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using GS;

public class ScoreManager : MonoBehaviour {

	[Header("References")]
	public Text scoreText;
	public Text complimentText;

	[Header("Compliments")]
	public string[] compliments;

	[HideInInspector]
	public int score;
	int nextComplimentMilestone;

	[Header("Configuration")]
	public int minScoreToCompliment;
	public int maxScoreToCompliment;
	public float complimentShowTimePerChar;
	FBManager fbManager;

	// Use this for initialization
	void Start () {
		score = PlayerPrefs.GetInt(ScoreTypes.highScore);
		if (score == null)
			score = 0;

		UpdateScoreUI();
		CalculateNextCompliment ();
		fbManager = FindObjectOfType<FBManager>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void UpdateScoreUI () {
		scoreText.text = score.ToString();
	}

	public void IncreaseScore (int amount){
		score += amount;
		UpdateScoreUI();

		if (score == nextComplimentMilestone){
			PublishCompliment ();
			CalculateNextCompliment ();
		}
		PlayerPrefs.SetInt(ScoreTypes.highScore , score);
		fbManager.PostScore(score);
	}

	void CalculateNextCompliment () {
		nextComplimentMilestone = score + (int)Random.Range(minScoreToCompliment,maxScoreToCompliment);
	}

	void PublishCompliment () {
		string compliment = compliments[Random.Range(0 , compliments.Length)];
		complimentText.text = compliment;
		float timeOfHide = Mathf.Min (complimentShowTimePerChar * compliment.Length , 3f) ;
		StartCoroutine (HideCompliment (timeOfHide));
	}

	IEnumerator HideCompliment (float time) {
		yield return new WaitForSeconds (time + 0.3f);
		complimentText.text = "";


	}

	class ScoreTypes {
		public const string highScore = "High Score";

	}
}
