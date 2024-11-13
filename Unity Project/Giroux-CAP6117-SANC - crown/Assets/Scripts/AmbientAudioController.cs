using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AmbientAudioController : MonoBehaviour
{
    private GameObject day;
    private GameObject night;
    private GameObject rain;
    private GameObject taps;
    private GameObject anthem;

    private bool isDaytime;
    private bool isRaining;
    private bool isTapsActive;
    private bool isAnthemActive;
    // Start is called before the first frame update
    void Start()
    {
        isDaytime = true;
        isRaining = false;
        isTapsActive = false;
        isAnthemActive = false;
        day = transform.GetChild(0).gameObject;
        night = transform.GetChild(1).gameObject;
        rain= transform.GetChild(2).gameObject;
        taps = transform.GetChild(3).gameObject;
        anthem = transform.GetChild(4).gameObject;
    }

    public void ToggleTaps()
    {
        if(isTapsActive)
        {
              taps.SetActive(false);
              isTapsActive =  false;
        }
          
        else
        {
            isTapsActive = true;
            taps.SetActive(true);
        }
    }

    public void ToggleAnthem()
    {
        if(isAnthemActive)
        {
            anthem.SetActive(false);
            isAnthemActive = false;
        }

        else{
            isAnthemActive =  true;
            anthem.SetActive(true);
        }
    }

    public void ToggleRain()
    {
        if (isRaining)
        {
            rain.SetActive(false);
            if (isDaytime) 
            { 
                day.SetActive(true); 
            }
            else
            {
                night.SetActive(true);
            }
        } 
        else
        {
            rain.SetActive(true);
            day.SetActive(false);
            night.SetActive(false);
        }
        isRaining=!isRaining;
    }
    public void ToggleDaytime()
    {
        if (isDaytime)
        {
            day.SetActive(false);
            if (isRaining)
            {
                rain.SetActive(true);
            }
            else
            {
                night.SetActive(true);
            }
        }
        else
        {
            night.SetActive(false);
            if (isRaining)
            {
                rain.SetActive(true);
            }
            else
            {
                day.SetActive(true); 
            }
        }
        isDaytime=!isDaytime;
    }
}
