using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class SkyBoxControl : MonoBehaviour
{
    private bool isRaining;
    private bool isDay;

    public Material DaySky;
    public Material NightSky;
    public Material RainSky;
    private Vector3[] lightPositions;
    private GameObject mainLight;

    // Start is called before the first frame update
    void Start()
    {
        isDay = true;
        isRaining = false;

        lightPositions = new Vector3[2];
        lightPositions[0] = new Vector3(45, 246, 0);
        lightPositions[1] = new Vector3(2, 180, 0);
        mainLight = GameObject.FindWithTag("MainLight");
    }


     public void ToggleDayTime()
     {
        if (isDay)
        {
            if (isRaining)
            {
                
            }
            else
            {
                mainLight.transform.rotation = Quaternion.Euler(lightPositions[1]);
                RenderSettings.skybox = NightSky;
            }
        }
        else
        {
            if (isRaining)
            {
                
            }
            else
            {
                mainLight.transform.rotation = Quaternion.Euler(lightPositions[0]);
                RenderSettings.skybox = DaySky;
            }
        }
        isDay=!isDay;
    }
     

     public void ToggleRain()
     {
        if (isRaining)
        {
            if (isDay) 
            { 
                mainLight.transform.rotation = Quaternion.Euler(lightPositions[0]);
                RenderSettings.skybox = DaySky;
            }
            else
            {
                mainLight.transform.rotation = Quaternion.Euler(lightPositions[1]);
                RenderSettings.skybox = NightSky;
            }
        } 
        else
        {
           mainLight.transform.rotation = Quaternion.Euler(lightPositions[1]);
           RenderSettings.skybox = RainSky;
        }
        isRaining=!isRaining;
     }
    
}
