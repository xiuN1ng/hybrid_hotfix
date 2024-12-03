using System.IO;
using Sirenix.OdinInspector;
using Sirenix.OdinInspector.Editor;
using Sirenix.Utilities;
using Sirenix.Utilities.Editor;
using UnityEditor;
using UnityEngine;

namespace Editor
{

    public class HybridCopyWindow : OdinEditorWindow
    {
        [MenuItem("HybridCLR/自定义/拷贝热更资源到指定文件夹")]
        private static void OpenWindow()
        {
            var window = GetWindow<HybridCopyWindow>();

            // Nifty little trick to quickly position the window in the middle of the editor.
            window.position = GUIHelper.GetEditorWindowRect().AlignCenter(700, 700);
        }
        
        [SerializeField]
        [Sirenix.OdinInspector.FilePath]
        public string hotFixDllPath;
        
        [SerializeField]
        [Sirenix.OdinInspector.FilePath]
        public string mscorlibDllPath;
        
        [SerializeField]
        [Sirenix.OdinInspector.FilePath]
        public string systemDllPath;
        
        [SerializeField]
        [Sirenix.OdinInspector.FilePath]
        public string systemCoreDllPath;
        
        [SerializeField]
        [FolderPath]
        public string outPath;
        
        [Button(Name = "拷贝到指定文件夹")]
        public void Copy()
        {
            if (string.IsNullOrEmpty(outPath) || File.Exists(outPath))
            {
                Debug.LogError("outPath is null or file exists!");
                return;
            }
            
            DllCopyToBytes(hotFixDllPath);
            DllCopyToBytes(mscorlibDllPath);
            DllCopyToBytes(systemDllPath);
            DllCopyToBytes(systemCoreDllPath);
            AssetDatabase.Refresh();
        }

        private void DllCopyToBytes(string dllPath)
        {
            if (string.IsNullOrEmpty(dllPath) || !File.Exists(dllPath))
            {
                Debug.LogError($"{dllPath} is null or file not exists!");
            }
            else
            {
                // 如果已存在此文件，先删除
                var path = outPath + "/" + Path.GetFileName(dllPath) + ".bytes";
                if (File.Exists(path))
                {
                    File.Delete(path);
                }
                
                File.Copy(dllPath, path);
                Debug.Log("copy \n" + dllPath + " \nto \n" + outPath);
            }
        }
    }
}
