using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using GS;
using UnityEngine.Analytics;
using System.Collections.Generic;

public class ScoreManager : MonoBehaviour {

	[Header("References")]
	public Text scoreText;
	public Text complimentText;
	public Slider superSlider;
	public Pump powerPumper;
	public Image[] backgrounds;
	public GameObject swipeInstruction;
	public Animator animator;

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

	public float showAdEvery = 5f;
	float timeOfAd;

	[Header("Super")]
	public float superFillOnPop = 0.1f;
	public float superTime = 3.5f;
	public float superDropRate = 0.1f;

	float superAmount = 0f;
	public bool isSuperActive = false;
	float timeOfSuper;
	public ParticleSystem part;

	[Header("Compliments")]
	public string[] compliments;
	public string[] rareCompliments;

	[HideInInspector]
	public int score;
	int nextComplimentMilestone;
	AudioSource audioSource;

	float lastPop;
	string lastCompliment;
	bool started = false;

	// Use this for initialization
	void Start () {
		score = PlayerPrefs.GetInt(ScoreTypes.highScore);

		UpdateScoreUI();
		CalculateNextCompliment ();
		fbManager = FindObjectOfType<FBManager>();

		audioSource = GetComponent<AudioSource>();


		timeOfAd = Time.time + showAdEvery;
		lastPop = 0f;

	}

	void VisualStart (){
		audioSource.clip = gameStartSound;
		audioSource.Play();

		animator.SetTrigger("start");
	}

	// Update is called once per frame
	void Update () {

		if (!Application.isShowingSplashScreen && started == false){
			VisualStart();
			started = true;
		}

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

		if (Time.time > timeOfAd && Time.time > lastPop + 5f){
			AdPoster.ShowAd();
			timeOfAd = Time.time + showAdEvery;
		}
	}

	void UpdateScoreUI () {
		scoreText.text = score.ToString();
	}

	public void IncreaseScore (int amount){
		
		lastPop = Time.time;
		score += amount;

		powerPumper.Pumpit(amount);
		UpdateScoreUI();

		if (!isSuperActive){
			AddToSuper();	
		} else {
			part.Emit(1);	
		}
			
		if (score >= nextComplimentMilestone && !isSuperActive){
			PublishCompliment ();
			CalculateNextCompliment ();
		}
		PlayerPrefs.SetInt(ScoreTypes.highScore , score);
		fbManager.PostScore(score);

		Analytics.CustomEvent(EventTypes.gameplay, new Dictionary<string, object>
			{
				{ EventTypes.pop, 1 },
				{ EventTypes.score, score },
			});
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
		int chance = (int)Random.Range(1,20);
		string compliment;
		if (chance == 1){
		  	compliment = rareCompliments[Random.Range(0 , rareCompliments.Length)];
		} else {
			compliment = compliments[Random.Range(0 , compliments.Length)];
		}
		if (compliment == lastCompliment){
			PublishCompliment ();
			return;
		}

		complimentText.text = compliment;
		float timeOfHide = Mathf.Min (complimentShowTimePerChar * compliment.Length , 3f) ;
		StartCoroutine (HideCompliment (timeOfHide));

		audioSource.clip = complimentSounds[(int)Random.Range(0,complimentSounds.Length)];
		audioSource.Play();

		lastCompliment = compliment;
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
		audioSource.clip = superMode;
		audioSource.Play();

		swipeInstruction.SetActive(true);

		Analytics.CustomEvent(EventTypes.gameplay, new Dictionary<string, object>
			{
				{ EventTypes.super, 1 },
			});
	}

	void StopSuper(){
		audioSource.clip = superModeFinishSound;
		audioSource.Play();

		isSuperActive = false;
		superAmount = 0f;

		foreach (Image img in backgrounds){
			img.color = backgroundColor;
		}
		swipeInstruction.SetActive(false);
	}

	class ScoreTypes {
		public const string highScore = "High Score";

	}

	class EventTypes {
		public const string gameplay = "Gameplay";
		public const string pop = "Pop";
		public const string score = "Score";
		public const string super = "Super";
		public const string fb = "Facebook";
		public const string fbConnected = "FacebookConnect";

	}
}
