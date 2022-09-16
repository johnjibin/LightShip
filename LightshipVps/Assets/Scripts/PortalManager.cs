using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class PortalManager : MonoBehaviour
{
	public GameObject MainCamera;
	public GameObject Sponza;

	private Material[] SponzaMaterials;

	// Use this for initialization
	/*void Start()
	{
		SponzaMaterials = Sponza.GetComponent<Renderer>().sharedMaterials;
	}*/

	void Start()
    {
        SponzaMaterials = Sponza.GetComponent<Renderer>().sharedMaterials;
        foreach (var mat in SponzaMaterials)
        {
            mat.SetInt("_StencilComp", (int)CompareFunction.Equal);
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if(other.name!= "ARCamera")
        {
            return;
        }
        if(transform.position.z>other.transform.position.z)
        {
            foreach(var mat in SponzaMaterials)
            {
                mat.SetInt("_StencilComp", (int)CompareFunction.Equal);
            }
        }
        else
        {
            Debug.Log("Inside other World");
            foreach(var mat in SponzaMaterials)
            {
                mat.SetInt("_StencilComp", (int)CompareFunction.NotEqual);
            }
        }
    }
    private void OnDestroy()
    {
        foreach (var mat in SponzaMaterials)
        {
            mat.SetInt("_StencilComp", (int)CompareFunction.NotEqual);
        }
    }
}
