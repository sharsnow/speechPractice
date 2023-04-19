using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using System.Text;
using System;
using System.Xml;
using Connection;


namespace Connection
{
    public class Connect : MonoBehaviour
{
    private Socket clientSocket;
    public string ServerIP = "192.168.99.33";
    public int ServerPort = 8888;
    #region Init
        private static Connect _instance;
        public static Connect Instance
        {
            get
            {
                if (_instance == null)
                {
                        //Create if it doesn't exist
                    GameObject go = new GameObject("Connect");
                    _instance = go.AddComponent<Connect>();
                }
                return _instance;
            }
        }

        void Awake()
        {    
            Debug.Log("awake");
            _instance = this;
            connectServer();
        }
    #endregion

        public bool connectServer() {
            if(ServerIP == null || ServerPort == 0 ) {
                return false;
            } 
            try {
                clientSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
                
                IPAddress serverIP = IPAddress.Parse(ServerIP);
                IPEndPoint endPoint = new IPEndPoint(serverIP, ServerPort);
                clientSocket.Connect(endPoint);
                // submitMsgToServer("unity");
                acceptMsgs();
                return true;

            } catch {
                return false;
            }
        }
        
         public string acceptMsgs() {
            int receiveBufferSize = 1024;
            byte[] receiveBuffer = new byte[receiveBufferSize];
            int receiveCount = 0;
            StringBuilder sb = new StringBuilder();
            try
            {
                
                do {
                receiveCount = clientSocket.Receive(receiveBuffer);
                sb.Append(Encoding.UTF8.GetString(receiveBuffer, 0, receiveCount));
                } while (receiveCount == receiveBufferSize && receiveCount != 0);

                string receiveMessage = sb.ToString();
                Debug.Log("Received message from server: " + receiveMessage);
                return receiveMessage;
            }
            catch (System.Exception e)
            {
                Debug.Log("client Error!" + e.Message);
                return e.Message;
            }

        }
        public string submitMsgToServer(string msg) {
            Debug.Log(msg);
            if(clientSocket == null || !clientSocket.Connected) {
                // connectServer();
                return "client connection fault!";
            }
            try {
                byte[] buffer = Encoding.UTF8.GetBytes(msg, 0, msg.Length);
                clientSocket.Send(buffer);
                // Thread.Sleep(5000);
                string text = acceptMsgs();
                return text;
            } catch(Exception e) {
                Debug.Log("client Error!!!!" + e.Message);
                return e.Message;
            }
        }
        public void endClient() {
            clientSocket.Close();
        }
}

}
