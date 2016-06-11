using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Linq;

public class BubbleGrid : MonoBehaviour {

	[Header("References")]
	public GameObject bubbleA;
	public RectTransform bubblesVisibleArea;
	GameObject grid;

	public int maxInLine = 7;
	public int rowsToRender = 10;

	Rect gridRect;
	Rect visibleAreaRect;
	GameObject lastItem;

	Bubble[] bubbles = new Bubble[0];
	RectTransform gridRectTransform;

	float bubbleSize;
	bool isOdd = false;
	Vector2 startOfGrid;

	int currentRow = 0;
	int firstRow = 0;
	int itemIndex = 0;
	float rowItemOffset;
	Vector3 gridNewPosition;
	Vector3 vel = Vector3.zero;
	public float scrollTime = 0.4f;
	bool isInitialized = false;
	public float fadeOutTime = 20f;

	// Use this for initialization
	void Start () {
		grid = this.gameObject;
		GenerateGrid();
		isInitialized = true;
		bubbles.Initialize();

	}


	void GenerateGrid (){
		gridRectTransform = GetComponent<RectTransform>();
		gridRect = gridRectTransform.rect;
		gridNewPosition = gridRectTransform.anchoredPosition;

		visibleAreaRect = bubblesVisibleArea.rect;
		bubbleSize = gridRect.width / maxInLine;
		startOfGrid = new Vector2 (gridRect.xMin , gridRect.yMax);

		FillGrid ();
	}


	void FillGrid (){
		for (int j = 0 ; j < rowsToRender ; j++) {
			CreateRow();
		}
		firstRow = 0;
	}


	void CreateRow(){
		int itemsInLine;

		if (isOdd){
			itemsInLine = maxInLine -1;
			isOdd = false;
			rowItemOffset = bubbleSize / 2;
		} else {
			itemsInLine = maxInLine;
			isOdd = true;
			rowItemOffset = 0f;
		}	

		for (int i = 0 ; i < itemsInLine ; i++) {
			CreateBubble(i);
		}
			
		currentRow++;
	}


	void CreateBubble (int i) {
		GameObject newbubble = GameObject.Instantiate (bubbleA , transform.position , Quaternion.identity) as GameObject;
		RectTransform bubbleRectT = newbubble.GetComponent<RectTransform>();
		bubbleRectT.sizeDelta = new Vector2( bubbleSize, bubbleSize);
		bubbleRectT.transform.SetParent(this.gameObject.transform , false);
		newbubble.GetComponent<Bubble>().row = currentRow;
		newbubble.GetComponent<Bubble>().fadeOutTime = fadeOutTime;
		Vector2 itemPosition = new Vector2 ( rowItemOffset +  bubbleSize / 2 + (i) * bubbleSize , - (bubbleSize / 2 + (currentRow * bubbleSize) ) * 0.88f );

		bubbleRectT.localPosition = startOfGrid + itemPosition;

		System.Array.Resize(ref bubbles, bubbles.Length+1);
		bubbles[itemIndex] = newbubble.GetComponent<Bubble>();

		itemIndex++;
	}

	// Update is called once per frame
	void Update () {
		//GenerateGrid();
		if (isInitialized){
			gridRectTransform.anchoredPosition = Vector3.SmoothDamp(gridRectTransform.anchoredPosition , gridNewPosition , ref vel , scrollTime);

		}


	}


	public void CheckPopped(){
		// get all bubbles on first row
		var bubblesOnFirstRow = bubbles.Where (b => b.row == firstRow);
		foreach (Bubble b in bubblesOnFirstRow){
			if (!b.isPopped)
				return;
		}

		foreach (Bubble b in bubblesOnFirstRow){
			b.Kill(fadeOutTime);

		}
		firstRow++;

		Scroll();

		CreateRow();
		CheckPopped();
	}


	void Scroll (){
		gridNewPosition = new Vector3 (gridNewPosition.x  , gridNewPosition.y + bubbleSize * 0.88f , gridRectTransform.position.z);
	}


	void ClearRow(int clearRow){
		
	}
}
