using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DeviceCamera : MonoBehaviour {
	public RawImage background;
	private WebCamTexture webCamTexture;
	private Quaternion baseRotation;
	// Use this for initialization
	void Start () {
		webCamTexture = new WebCamTexture (Screen.width, Screen.width);
		baseRotation = transform.rotation;
		webCamTexture.Play ();
		background.texture = webCamTexture;
	}
	
	// Update is called once per frame
	void Update () {
		transform.rotation = baseRotation * Quaternion.AngleAxis(webCamTexture.videoRotationAngle, Vector3.up);
	}
}
