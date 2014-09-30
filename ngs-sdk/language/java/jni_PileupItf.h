/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ngs_itf_PileupItf */

#ifndef _Included_ngs_itf_PileupItf
#define _Included_ngs_itf_PileupItf
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ngs_itf_PileupItf
 * Method:    GetReferenceSpec
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ngs_itf_PileupItf_GetReferenceSpec
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ngs_itf_PileupItf
 * Method:    GetReferencePosition
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_ngs_itf_PileupItf_GetReferencePosition
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ngs_itf_PileupItf
 * Method:    GetPileupEvents
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_ngs_itf_PileupItf_GetPileupEvents
  (JNIEnv *, jobject, jlong);

/*
 * Class:     ngs_itf_PileupItf
 * Method:    GetPileupDepth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ngs_itf_PileupItf_GetPileupDepth
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif