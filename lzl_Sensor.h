/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class lzl_Sensor */

#ifndef _Included_lzl_Sensor
#define _Included_lzl_Sensor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     lzl_Sensor
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_lzl_Sensor_init
  (JNIEnv *, jobject);

/*
 * Class:     lzl_Sensor
 * Method:    get_humiture
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_lzl_Sensor_get_1humiture
  (JNIEnv *, jobject);

/*
 * Class:     lzl_Sensor
 * Method:    get_brightness
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_lzl_Sensor_get_1brightness
  (JNIEnv *, jobject);

/*
 * Class:     lzl_Sensor
 * Method:    setLight
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_lzl_Sensor_setLight
  (JNIEnv *, jobject, jstring);

/*
 * Class:     lzl_Sensor
 * Method:    setSpeed
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_lzl_Sensor_setSpeed
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif