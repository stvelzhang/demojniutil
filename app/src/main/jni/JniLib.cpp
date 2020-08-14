//
// Created by Administrator on 2020/8/13.
//
#include <jni.h>
#include <com_revo_demojniutil_JniUtil.h>
#include <stdio.h>
#include <string.h>
#include<android/log.h>
/*
 * Class:     com_revo_demojniutil_JniUtil
 * Method:    getString
 * Signature: ()Ljava/lang/String;
 */
extern "C" {
JNIEXPORT jstring JNICALL Java_com_revo_demojniutil_JniUtil_getString
  (JNIEnv *env, jobject obj){
     const char keyvalue[8] = {'s','t','v','e','l','z','s','x'};
     return  env->NewStringUTF(keyvalue);
     }
}
/*
 * Class:     com_revo_demojniutil_JniUtil
 * Method:    add
 * Signature: (II)I
 */
extern "C" {
JNIEXPORT jint JNICALL Java_com_revo_demojniutil_JniUtil_add
  (JNIEnv *env, jobject obj, jint k, jint j){

      return k + j;
  }
}