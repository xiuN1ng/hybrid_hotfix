using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeMove : MonoBehaviour
{
    void Start()
    {
        Debug.Log("热更新成功!!");
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(new Vector3(0, 0, 1), 1000 * Time.deltaTime);
    }
}
