using System.Runtime.InteropServices;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class AnimationControll : StateMachineBehaviour
{

    public string parametersName = "character";
    public string action;
    public bool startAction = true;
    // private string sex;
    // public int[] m_stateIDArray = {0,1,2,3,4};
    private string[] animationer = {"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25"
    ,"26","27","28","29","30","31"};
    public override void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        // sex =  PlayerPrefs.GetString("Sex", "man");
        UnityEngine.Debug.Log("進入OnStateEnter--------");
        

    }
    public override void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
        action = PlayerPrefs.GetString("Action","0");
       int aniIndex = Array.FindIndex(animationer, (s) => s.Equals(action));
        if (PlayerPrefs.GetString("AnimationMoving", "false").Equals("true") && startAction)
        {
            animationAction(ref animator, aniIndex);
        }
        else{
            animationAction(ref animator, 0);
        }

    }
    public void animationAction(ref Animator animator, int aniIndex)
    {
        animator.SetInteger(parametersName, aniIndex);
    }

    public override void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        // sex =  PlayerPrefs.GetString("Sex", "man");
        UnityEngine.Debug.Log("離開OnStateEnter--------");
        PlayerPrefs.SetString("AnimationMoving", "false");

    }
}
