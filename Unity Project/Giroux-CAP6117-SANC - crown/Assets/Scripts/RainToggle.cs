using UnityEngine;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// This class processes the headstone biography boards based on the closebio toggle value.
/// </summary>
public class RainToggle : MonoBehaviour
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
    /// Holds a reference to the particle system that handles rain effects.
    /// </summary>
    public ParticleSystem particles;
    /// <summary>
    /// Holds a reference to the the audio controller for the ambient sounds.
    /// </summary>
    public AmbientAudioController ambientAudio;
    public SkyBoxControl skyBoxControl;
    private GameObject birds;

    /// <summary>
    /// Holds a reference to the DatabaseControl object for the updating of the headstone settings.
    /// </summary>
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
        theToggle.isOn = false;
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
        labelText.text = "Rain: ";

        if (theToggle.isOn)
        {
            labelText.text += "ON";
        }
        else
        {
            labelText.text += "OFF";
        }
        /// <summary>
        /// Changes weather betweening raining and not raining.
        /// </summary>
        ambientAudio.ToggleRain();
        skyBoxControl.ToggleRain();
        if (theToggle.isOn)
        {
            particles.gameObject.SetActive(true);
            birds.SetActive(false);
        } 
        else
        {
            particles.gameObject.SetActive(false);
            birds.SetActive(true);
        }
    }
}

