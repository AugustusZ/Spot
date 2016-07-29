using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Net;
using System.IO;
using System;
using System.Collections.Generic;
using System.Text;

public class CanvasCreate : MonoBehaviour
{
	    private Dictionary<string, List<float>> features;
	    private Dictionary<string, string> description;
	    private int count;
	    private float bearing;
	    private LocationInfo li;
	    private float viewAngle;
	    private bool prev;
	    private int diffFromPrevCount;
	    private GameObject insImg;
	    private int mapImageID;
	    private Canvas canvasComponent;

	    void Start()
	    {
		        Input.compass.enabled = true;
		        Input.location.Start();
		        StartCoroutine(DownloadSpheres());
		    }

	    void createImage(){
		        Canvas canvasComponent = GameObject.Find("Canvas").GetComponent<Canvas>();
		        cleanUP ();
		        GameObject img = Resources.Load<GameObject>("CustomImage");
		        insImg = GameObject.Instantiate(img) as GameObject;
		        insImg.transform.SetParent(canvasComponent.gameObject.transform, false);
		        insImg.transform.position = new Vector3(Screen.width / 2, Screen.height / 2, 0);
		        insImg.SetActive (true);
		        prev = false;
		        diffFromPrevCount = 0;
		    }

	    private float angleFromCoordinate(float lat1, float lon1, float lat2, float lon2)
	    {
		        float y = Mathf.Sin(lon2 * Mathf.Deg2Rad - lon1 * Mathf.Deg2Rad) * Mathf.Cos(lat2 * Mathf.Deg2Rad);
		        float x = Mathf.Cos(lat1 * Mathf.Deg2Rad) * Mathf.Sin(lat2 * Mathf.Deg2Rad) - Mathf.Sin(lat1 * Mathf.Deg2Rad) * Mathf.Cos(lat2 * Mathf.Deg2Rad) * Mathf.Cos(lon2 * Mathf.Deg2Rad - lon1 * Mathf.Deg2Rad);
		        return Mathf.Atan2(y, x) * Mathf.Rad2Deg;
		    }

	    private float distanceBetweenInMeter(float lat1, float lon1, float lat2, float lon2)
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

	    private float getOffsetFromCenter(float bearing, float heading, ref bool success)
	    {
		        float deg = bearing - heading;
		        deg = deg % 360;
		        deg = (deg < -180) ? deg + 360 : deg;
		//        Debug.Log(deg);
		        float fieldOfView = 63.54f / 2;
		        success = false;
		        if (Mathf.Abs(deg) <= fieldOfView){
			            success = true;
			            return 0.5f * Mathf.Tan(deg * Mathf.Deg2Rad) / Mathf.Tan(fieldOfView * Mathf.Deg2Rad) * Screen.width;
			        }

		        return 0;
		        /*success = true;
        float deg = bearing - heading;
        float halfFOV = 63.54f;
        if (deg >= halfFOV || deg <= 360 - halfFOV) {
            success = false;
            return 0;
        }
        return 0.5f * Mathf.Tan(deg * Mathf.Deg2Rad) / Mathf.Tan(halfFOV * Mathf.Deg2Rad) * Screen.width;*/
		    }

	    IEnumerator DownloadSpheres()
	    {
		        features = new Dictionary<string, List<float>>();
		        description = new Dictionary<string, string>();
				string url = "https://services6.arcgis.com/j576TQTjtSTh0SdN/ArcGIS/rest/services/HackESRI/FeatureServer/0/query?where=1%3D1&objectIds=&time=&geometry=&geometryType=esriGeometryEnvelope&inSR=&spatialRel=esriSpatialRelIntersects&resultType=none&distance=&units=esriSRUnit_Meter&outFields=Building%2C+Descriptio&returnGeometry=true&multipatchOption=&maxAllowableOffset=&geometryPrecision=&outSR=4326&returnIdsOnly=false&returnCountOnly=false&returnExtentOnly=false&returnDistinctValues=false&orderByFields=&groupByFieldsForStatistics=&outStatistics=&resultOffset=&resultRecordCount=&returnZ=false&returnM=false&quantizationParameters=&sqlFormat=none&f=pjson&token=";
		        //string url = "http://services2.arcgis.com/pe1WjKDkwS4W58Lx/ArcGIS/rest/services/Grove/FeatureServer/0/query?where=1%3D1&objectIds=&time=&geometry=&geometryType=esriGeometryEnvelope&inSR=&spatialRel=esriSpatialRelIntersects&resultType=none&distance=&units=esriSRUnit_Meter&outFields=*&returnGeometry=true&multipatchOption=&maxAllowableOffset=&geometryPrecision=&outSR=4326&returnIdsOnly=false&returnCountOnly=false&returnExtentOnly=false&returnDistinctValues=false&orderByFields=&groupByFieldsForStatistics=&outStatistics=&resultOffset=&resultRecordCount=&returnZ=false&returnM=false&quantizationParameters=&sqlFormat=none&f=pjson&token=";
		        WWW w = new WWW(url);
		        yield return w;
		        print("Waiting for sphere definitions\n");
		        yield return new WaitForSeconds(1f);
		        print("Received sphere definitions\n");
		        DisplayJSON(w.text);
		    }

	    void cleanUP(){
		        canvasComponent = GameObject.Find("Canvas").GetComponent<Canvas>();
		        foreach (Transform child in canvasComponent.transform){
			            Destroy(child.gameObject);
			        }
		    }

	    void displayText(){

		        cleanUP ();

		        li = Input.location.lastData;
				float userLatitude = li.latitude; //34.056758320140425f; 
				float userlongitude = li.longitude; //-117.19532859973505f;

		        foreach (KeyValuePair<string, List<float>> key in features){
			            string building = key.Key;
			            List<float> coord = key.Value;

			            bearing = angleFromCoordinate(userLatitude, userlongitude, coord[1], coord[0]);
			            float distance = distanceBetweenInMeter(userLatitude, userlongitude, coord[1], coord[0]);
			            bool suc = false;
			            float offsetFromCenterOnScreen = getOffsetFromCenter(bearing, Input.compass.trueHeading, ref suc);
			            if (suc == true)
				            {
				                string textValue = building;
				                GameObject myText = Resources.Load<GameObject>("CustomText");
				                GameObject insText = GameObject.Instantiate(myText) as GameObject;
				                insText.transform.SetParent(canvasComponent.gameObject.transform, false);
				                insText.transform.position = new Vector3((0.5f * Screen.width + offsetFromCenterOnScreen), (0.5f * Screen.height), 0);
				                Text label = insText.GetComponent<Text>();
				                string d = description[key.Key];
				                distance = (float)(Math.Truncate((double)distance * 100.0) / 100.0);
				                distance = (float)(Math.Round((double)distance, 2));
				                label.text = textValue + "\n" + d + "\n" + distance.ToString() + " m";
				                label.fontSize = getFontSizeFromDistance(distance);
				            }
			        }
		    }

	    void Update()
	    {
		        if(DeviceOrientation.FaceUp == Input.deviceOrientation){
			            createImage ();
			            return;
			        }

		        displayText ();

		        /*if (prev != showOrHideMap ()) {
            diffFromPrevCount++;
            if (diffFromPrevCount > 12) {
                bool active = showOrHideMap ();
                insImg.SetActive (active);
                prev = showOrHideMap ();
                if(active == false){
                    displayText ();
                }
            }
        } else {
            diffFromPrevCount = 0;
        }*/
		    }

	    private bool showOrHideMap() {
		        viewAngle = Input.acceleration.y * 90f;
		        return Mathf.Abs (viewAngle) < 60;
		    }

	    private int getFontSizeFromDistance(float distance) {
		        // unit of distance: meter
		        if (distance > 300) {
			            return 19;
			        } 
		        return Mathf.CeilToInt (40 - distance / 14.0f);
		    } 

	    void DisplayJSON(string json){
		        JSONObject jo = new JSONObject(json);
		        List<JSONObject> li = jo["features"].list;
		        string build = "";
		        string desc;
		        float x = 0, y = 0;
		        for (int i = 0; i < li.Count; i++){
			            build = li[i]["attributes"]["Building"].str;
			            desc = li[i]["attributes"]["Descriptio"].str;
			            x = float.Parse(li[i]["geometry"]["x"].ToString());
			            y = float.Parse(li[i]["geometry"]["y"].ToString());
			            List<float> co = new List<float>();
			            co.Add(x);
			            co.Add(y);
			            features.Add(build, co);
			            description.Add(build, desc);
			        }
		    }
}
