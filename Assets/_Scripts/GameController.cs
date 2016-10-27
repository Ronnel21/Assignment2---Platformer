using UnityEngine;
using System.Collections;
using UnityEngine.UI; //reference to UI namespace
using UnityEngine.SceneManagement; //reference to scenes

public class GameController : MonoBehaviour {

    //Private Instances
    private int _livesValue;
    private int _scoreValue;
    

    //Public Instances
    public GameObject player;
    public Text GameOverLabel;
    public Text FinalScoreLabel;
    public Button RestartButton;   

    [Header("UI Objects")]
    public Text LivesLabel;
    public Text ScoreLabel;
    public AudioSource gameOverSound; 

    //Public Properties
    public int LivesValue
    {
        get
        {
            return this._livesValue;
        }
        set
        {
            this._livesValue = value;
            if (this._livesValue <= 0)
            {
                this._endGame();
            }
            else
            {
                this.LivesLabel.text = "Lives: " + this._livesValue;
            }
        }
    }

    public int ScoreValue
    {
        get
        {
            return this._scoreValue;
        }
        set
        {
            this._scoreValue = value;
            this.ScoreLabel.text = "Score: " + this._scoreValue;
        }
    }

	// Use this for initialization
	void Start () {
        this.LivesValue = 5;
        this.ScoreValue = 0;

        this.GameOverLabel.gameObject.SetActive(false);
        this.FinalScoreLabel.gameObject.SetActive(false);
        this.RestartButton.gameObject.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
	
	} 

    private void _endGame()
    {
        this.player.SetActive(false);
        this.LivesLabel.gameObject.SetActive(false);
        this.ScoreLabel.gameObject.SetActive(false);
        this.gameOverSound.Play();
        this.GameOverLabel.gameObject.SetActive(true);
        this.FinalScoreLabel.gameObject.SetActive(true);
        this.FinalScoreLabel.text = "Final Score: " + this.ScoreValue;
        this.RestartButton.gameObject.SetActive(true);
        
    }

    public void RestartButton_Click()
    {
        SceneManager.LoadScene("Menu");
    }
}
