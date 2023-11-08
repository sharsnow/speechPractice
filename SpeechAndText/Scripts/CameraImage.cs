using System;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine;
using UnityEngine.UI;
using ZXing;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


public class CameraImage : MonoBehaviour
{
    private Texture2D m_Texture;
    private BarcodeReader barCodeReader;
    public ARCameraManager cameraManager;
    private bool scanFinish = true;

    void Start()
    {
        // 获取ARCameraManager组件的引用
        cameraManager = GetComponent<ARCameraManager>();
        barCodeReader = new BarcodeReader();
        scanFinish = true;
        // Debug.Log("QRcode Start()");
        PlayerPrefs.SetString("QRcodeData", "null");
        PlayerPrefs.SetString("ARShowObject", "false");
    }
    void OnEnable()
    {
        // Debug.Log("QRcode OnEnable()");
        cameraManager.frameReceived += OnCameraFrameReceived;
    }

    void OnDisable()
    {
        // Debug.Log("QRcode OnDisable()");
        cameraManager.frameReceived -= OnCameraFrameReceived;
    }

    unsafe void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs)
    {
        // Debug.Log("OnCameraFrameReceived");
        if(PlayerPrefs.GetString("QRcodeData", "null") != "null"){
            return;
        } 
        try
        {
            if (!cameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
            {
                Debug.Log("image is NUll");
                return;
            }
            Debug.Log("掃描!");
            var conversionParams = new XRCpuImage.ConversionParams
            {
                // Get the entire image.
                inputRect = new RectInt(0, 0, image.width, image.height),

                // Downsample by 2.
                outputDimensions = new Vector2Int(image.width / 2, image.height / 2),

                // Choose RGBA format.
                outputFormat = TextureFormat.RGBA32,

                // Flip across the vertical axis (mirror image).
                transformation = XRCpuImage.Transformation.MirrorY
            };

            // See how many bytes you need to store the final image.
            int size = image.GetConvertedDataSize(conversionParams);

            // Allocate a buffer to store the image.
            var buffer = new NativeArray<byte>(size, Allocator.Temp);

            // Extract the image data
            image.Convert(conversionParams, new IntPtr(buffer.GetUnsafePtr()), buffer.Length);

            // The image was converted to RGBA32 format and written into the provided buffer
            // so you can dispose of the XRCpuImage. You must do this or it will leak resources.
            image.Dispose();

            // At this point, you can process the image, pass it to a computer vision algorithm, etc.
            // In this example, you apply it to a texture to visualize it.

            // You've got the data; let's put it into a texture so you can visualize it.
            m_Texture = new Texture2D(
                conversionParams.outputDimensions.x,
                conversionParams.outputDimensions.y,
                conversionParams.outputFormat,
                false);
            m_Texture.LoadRawTextureData(buffer);
            if (m_Texture != null)
            {
                // 纹理应用成功，可以执行需要的操作
                m_Texture.Apply();
                Color32[] pixels = m_Texture.GetPixels32();
                var data = barCodeReader.Decode(pixels, conversionParams.outputDimensions.x, conversionParams.outputDimensions.y);
                if (data != null)
                {
                    // QRCode detected.
                    Debug.Log("QR: " + data.Text);
                    PlayerPrefs.SetString("QRcodeData", data.Text);
                    PlayerPrefs.SetString("ARShowObject", "true");
                    scanFinish = false;
                }
            }
            else
            {
                Debug.Log("Texture application failed.");
            }
            // Done with your temporary data, so you can dispose it.
            buffer.Dispose();


        }
        catch (Exception e)
        {
            Debug.Log(e.Message);
        }
    }


}