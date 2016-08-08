# Spot

This is a 46-hour team project for Esri Second Annual Weekend of Innovation. 

## Teamwork 
| Work | Anup Deulgaonkar | Jake Devost | Keyur Kulkarni | Yankuan Zhang |
| :----: | :-----: | :-----: | :-----: | :-----: | :-----: |
| [Demo and Presentation](#demo-and-presentation) |✅|✅|✅|✅|
| [Data Communication](#data-communication) |✅| |✅||
| [Unity3D](#unity3d) |✅| | |✅|
| [Coordinate Algorithm](#coordinate-algorithm) |✅| | |✅|
| [UI/UX Design](#uiux-design) | |✅| |✅|

And [future work](#future-work).

##Demo and Presentation
- [Demo video](https://youtu.be/jD6eDb-i6jM)
- [Presentation](https://youtu.be/M4NN-aa8t5E) 
- [Slides](Spot_presentation_slides.pdf)

## Data Communication
REST API of [ArcGIS Server](https://services6.arcgis.com/j576TQTjtSTh0SdN/ArcGIS/rest/services/HackESRI/FeatureServer/0).

### Callback JSON data structure
For each element in the array of `features` in callback, we have object **name** and its **description** as well as **latitude and longitude** for the center point of the object, e.g.,
	
	{
		"attributes" : {
			"Building" : "Building Q", 
			"Descriptio" : "Corporate"
		}, 
		"geometry" : 
		{
			"x" : -117.19569250299996, 
			"y" : 34.056070361000017
		}
	},


## Unity3D
We used [Vuforia](https://developer.vuforia.com/) package for [Unity3D](https://unity3d.com/).
### Installation guidelines 
To be documented...

## App Design and Implementation 
### Workflow 
![](workflow.png)

### Coordinate conversion algorithm
To be documented...

## UI/UX Design
### UI/UX ideation and Graphic Communication
By Jake. See more Jake's fantastic works, click [here](https://issuu.com/robertdevost/).

### Splash Screen
![](splash.png)

### App Icon 
There will be a version with better quality to be released...
![](icon.jpg)

## Future Work
- Refine UI
	- perspective
		- contrast in color 	 
	- better-quality icon
	- label
		- tappable
		- properly organized labels
		- sync label position vertically
		- 3D

- Face-up
	- explore mode
		- interactive map
		- realtime-location
		- routing visualization 
	- detail mode
		- display more info for selected object

- Migrate out of Unity3D
	- use Vuforia iOS [SDK](https://developer.vuforia.com/downloads/sdk)
	- try [Wikitude](http://www.wikitude.com/)

- Enable accessibility
	- Voice control
	- Speak-out
