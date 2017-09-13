using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine;

public class GameController : MonoBehaviour {
    public GameObject[] hazards;
    public Vector3 spawnValues;
    public int hazardCount;
    public float spawnWait;
    public float startWait;
    public float waveWait;

    //Displaying score
    public GUIText scoreText;
    public GUIText restartText;
    public GUIText gameOverText;

    private bool isGameOver;
    private bool isRestart;
    private int score;

    void Start()
    {
        isGameOver = false;
        gameOverText.text = "";
        isRestart = false;
        restartText.text = "";

        score = 0;

        UpdateScore();
        StartCoroutine(SpawnWaves());
    }

    void Update()
    {
        if (isRestart) {
            if (Input.GetKeyDown(KeyCode.R)) {
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            }
        }
    }

    // Coroutine
    IEnumerator SpawnWaves()
    {
        yield return new WaitForSeconds(startWait);
        while (true) {
            for (int i = 0; i < hazardCount; i++) {
                //Choose one of many possible hazards
                GameObject hazard = hazards[Random.Range(0,hazards.Length)];

                Vector3 spawnPosition = new Vector3(Random.Range(-spawnValues.x, spawnValues.x), spawnValues.y, spawnValues.z);
                Quaternion spawnRotation = Quaternion.identity;
                Instantiate(hazard, spawnPosition, spawnRotation);
                yield return new WaitForSeconds(spawnWait);
            }

            yield return new WaitForSeconds(waveWait);

            if (isGameOver) {
                restartText.text = "Press 'R' for Restart";
                isRestart = true;
                break;
            }
        }
    }

    void UpdateScore()
    {
        scoreText.text = "Score: " + score;
    }

    public void AddScore(int newScore)
    {
        score += newScore;
        UpdateScore();
    }

    public int getScore()
    {
        return score;
    }

    public void GameOver()
    {
        gameOverText.text = "Game Over";
        isGameOver = true;
    }
}
