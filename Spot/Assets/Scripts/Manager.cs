using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Net;
using System.IO;
using System;
using System.Collections.Generic;
using System.Text;

public class Manager : MonoBehaviour
{
	private string mapName = "esri-map"; // a image file in Resoureces folder
	private Texture map;

	private List<Feature> featureList;
    private Dictionary<int, List<float>> features;
    private Dictionary<int, string> descriptions;

	private LocationInfo locationInfo;
    private float viewAngle;
	private GameObject mapImage;
	private Canvas canvas;
	private GameObject labels;


	void Awake() 
	{
		featureList = new List<Feature> ();
		canvas = GameObject.Find("Canvas").GetComponent<Canvas>();
		labels = GameObject.Find ("Labels");
		map = Resources.Load (mapName) as Texture;
		
		Setup ();
	}

    void Start()
    {
//		PrepareMap ();
        StartCoroutine(DownloadSpheres());
	}

	void Update()
	{
		// Face-up displays map
		if (DeviceOrientation.FaceUp != Input.deviceOrientation) {
////			DisplayMap (true);
////			CreateMap();
//		} else {
////			DisplayMap (false);
			DisplayText ();
		}
	}
		
	void OnGUI() {
		if (DeviceOrientation.FaceUp == Input.deviceOrientation) {
			if (!map) {
				Debug.LogError ("Assign a Texture in the inspector.");
				return;
			}
			GUI.DrawTexture (new Rect (0, 0, Screen.width, Screen.height), map, ScaleMode.ScaleToFit, true);
		}
	}

    void DisplayText() {

        CleanUpLabels ();

        locationInfo = Input.location.lastData;
		float userLatitude = locationInfo.latitude; //34.056758320140425f; 
		float userLongitude = locationInfo.longitude; //-117.19532859973505f;
		userLatitude = 34.056758320140425f; 
		userLongitude = -117.19532859973505f;

		if (featureList.Count == 0) {
			return;
		}

		foreach (Feature feature in featureList) {
			Debug.Log (feature.building);
		}

		foreach (Feature feature in featureList) {
			float bearing = GetBearingAngle(userLatitude, userLongitude, feature.lat, feature.lon);
			float distance = GetDistanceInBetweenInMeter(userLatitude, userLongitude, feature.lat, feature.lon);
			bool suc = false;
			float offsetFromCenterOnScreen = GetOffsetFromCenter(bearing, Input.compass.trueHeading, ref suc);
			if (suc == true)
			{
				Debug.Log("Generating label...");
				GameObject myText = Resources.Load<GameObject>("CustomText");
				GameObject insText = GameObject.Instantiate(myText) as GameObject;
				insText.transform.SetParent(labels.transform, false);
				insText.transform.position = new Vector3((0.5f * Screen.width + offsetFromCenterOnScreen), (0.5f * Screen.height), 0);

				Text label = insText.GetComponent<Text>();
				distance = (float)(Math.Truncate((double)distance * 100.0) / 100.0);
				distance = (float)(Math.Round((double)distance, 2));
				label.text = feature.building + "\n" + feature.description + "\n" + distance.ToString() + " m";
				label.fontSize = GetFontSizeFromDistance(distance);
			}
		}

//		foreach (KeyValuePair<int, List<float>> pair in features) {
//			int id = pair.Key;
//
//	        string building = pair.Key;
//	        List<float> coord = pair.Value;
//
//			float bearing = GetBearingAngle(userLatitude, userLongitude, coord[1], coord[0]);
//	        float distance = GetDistanceInBetweenInMeter(userLatitude, userLongitude, coord[1], coord[0]);
//	        bool suc = false;
//	        float offsetFromCenterOnScreen = GetOffsetFromCenter(bearing, Input.compass.trueHeading, ref suc);
//	        if (suc == true)
//            {
//                GameObject myText = Resources.Load<GameObject>("CustomText");
//                GameObject insText = GameObject.Instantiate(myText) as GameObject;
//				insText.transform.SetParent(labels.transform, false);
//                insText.transform.position = new Vector3((0.5f * Screen.width + offsetFromCenterOnScreen), (0.5f * Screen.height), 0);
//                Text label = insText.GetComponent<Text>();
//				string descriptionText = descriptions[pair.Key];
//                distance = (float)(Math.Truncate((double)distance * 100.0) / 100.0);
//                distance = (float)(Math.Round((double)distance, 2));
//				label.text = building + "\n" + descriptionText + "\n" + distance.ToString() + " m";
//                label.fontSize = GetFontSizeFromDistance(distance);
//            }
//        }
    }

	// Setup device sensors 
	private void Setup() 
	{
		// compass
		Input.compass.enabled = true;

		// GPS
		Input.location.Start();
	}

	void CreateMap(){
		CleanUpLabels ();
		GameObject img = Resources.Load<GameObject>(mapName);
		mapImage = GameObject.Instantiate(img) as GameObject;
		mapImage.transform.SetParent(canvas.gameObject.transform, false);
		mapImage.transform.position = new Vector3(Screen.width / 2, Screen.height / 2, 0);
		mapImage.SetActive (true);
	}

	private void PrepareMap() 
	{
		map = Resources.Load (mapName) as Texture;
		// mapImage = GameObject.Instantiate(img) as GameObject;

//		mapImage.transform.SetParent(GameObject.Find("Canvas").transform, false);
//		mapImage.transform.position = new Vector3(Screen.width / 2, Screen.height / 2, 0);
	}

	//========================= HELPERS ===========================

	/// <summary>
	/// Gets the bearing angle of two pairs of coordinates (lat & lon) in degree.
	/// </summary>
	/// <returns>The bearing angle.</returns>
	/// <param name="lat1">Lat1.</param>
	/// <param name="lon1">Lon1.</param>
	/// <param name="lat2">Lat2.</param>
	/// <param name="lon2">Lon2.</param>
	private float GetBearingAngle(float lat1, float lon1, float lat2, float lon2)
	{
		float y = Mathf.Sin(lon2 * Mathf.Deg2Rad - lon1 * Mathf.Deg2Rad) * Mathf.Cos(lat2 * Mathf.Deg2Rad);
		float x = Mathf.Cos(lat1 * Mathf.Deg2Rad) * Mathf.Sin(lat2 * Mathf.Deg2Rad) - Mathf.Sin(lat1 * Mathf.Deg2Rad) * Mathf.Cos(lat2 * Mathf.Deg2Rad) * Mathf.Cos(lon2 * Mathf.Deg2Rad - lon1 * Mathf.Deg2Rad);
		return Mathf.Atan2(y, x) * Mathf.Rad2Deg;
	}

	/// <summary>
	/// Gets the distance between the two pairs of coordinates (lat & lon) in meter.
	/// </summary>
	/// <returns>The distance in between in meter.</returns>
	/// <param name="lat1">Lat1.</param>
	/// <param name="lon1">Lon1.</param>
	/// <param name="lat2">Lat2.</param>
	/// <param name="lon2">Lon2.</param>
	private float GetDistanceInBetweenInMeter(float lat1, float lon1, float lat2, float lon2)
	{
		float R = 6371000f; // metres, radius of the earth
		float dLat = (lat2 - lat1) * Mathf.Deg2Rad;
		float dLon = (lon2 - lon1) * Mathf.Deg2Rad;
		float a = Mathf.Sin(dLat / 2) * Mathf.Sin(dLat / 2) +
			Mathf.Cos(lat1 * Mathf.Deg2Rad) * Mathf.Cos(lat1 * Mathf.Deg2Rad) *
			Mathf.Sin(dLon / 2) * Mathf.Sin(dLon / 2);
		float c = 2 * Mathf.Atan2(Mathf.Sqrt(a), Mathf.Sqrt(1 - a));
		return R * c;
	}

	/// <summary>
	/// Gets the horizontal offset from screen center.
	/// </summary>
	/// <returns>The offset from center.</returns>
	/// <param name="bearing">Bearing.</param>
	/// <param name="heading">Heading.</param>
	/// <param name="success">Success.</param>
	private float GetOffsetFromCenter(float bearing, float heading, ref bool success)
	{
		float deg = bearing - heading;
		deg = deg % 360;
		deg = (deg < -180) ? deg + 360 : deg;

		float fieldOfView = 63.54f / 2;
		success = false;
		if (Mathf.Abs(deg) <= fieldOfView){
			success = true;
			return 0.5f * Mathf.Tan(deg * Mathf.Deg2Rad) / Mathf.Tan(fieldOfView * Mathf.Deg2Rad) * Screen.width;
		}

		return 0;
	}

	/// <summary>
	/// Gets the font size based on the distance to the targat building.
	/// </summary>
	/// <returns>The font size from distance.</returns>
	/// <param name="distance">Distance.</param>
    private int GetFontSizeFromDistance(float distance) 
	{
        // unit of distance: meter
//		return distance > 300 ? 19 : Mathf.CeilToInt (40 - distance / 14.0f);
		return distance > 200 ? 20 : Mathf.CeilToInt (80 - distance * 0.3f);

    } 

	/// <summary>
	/// Displays the map or not.
	/// </summary>
	/// <param name="displayMap">If set to <c>true</c> display map.</param>
	private void DisplayMap(Boolean displayMap) 
	{
		mapImage.SetActive(displayMap);
	}

	/// <summary>
	/// Cleans up labels.
	/// </summary>
	void CleanUpLabels() {
		foreach (Transform child in labels.transform){
			Destroy(child.gameObject);
		}
	}

	// By Anup
	/// <summary>
	/// Displays the JSON.
	/// </summary>
	/// <param name="json">Json.</param>
    private void DisplayJSON (string json)
	{
		Debug.Log (json);
		if (json.Equals ("")) {
			return;
		}

		JSONObject jo = new JSONObject(json);
		List<JSONObject> featureJsonObjects = jo["features"].list;
		foreach (JSONObject feature in featureJsonObjects) {
			// parse data
//			int id = int.Parse(feature["attributes"]["OBJECTID"].ToString());
			string building = feature["attributes"]["Building"].str;
			string description = feature["attributes"]["Descriptio"].str;
			float x = float.Parse(feature["geometry"]["x"].ToString());
			float y = float.Parse(feature["geometry"]["y"].ToString());

			// save data
			featureList.Add(new Feature(building, description, x, y));
		}

//        JSONObject jo = new JSONObject(json);
//
//        List<JSONObject> li = jo["features"].list;
//        string build = "";
//        string desc;
//        float x = 0, y = 0;
//        for (int i = 0; i < li.Count; i++){
//            build = li[i]["attributes"]["Building"].str;
//            desc = li[i]["attributes"]["Descriptio"].str;
//            x = float.Parse(li[i]["geometry"]["x"].ToString());
//            y = float.Parse(li[i]["geometry"]["y"].ToString());
//            List<float> co = new List<float>();
//            co.Add(x);
//            co.Add(y);
//            features.Add(build, co);
//            description.Add(build, desc);
//        }
	}

	// By Anup
	/// <summary>
	/// Communicates with the server and downloads the spheres.
	/// </summary>
	/// <returns>The spheres.</returns>
	IEnumerator DownloadSpheres()
	{
//		features = new Dictionary<string, List<float>>();
//		description = new Dictionary<string, string>();
		string url = "https://services6.arcgis.com/j576TQTjtSTh0SdN/ArcGIS/rest/services/HackESRI/FeatureServer/0/query?where=1%3D1&objectIds=&time=&geometry=&geometryType=esriGeometryEnvelope&inSR=&spatialRel=esriSpatialRelIntersects&resultType=none&distance=&units=esriSRUnit_Meter&returnGeodetic=false&outFields=*&returnGeometry=true&multipatchOption=xyFootprint&maxAllowableOffset=&geometryPrecision=&outSR=4326&returnIdsOnly=false&returnCountOnly=false&returnExtentOnly=false&returnDistinctValues=false&orderByFields=&groupByFieldsForStatistics=&outStatistics=&resultOffset=&resultRecordCount=&returnZ=false&returnM=false&quantizationParameters=&sqlFormat=none&f=pjson&token=";
//		 string url = "https://services6.arcgis.com/j576TQTjtSTh0SdN/ArcGIS/rest/services/HackESRI/FeatureServer/0/query?where=1%3D1&objectIds=&time=&geometry=&geometryType=esriGeometryEnvelope&inSR=&spatialRel=esriSpatialRelIntersects&resultType=none&distance=&units=esriSRUnit_Meter&outFields=Building%2C+Descriptio&returnGeometry=true&multipatchOption=&maxAllowableOffset=&geometryPrecision=&outSR=4326&returnIdsOnly=false&returnCountOnly=false&returnExtentOnly=false&returnDistinctValues=false&orderByFields=&groupByFieldsForStatistics=&outStatistics=&resultOffset=&resultRecordCount=&returnZ=false&returnM=false&quantizationParameters=&sqlFormat=none&f=pjson&token=";
		WWW w = new WWW(url);
		yield return w;
		DisplayJSON(w.text);
	}
}

class Feature {
	public float lon, lat;
	public string building, description;

	public Feature(string building, string description, float lon, float lat) {
		this.building = building;
		this.description = description;
		this.lon = lon;
		this.lat = lat;
	}
}