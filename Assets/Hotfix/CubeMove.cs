using System;
using System.Collections;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;

public class CubeMove : MonoBehaviour
{
    void Start()
    {
        Debug.Log("热更新成功!!");
        TestLoad();
    }

    private void TestLoad()
    {
        long tick = DateTime.Now.Ticks;
        string filename = "test.txt";
        var r_url = Application.streamingAssetsPath + $"/data/{filename}?v={tick}";
        StartCoroutine(GetData(r_url));
    }

    private IEnumerator GetData(string url)
    {
        UnityWebRequest fileQuest = UnityWebRequest.Get(url);
        // 发送请求，等待完成  
        yield return fileQuest.SendWebRequest();
        if (fileQuest.result == UnityWebRequest.Result.ProtocolError)
        {
            Debug.Log("模板加载出错! " + url);
        }
        else
        {
            byte[] message = fileQuest.downloadHandler.data;
            string encodeStr = Encoding.UTF8.GetString(message);
            Debug.Log(encodeStr);
            Debug.Log($"加载完成了====== {url}\n内容如下：\n{encodeStr}");
        }
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(new Vector3(0, 0, 1), 1000 * Time.deltaTime);
    }
}
