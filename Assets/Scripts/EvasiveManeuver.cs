using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvasiveManeuver : MonoBehaviour {
    public float dodge;
    public float smoothing;
    public float xTilt;
    public Vector2 startWait;
    public Vector2 maneuverTime;
    public Vector2 maneuverWait;
    public Boundary boundary;

    public Transform playerTransform;

    private float currentSpeed;
    private float targetManeuver;
    private Rigidbody rb;

	void Start () {
        rb = GetComponent<Rigidbody>();
        GameObject playerObject = GameObject.FindWithTag("Player");
        if (playerObject != null) {
            playerTransform = playerObject.transform;
        } else {
            Debug.Log("Could not find player object");
        }

        currentSpeed = rb.velocity.z;
        StartCoroutine(Evade());
	}

    IEnumerator Evade() {
        yield return new WaitForSeconds(Random.Range(startWait.x, startWait.y));

        while (true) {
            bool isAggressive = (Random.Range(0, 4) + 1) > 3 ? true : false;

            if (isAggressive) {
                targetManeuver = playerTransform.position.x;
                Debug.Log("Attacking player");
            } else {
                targetManeuver = Random.Range(1, dodge) * -Mathf.Sign(transform.position.x);
            }
            
            yield return new WaitForSeconds(Random.Range(maneuverTime.x, maneuverTime.y));
            targetManeuver = 0;
            yield return new WaitForSeconds(Random.Range(maneuverWait.x, maneuverWait.y));
        }
    }

	void FixedUpdate () {
        rb.rotation = Quaternion.Euler(0.0f, 0.0f, rb.velocity.x * (-xTilt));

        float newManeuver = Mathf.MoveTowards(rb.velocity.x, targetManeuver, Time.deltaTime * smoothing);
        rb.velocity = new Vector3(newManeuver, 0.0f, currentSpeed);
        rb.position = new Vector3(
            Mathf.Clamp(rb.position.x, boundary.xMin, boundary.xMax),
            0.0f,
            Mathf.Clamp(rb.position.z, boundary.zMin, boundary.zMax)
        );
	}
}
