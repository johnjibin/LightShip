using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class InstantiationScript:MonoBehaviour
{

    public TextMeshPro textMesh;
    public string input;
    public TMP_InputField _inputField;
  
    //int count = 0;
    // Start is called before the first frame update


    public void Start1()
    {
        //string text2;
        _inputField = GameObject.Find("InputField(TMP)").GetComponent<TMP_InputField>();
        input = _inputField.text;
        //count++;
        //input = count.ToString();
        //textMesh.SetText(input);
        Debug.Log(input);
        textMesh.GetComponent<TextMeshPro>();
        textMesh.SetText(input);
        //obj.GetComponent<TextMeshPro>().ClearMesh();
        //obj.GetComponent<TextMeshPro>().text = input;
        //textmesh = GetComponent<TMPro.TextMeshPro>();
        //textmesh = GameObject.Find("Text(TMP)").GetComponent<TextMeshPro>();
        //input = GetComponent<TextMesh>().text;
        //textmesh.text = input;
        //text2 = obj.GetComponent<TextMeshPro>().text;
        Debug.Log(textMesh.text);

    }



}
    