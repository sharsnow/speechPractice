using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(BoxCollider))]
public class Click : MonoBehaviour
{
   public UnityEvent upEvent;
   public UnityEvent downEvent;

   void OnMouseUp() {
    Debug.Log("up");
    upEvent?.Invoke();
   }
   void OnMouseDown() {
    Debug.Log("down");
    downEvent?.Invoke();
   }
}
