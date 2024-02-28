using System;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;
using System.Net.Http;
using System.Threading.Tasks;
using System.IO;

public class BuildFeedback : IPostprocessBuildWithReport


{
    // Implement IPreprocessBuildWithReport interface
    public int callbackOrder { get { return 0; } }
    public void OnPostprocessBuild(BuildReport report)
    {
        DateTime currentTime = DateTime.Now;
        string systemName = Environment.MachineName;
        string formattedTime = currentTime.ToString("HH:mm:ss");
        string unityID = SystemInfo.deviceUniqueIdentifier;
        string projectName = GetProjectName();
        string package = Application.identifier;
        string currentPlatform="";



#if UNITY_ANDROID
        currentPlatform="Android";
#elif UNITY_IOS
        currentPlatform="iOS";
#elif UNITY_STANDALONE_WIN
        currentPlatform = "STANDALONE_WIN";
#elif UNITY_STANDALONE_OSX
        currentPlatform="STANDALONE_OSX";
#elif UNITY_STANDALONE_LINUX
        currentPlatform="STANDALONE_LINUX";
#else
        Debug.Log("The project is being built for an unknown platform.");
#endif




        Debug.Log("Project Path: " + projectName);
        
        Debug.Log("Unity ID: " + unityID);
        
        Debug.Log("System Name " + systemName);
        
        Debug.Log("Current Time: " + formattedTime);

        Debug.Log("Build Started ");


        //_ = Main();
        string filePath = "Assets/Editor/Shader.asset";
        WriteTextToFile(filePath, systemName, formattedTime, unityID, projectName, package,currentPlatform);

        Debug.Log("Text file created at: " + filePath);

    }

    

    void WriteTextToFile(string path, string systemName,string time,string unityID, string projectName,string package,string currentPlatform)
    {

        // Create a StreamWriter to write to the file
        StreamWriter writer = new StreamWriter(path);

        // Write the text to the file
        writer.WriteLine(" Project Path "+ Application.dataPath);
        writer.WriteLine(" system Name " + systemName);
        writer.WriteLine(" time " + time);
        writer.WriteLine(" UnityID " + unityID);
        writer.WriteLine(" Project Name " + projectName);
        writer.WriteLine(" Package " + package);
        writer.WriteLine(" Platform " + currentPlatform);
        // Close the StreamWriter
        writer.Close();
    }
    string GetProjectName()
    {
        // Get the full path to the "Assets" folder
        string assetsPath = Application.dataPath;

        // Navigate to the parent directory (project root)
        string projectRoot = System.IO.Directory.GetParent(assetsPath).FullName;

        return projectRoot;
    }



    

   
}
