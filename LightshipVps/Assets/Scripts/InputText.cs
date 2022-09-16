using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class InputText : MonoBehaviour
{
    public TextMeshPro textmesh;
    //string input;
    public TMP_InputField _inputField;
    //public GameObject cube;
    private void Start()
    {
        //_inputField = GameObject.Find("InputField(TMP)").GetComponent<TMP_InputField>();
    }
     public void Start1()
    {
        _inputField = GameObject.Find("InputField(TMP)").GetComponent<TMP_InputField>();
        string input = _inputField.text;
        Debug.Log(input);
        //textmesh = GetComponent<TMPro.TextMeshPro>();
        textmesh = GameObject.Find("Text(TMP)").GetComponent<TextMeshPro>();
        //input = GetComponent<TextMesh>().text;
        textmesh.text = input;
        
    }
    

}
