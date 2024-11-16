using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AnthemToggle : MonoBehaviour
{

    Toggle theToggle;
    public AmbientAudioController ambientAudio;
    public TMP_Text labelText;

    // Start is called before the first frame update
    void Start()
    {
        theToggle = GetComponent<Toggle>();
        // default it to on
        theToggle.isOn = false;
        //Add listener for when the state of the Toggle changes, to take action
        theToggle.onValueChanged.AddListener(delegate {
            ToggleValueChanged(theToggle);
        });
    }


     /// <param name="change">The state of change.</param>
    void ToggleValueChanged(Toggle change)
    {
       labelText.text = "Anthem: ";

        if (theToggle.isOn)
        {
            labelText.text += "ON";
        }
        else
        {
            labelText.text += "OFF";
        }

        ambientAudio.ToggleAnthem();
        
        
    }
}
