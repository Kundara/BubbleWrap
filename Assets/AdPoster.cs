﻿using UnityEngine;
using UnityEngine.Advertisements;

public class AdPoster : MonoBehaviour
{
	public static void ShowAd()
	{
		if (Advertisement.IsReady())
		{
			Advertisement.Show();
		}
	}
}