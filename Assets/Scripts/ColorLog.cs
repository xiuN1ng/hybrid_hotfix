using UnityEngine;

namespace DefaultNamespace
{
    public class ColorLog
    {
        public static void YellowLog(string log)
        {
            Debug.Log("<color=yellow>" + log + "</color>");
        }
        
        public static void Log(string log)
        {
            Debug.Log("<color=white>" + log + "</color>");
        }

        public static void LogError(string log)
        {
            Debug.LogError(log);
        }
    }
}