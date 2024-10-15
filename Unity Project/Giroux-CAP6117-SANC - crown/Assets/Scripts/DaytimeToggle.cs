using UnityEngine;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// This class processes the headstone biography boards based on the closebio toggle value.
/// </summary>
public class DaytimeToggle: MonoBehaviour
{
    /// <summary>
    /// Holds a reference to the biographies toggle field.
    /// </summary>
    Toggle theToggle;
    /// <summary>
    /// Holds a reference to the label for the toggle.
    /// </summary>
    public TMP_Text labelText;
    /// <summary>
    /// Holds a reference to the material for the daytime skybox.
    /// </summary>
    public Material daySky;
    /// <summary>
    /// Holds a reference to the material for the nighttime skybox.
    /// </summary>
    public Material nightSky;
    /// <summary>
    /// Holds a reference to the audio controller for the ambient sounds.
    /// </summary>
    public AmbientAudioController ambientAudio;
    /// <summary>
    /// Holds a value for the valid light positions.
    /// </summary>
    private Vector3[] lightPositions;

    private GameObject birds;
    private GameObject mainLight;

    /// <summary>
    /// Holds a reference to the DatabaseControl object for the updating of the headstone settings.
    /// </summary>0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
    public DatabaseControl databaseControl;

    /// <summary>
    /// Sets up the biography board toggle for closing each or leaving them open.
    /// </summary>
    void Start()
    { 
        //Get birds group
        birds = GameObject.FindWithTag("Birds");
        //Fetch the Toggle GameObject
        theToggle = GetComponent<Toggle>();
        // default it to on
        theToggle.isOn = true;
        //Add listener for when the state of the Toggle changes, to take action
        theToggle.onValueChanged.AddListener(delegate {
            ToggleValueChanged(theToggle);
        });
        //Initate possible shadow casting positions
        lightPositions = new Vector3[2];
        lightPositions[0] = new Vector3(45, 246, 0);
        lightPositions[1] = new Vector3(2, 180, 0);
        mainLight = GameObject.FindWithTag("MainLight");
    }

    /// <summary>
    /// Outputs the new state of the Toggle into the label text.
    /// </summary>
    /// <param name="change">The state of change.</param>
    void ToggleValueChanged(Toggle change)
    {
        labelText.text = "Daytime: ";

        if (theToggle.isOn)
        {
            labelText.text += "ON";
            mainLight.transform.rotation = Quaternion.Euler(lightPositions[0]);
            RenderSettings.skybox = daySky;
            birds.SetActive(true);
        }
        else
        {
            labelText.text += "OFF";
            mainLight.transform.rotation = Quaternion.Euler(lightPositions[1]);
            RenderSettings.skybox = nightSky;
            birds.SetActive(false);
        }
        /// <summary>
        /// Changes time of day between day and night.
        /// </summary>
        ambientAudio.ToggleDaytime();
    }
}

