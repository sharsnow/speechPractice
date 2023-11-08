using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using System.Threading.Tasks;
using System.Text;
using System;
using System.Xml;
using Component;
using LitJson;

namespace Connection
{
    public class Connect : MonoBehaviour
{
    private Socket clientSocket;
    public string ServerIP = "192.168.235.33";
    public int ServerPort = 8888;
    public string localIP = "";
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
        }
    #endregion

        public async Task<bool> connectServer() {
            if(ServerIP == null || ServerPort == 0 ) {
                return false;
            } 
            try {
                clientSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
                
                IPAddress serverIP = IPAddress.Parse(ServerIP);
                IPEndPoint endPoint = new IPEndPoint(serverIP, ServerPort);

                await clientSocket.ConnectAsync(endPoint);
                await AcceptMsgsAsync();

                SubmitMsgToServerAsync("{\"from\":\"\"}");
                var tmp = await AcceptMsgsAsync();
                Component.Json json = JsonMapper.ToObject<Component.Json>(tmp);
            
                localIP = json.to;

                return true;

            } catch {
                return false;
            }
        }
        public string acceptLocalIP() {
            return localIP;
        } 
        public async Task<string> AcceptMsgsAsync()
        {
            int receiveBufferSize = 1024;
            byte[] receiveBuffer = new byte[receiveBufferSize];
            int receiveCount = 0;
            StringBuilder sb = new StringBuilder();
            try
            {
                do
                {
                    receiveCount = await clientSocket.ReceiveAsync(new ArraySegment<byte>(receiveBuffer), SocketFlags.None);
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
        

        public async Task<bool> SubmitMsgToServerAsync(string msg)
        {
            if (clientSocket == null || !clientSocket.Connected)
            {
                // connectServer();
                Debug.Log("client connection fault!");
                return false;
            }
            try
            {
                byte[] buffer = Encoding.UTF8.GetBytes(msg, 0, msg.Length);
                await clientSocket.SendAsync(buffer, SocketFlags.None);
                // Thread.Sleep(5000);
                return true;
            }
            catch (Exception e)
            {
                Debug.Log("client Error!!!!" + e.Message);
                return false;
            }
        }
        public void endClient() {
            clientSocket.Close();
        }
    }

}
