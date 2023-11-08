using System.Globalization;
using System.Net.Mime;
using System;
using System.Numerics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARRaycastManager))]
public class ARShowObject : MonoBehaviour
{
    [Header("要顯示的物件")]
    public GameObject ARObjectFemale;
    public GameObject ARObjectMale;
    [SerializeField] private Image ARTargetRight = null;
    [SerializeField] private Image ARTargetLeft = null;
    // [SerializeField] private Image ARTarget = null;
    private ARRaycastManager arRaycast;
    private List<ARRaycastHit> hits = new List<ARRaycastHit>(); // AR碰撞到的物件
    private bool isLooking = false; // 是否正在注視
    private float lookTime = 0f; // 注視時間
    private float maxLookTime = 3f; // 最大注視時間
    private bool finish = false; //是否完成顯示
    private string sex; //性別
    public bool isFinishARShow = false;
    private UnityEngine.Vector3 spawnPosition = new UnityEngine.Vector3();
    private UnityEngine.Vector3 worldPosition = new UnityEngine.Vector3();
    private UnityEngine.Vector2 screenSize = new UnityEngine.Vector2();
    private UnityEngine.Vector3 initialScale;

    void Start()
    {
        arRaycast = GetComponent<ARRaycastManager>();

        spawnPosition = new UnityEngine.Vector3(Screen.width / 2f, Screen.height / 2f, 0f);
        worldPosition = Camera.main.ScreenToWorldPoint(spawnPosition);
        ARTargetLeft.fillAmount = 0f;
        ARTargetRight.fillAmount = 0f;

        // ARTarget.fillAmount = 0f;
        screenSize = new UnityEngine.Vector2(Screen.width / 2f, Screen.height / 2f);
        PlayerPrefs.SetString("ARRaycast.Raycast", "false");
        Debug.Log("ARSShow");

    }

    void Update()
    {
        if (PlayerPrefs.GetString("ARRaycast.Raycast", "false") == "false")
        {
            CheckLookTime();
        }

    }
    private void CheckLookTime()
    {
        // 檢查是否正在注視
       if ((PlayerPrefs.GetString("ARShowObject", "false") == "true") && arRaycast.Raycast(screenSize, hits, TrackableType.Planes))
        {
          // 開始注視
          if (!isLooking)
          {
               isLooking = true;
               lookTime = 0f;
               ARTargetRight.fillAmount = 0f;
               ARTargetLeft.fillAmount = 0f;
               // ARTarget.fillAmount = 0f;
          }
          // 檢查是否超過最大注視時間
          if (lookTime >= maxLookTime)
          {
               // if(ARObject != null) 
               // {
               //      Destroy(ARObject);
               // }
               try
               {
                sex = GameObject.Find("Dialog").GetComponent<Dialog>().sex;
               }
               catch (System.Exception)
               {
                
                sex = GameObject.Find("OpenClient").GetComponent<Open>().sex;
               }
               
               isFinishARShow = true;
               // 生成物件在注視座標
               Pose pose = hits[0].pose;
               
               //生成物件性別
               GameObject temp = new GameObject();
            //    if (sex.Equals("man"))
            //    {
            //         Debug.Log("man");
                    initialScale = ARObjectMale.transform.localScale;
                    ARObjectMale.transform.localScale = UnityEngine.Vector3.Scale(initialScale, new UnityEngine.Vector3(initialScale.x * 0.75f, initialScale.y * 0.75f, initialScale.z * 0.75f));
                    temp = Instantiate(ARObjectMale, pose.position, pose.rotation);
            //    }
            //    else
            //    {
            //         Debug.Log("顯示女性");
            //         initialScale = ARObjectFemale.transform.localScale;
            //         ARObjectFemale.transform.localScale = UnityEngine.Vector3.Scale(initialScale, new UnityEngine.Vector3(initialScale.x, initialScale.y, initialScale.z));
            //         temp = Instantiate(ARObjectFemale, pose.position, pose.rotation);
            //    }
               PlayerPrefs.SetString("ARRaycast.Raycast", "true");
               UnityEngine.Vector3 look = transform.position;
               look.y = temp.transform.position.y;
               temp.transform.LookAt(look);

               if (sex.Equals("man"))
               {
                    ARObjectMale = temp;
               }
               else
               {
                    ARObjectFemale = temp;
               }


               ARTargetLeft.fillAmount = 0f;
               ARTargetRight.fillAmount = 0f;
               // ARTarget.fillAmount = 0f;
            }
            else
            {
                // 持續注視，計算注視時間
                lookTime += Time.deltaTime;
                ARTargetLeft.fillAmount = (lookTime / 3) % 10;
                ARTargetRight.fillAmount = (lookTime / 3) % 10;
            }


        }
        else if (!finish) //若是尚未完成
        {
            // 停止注視，重置注視時間和狀態
            lookTime = 0f;
            isLooking = false;
            ARTargetLeft.fillAmount = 0f;
            ARTargetRight.fillAmount = 0f;
            // ARTarget.fillAmount = 0f;
        }
        // else if(finish && ARObject == null) //若是完成且人物消失
        // {
        //      finish = false;
        //      isLooking = false;
        // }
    }

}