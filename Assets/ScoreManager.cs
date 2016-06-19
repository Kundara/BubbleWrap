using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using GS;

public class ScoreManager : MonoBehaviour {

	[Header("References")]
	public Text scoreText;
	public Text complimentText;
	public Slider superSlider;
	public Pump powerPumper;
	public Image[] backgrounds;

	[Header("Sounds")]
	public AudioClip[] complimentSounds;
	public AudioClip gameStartSound;
	public AudioClip superMode;
	public AudioClip superModeFinishSound;

	[Header("Configuration")]
	public int minScoreToCompliment;
	public int maxScoreToCompliment;
	public float complimentShowTimePerChar;
	FBManager fbManager;
	public Color backgroundColor;
	public Color backgroundSuperColor;

	[Header("Super")]
	public float superFillOnPop = 0.1f;
	public float superTime = 3.5f;
	public float superDropRate = 0.1f;

	float superAmount = 0f;
	public bool isSuperActive = false;
	float timeOfSuper;


	[Header("Compliments")]
	public string[] compliments;

	[HideInInspector]
	public int score;
	int nextComplimentMilestone;
	AudioSource audioSource;


	// Use this for initialization
	void Start () {
		score = PlayerPrefs.GetInt(ScoreTypes.highScore);
		if (score == null)
			score = 0;

		UpdateScoreUI();
		CalculateNextCompliment ();
		fbManager = FindObjectOfType<FBManager>();

		audioSource = GetComponent<AudioSource>();
		audioSource.clip = gameStartSound;
		audioSource.Play();
	}
	
	// Update is called once per frame
	void Update () {
		if (isSuperActive){
			// drop by time of super
			superAmount = (timeOfSuper - Time.time ) / superTime;
			if (superAmount <= 0.001f){
				StopSuper();
			}

			superSlider.value = superAmount;

		} else {
			// drop by drop rate, when not activated
			if (superAmount > 0f){
				superAmount -= (superDropRate + superAmount * 0.02f) * Time.deltaTime ;

				if (superAmount < 0f)
					superAmount = 0f;
				superSlider.value = superAmount;
			}
		}
	}

	void UpdateScoreUI () {
		scoreText.text = score.ToString();
	}

	public void IncreaseScore (int amount){
		score += amount;

		powerPumper.Pumpit(amount);
		UpdateScoreUI();

		if (!isSuperActive)
			AddToSuper();	

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

	void AddToSuper(){
		superAmount += superFillOnPop;
		if (superAmount >= 1f){
			// Activate super
			StartSuper();
		}
		superSlider.value = superAmount;
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

	void StartSuper(){
		timeOfSuper = Time.time + superTime;
		superAmount = 1f;
		isSuperActive = true;
		powerPumper.Pumpit(3);

		foreach (Image img in backgrounds){
			
			img.color = backgroundSuperColor;
		}
	}

	void StopSuper(){
		isSuperActive = false;
		superAmount = 0f;

		foreach (Image img in backgrounds){
			img.color = backgroundColor;
		}
	}

	class ScoreTypes {
		public const string highScore = "High Score";

	}
}
