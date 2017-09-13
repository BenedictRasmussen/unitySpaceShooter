using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {
    public Boundary boundary;
    public float speed;
    public float xTilt;
    public float zTilt;

    // Weapons
    public GameObject shot;
    public Transform[] shotSpawns;
    public float fireRate = .5f;
    private float nextFire = 0.0f;

    //General references we'll need
    private Rigidbody rb;
    private AudioSource boltAudio;
    private GameController gameController;

    void Start() {
        rb = GetComponent<Rigidbody>();
        boltAudio = GetComponent<AudioSource>();

        GameObject gameControllerObject = GameObject.FindWithTag("GameController");
        if (gameControllerObject != null) {
            gameController = gameControllerObject.GetComponent<GameController>();
        } else {
            Debug.Log("Could not find GameController");
        }
    }

    // Executes just prior to executing a frame
    void Update()
    {
        if (Input.GetButton("Fire1") && Time.time > nextFire) {
            nextFire = Time.time + fireRate;

            int currentScore = gameController.getScore();
            if (currentScore < PowerUps.DOUBLE_FIRE) {
                Instantiate(shot, shotSpawns[0].position, shotSpawns[0].rotation);
            } else if (currentScore < PowerUps.TRIPLE_FIRE) {
                //Implicitly greater than DOUBLE_FIRE
                Instantiate(shot, shotSpawns[1].position, shotSpawns[1].rotation);
                Instantiate(shot, shotSpawns[2].position, shotSpawns[2].rotation);
            } else if (currentScore < PowerUps.SPREAD_FIRE) {
                //Implicitly have enough points for TRIPLE_FIRE
                foreach (Transform shotSpawn in shotSpawns) {
                    Instantiate(shot, shotSpawn.position, shotSpawn.rotation);
                }
            } else {
                Instantiate(shot, shotSpawns[0].position, shotSpawns[0].rotation);
                //Spread 1
                Quaternion rot = shotSpawns[1].rotation;
                rot.y = rot.y + PowerUps.SPREAD_ANGLE;
                Instantiate(shot, shotSpawns[1].position, rot);

                Quaternion rot2 = shotSpawns[2].rotation;
                rot2.y = rot2.y - PowerUps.SPREAD_ANGLE;
                Instantiate(shot, shotSpawns[2].position, rot2);
            }

            boltAudio.Play();
        }
    }

    // Executed once per physics step
    void FixedUpdate() {
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        // Perform the movement
        Vector3 movement = new Vector3(moveHorizontal, 0.0f, moveVertical) * speed;
        rb.velocity = movement;

        // rb.rotation = Quaternion.Euler(rb.velocity.z * zTilt, 0.0f, rb.velocity.x * (-xTilt));
        rb.rotation = Quaternion.Euler(0.0f, 0.0f, rb.velocity.x * (-xTilt));

        rb.position = new Vector3(
            Mathf.Clamp(rb.position.x, boundary.xMin, boundary.xMax),
            0.0f,
            Mathf.Clamp(rb.position.z, boundary.zMin, boundary.zMax)
        );
    }
}

class PowerUps
{
    //public const int DOUBLE_FIRE = 10;
    public const int DOUBLE_FIRE = 50;
    //public const int TRIPLE_FIRE = 25;
    public const int TRIPLE_FIRE = 125;
    //public const int SPREAD_FIRE = 30;
    public const int SPREAD_FIRE = 250;
    public const float SPREAD_ANGLE = 0.05f;
}

[System.Serializable]
public class Boundary {
    public float xMin;
    public float xMax;
    public float zMin;
    public float zMax;
}
