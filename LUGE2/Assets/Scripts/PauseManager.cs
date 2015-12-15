﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;
#if UNITY_EDITOR
using UnityEditor;
#endif

public class PauseManager : MonoBehaviour {
	
	Canvas canvas;
	public bool en = false;

	void Start()
	{
		canvas = GetComponent<Canvas>();
		canvas.enabled = en;
	}
	
//	void Update()
//	{
//		if (Input.GetKeyDown(KeyCode.Escape))
//		{
//			Pause();
//		}
//	}
	
	public void Pause()
	{
		canvas.enabled = !canvas.enabled;
		Time.timeScale = Time.timeScale == 0 ? 1 : 0;
	}
	public void Restart(){
		Time.timeScale = 1;
		Application.LoadLevel (1);
	}
	
	public void Quit()
	{
		// later fix this to go to main title instead
		#if UNITY_EDITOR 
		EditorApplication.isPlaying = false;
		#else 
		Application.Quit();
		#endif
	}
}