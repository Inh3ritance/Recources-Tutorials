using UnityEngine;
using System;
public class ClockAnimator : MonoBehaviour{

	private const float      //constant variables
		hoursToDegrees = 360f / 12f,
		minutesToDegrees = 360f / 60f,
		secondsToDegrees = 360f / 60f;
	public Transform hours, minutes, seconds;  //transform variables
	public bool analog;

	private void Update (){    //made private so 'outside' wont change anything
		if (analog) {
			TimeSpan timespan = DateTime.Now.TimeOfDay;  //applies smoother fractional movement
			DateTime time = DateTime.Now; // Find approxamite time of now
			hours.localRotation = Quaternion.Euler (0f, 0f, (float)timespan.TotalHours * -hoursToDegrees);   //defines arbitrary rotation
			minutes.localRotation = Quaternion.Euler (0f, 0f, (float)timespan.TotalMinutes * -minutesToDegrees);
			seconds.localRotation = Quaternion.Euler (0f, 0f, (float)timespan.TotalSeconds * -secondsToDegrees);
		} else {
			DateTime time = DateTime.Now; // Find approxamite time of now
			hours.localRotation = Quaternion.Euler (0f, 0f, time.Hour * -hoursToDegrees);   //defines arbitrary rotation
			minutes.localRotation = Quaternion.Euler (0f, 0f, time.Minute * -minutesToDegrees);
			seconds.localRotation = Quaternion.Euler (0f, 0f, time.Second * -secondsToDegrees);
		}
	}
}