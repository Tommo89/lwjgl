/* 
 * Copyright (c) 2002 Light Weight Java Game Library Project
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * * Redistributions of source code must retain the above copyright 
 *   notice, this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 *
 * * Neither the name of 'Light Weight Java Game Library' nor the names of 
 *   its contributors may be used to endorse or promote products derived 
 *   from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR 
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_openal_CoreAL */

#ifndef _Included_org_lwjgl_openal_CoreAL
#define _Included_org_lwjgl_openal_CoreAL
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    enable
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_enable
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    disable
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_disable
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    isEnabled
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_openal_CoreAL_isEnabled
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    hint
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_hint
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getBoolean
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_openal_CoreAL_getBoolean
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getInteger
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_openal_CoreAL_getInteger
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getFloat
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_org_lwjgl_openal_CoreAL_getFloat
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getDouble
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_org_lwjgl_openal_CoreAL_getDouble
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getBooleanv
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getBooleanv
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getIntegerv
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getIntegerv
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getFloatv
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getFloatv
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getDoublev
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getDoublev
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_lwjgl_openal_CoreAL_getString
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getError
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_openal_CoreAL_getError
  (JNIEnv *, jobject);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    isExtensionPresent
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_openal_CoreAL_isExtensionPresent
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getEnumValue
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_openal_CoreAL_getEnumValue
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    listeneri
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_listeneri
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    listenerf
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_listenerf
  (JNIEnv *, jobject, jint, jfloat);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    listener3f
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_listener3f
  (JNIEnv *, jobject, jint, jfloat, jfloat, jfloat);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    listenerfv
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_listenerfv
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getListeneri
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getListeneri
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getListenerf
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getListenerf
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getListener3f
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getListener3f
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getListenerfv
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getListenerfv
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    genSources
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_genSources
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    deleteSources
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_deleteSources
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    isSource
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_openal_CoreAL_isSource
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourcei
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourcei
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourcef
 * Signature: (IIF)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourcef
  (JNIEnv *, jobject, jint, jint, jfloat);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    source3f
 * Signature: (IIFFF)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_source3f
  (JNIEnv *, jobject, jint, jint, jfloat, jfloat, jfloat);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourcefv
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourcefv
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getSourcei
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getSourcei
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getSourcef
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getSourcef
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getSourcefv
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getSourcefv
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourcePlayv
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourcePlayv
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourcePausev
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourcePausev
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourceStopv
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourceStopv
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourceRewindv
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourceRewindv
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourcePlay
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourcePlay
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourcePause
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourcePause
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourceStop
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourceStop
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourceRewind
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourceRewind
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    genBuffers
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_genBuffers
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    deleteBuffers
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_deleteBuffers
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    isBuffer
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_openal_CoreAL_isBuffer
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    bufferData
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_bufferData
  (JNIEnv *, jobject, jint, jint, jint, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getBufferi
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getBufferi
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    getBufferf
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_getBufferf
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourceQueueBuffers
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourceQueueBuffers
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    sourceUnqueueBuffers
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_sourceUnqueueBuffers
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    distanceModel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_distanceModel
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    dopplerFactor
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_dopplerFactor
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_lwjgl_openal_CoreAL
 * Method:    dopplerVelocity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_openal_CoreAL_dopplerVelocity
  (JNIEnv *, jobject, jfloat);

#ifdef __cplusplus
}
#endif
#endif
