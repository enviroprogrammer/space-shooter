﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Boundary
{
	public float xMin, xMax, zMin, zMax;
}

public class PlayerController : MonoBehaviour
{
	// PlayerController inherits from MonoBehaviour

	public float speed;
	public float tilt;
	public Boundary boundary;
	private Rigidbody rb;
	private AudioSource audioSource;

	public GameObject shot;
	public Transform shotSpawn;
	public float fireRate;
	private float nextFire;


	void Update ()
	{
		audioSource = GetComponent<AudioSource> ();

		if (Input.GetButton ("Fire1") && Time.time > nextFire) {
			nextFire = Time.time + fireRate;
//			GameObject clone = 
			Instantiate(shot, shotSpawn.position, shotSpawn.rotation); // as GameObject;
			audioSource.Play ();
		}

	}

	void FixedUpdate ()
	{
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);
		rb = GetComponent<Rigidbody> ();
		rb.velocity = movement * speed;
		rb.position = new Vector3 (
			Mathf.Clamp (rb.position.x, boundary.xMin, boundary.xMax),
			0.0f,
			Mathf.Clamp (rb.position.z, boundary.zMin, boundary.zMax)
		);

		rb.rotation = Quaternion.Euler (0.0f, 0.0f, rb.velocity.x * -tilt);
	}
}