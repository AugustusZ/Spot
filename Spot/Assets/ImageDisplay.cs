using UnityEngine;
using System.Collections;

public class ImageDisplay : MonoBehaviour {
	private GUIStyle labelStyle;
	private GameObject insImg;
	private float viewAngle;
	private bool prev;
	private int diffFromPrevCount;

	// Use this for initialization
	void Start () {
		Canvas canvasComponent = GameObject.Find("Canvas").GetComponent<Canvas>();
		GameObject img = Resources.Load<GameObject>("CustomImage");
		insImg = GameObject.Instantiate(img) as GameObject;
		insImg.transform.SetParent(canvasComponent.gameObject.transform, false);
		insImg.transform.position = new Vector3(Screen.width / 2, Screen.height / 2, 0);
		insImg.SetActive (false);

		labelStyle = new GUIStyle();
		labelStyle.fontSize = 40;
		labelStyle.normal.textColor = Color.yellow;

		prev = false;
		diffFromPrevCount = 0;
	}

	private bool showOrHideMap() {
		viewAngle = Input.acceleration.y * 90f;
		return Mathf.Abs (viewAngle) < 60;
	}

	// Update is called once per frame
	void Update () {
		if (prev != showOrHideMap ()) {
			diffFromPrevCount++;
			if (diffFromPrevCount > 12) {
				insImg.SetActive (showOrHideMap ());
				prev = showOrHideMap ();
				// showText(bool);
			}
		} else {
			diffFromPrevCount = 0;
		}
	}

	void OnGUI() {
		GUI.Label(new Rect(10, 10, 500, 500), "Angle: " + Mathf.CeilToInt(viewAngle).ToString() + "°", labelStyle);
	}
}