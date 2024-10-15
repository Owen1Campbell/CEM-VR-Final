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
   
    public AmbientAudioController ambientAudio;
   
    private GameObject birds;
    private GameObject mainLight;

    public SkyBoxControl skyBoxControl;

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
            birds.SetActive(true);
        }
        else
        {
            labelText.text += "OFF";
            birds.SetActive(false);
        }
        /// <summary>
        /// Changes time of day between day and night.
        /// </summary>
        ambientAudio.ToggleDaytime();
        skyBoxControl.ToggleDayTime();
    }
}

