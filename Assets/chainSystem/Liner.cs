using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class Liner : MonoBehaviour {

public GameObject OtherGameObject;
LineRenderer line;


public float RopeWidth=0.5f;
	void Start () {
		if(OtherGameObject == null)
		{
			line.sortingOrder = 1;
			Debug.LogWarning("Please Attach Other GameObject in inspector");
			return;


		}
		OtherGameObject.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePositionZ | RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationY;

		line = GetComponent<LineRenderer>();


		line.SetWidth(RopeWidth,RopeWidth);

		line.useWorldSpace = true;

		line.positionCount = 2;

		line.SetPosition(0,gameObject.transform.position);
		line.SetPosition(1, new Vector3 (OtherGameObject.transform.position.x, OtherGameObject.transform.position.y, OtherGameObject.transform.position.z - 5));
	}
	
	// Update is called once per frame
	void Update () {

		line.SetPosition(0,gameObject.transform.position);
		line.SetPosition(1,OtherGameObject.transform.position);
		
		if (JointBreak.JBreak)
        {
			gameObject.GetComponent<LineRenderer>().enabled = false;
			//OtherGameObject.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
			GameObject.FindWithTag("Player").GetComponent<Pause>().Freeze(3);
			enabled = false;
		}
	}
}
