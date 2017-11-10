/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_union_media_streamer_encoder_x264_X264EncoderWrapper */

#ifndef _Included_com_union_media_streamer_encoder_x264_X264EncoderWrapper
#define _Included_com_union_media_streamer_encoder_x264_X264EncoderWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_union_media_streamer_encoder_x264_X264EncoderWrapper
 * Method:    _init
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_union_media_streamer_encoder_x264_X264EncoderWrapper__1init
        (JNIEnv *, jobject);

/*
 * Class:     com_union_media_streamer_encoder_x264_X264EncoderWrapper
 * Method:    _open
 * Signature: (JIIIIFFI)I
 */
JNIEXPORT jint JNICALL Java_com_union_media_streamer_encoder_x264_X264EncoderWrapper__1open
        (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jfloat, jfloat, jint);

/*
 * Class:     com_union_media_streamer_encoder_x264_X264EncoderWrapper
 * Method:    _adjust_bitrate
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_union_media_streamer_encoder_x264_X264EncoderWrapper__1adjust_1bitrate
        (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_union_media_streamer_encoder_x264_X264EncoderWrapper
 * Method:    _encode
 * Signature: (JLjava/nio/ByteBuffer;IIJI)I
 */
JNIEXPORT jint JNICALL Java_com_union_media_streamer_encoder_x264_X264EncoderWrapper__1encode
        (JNIEnv *, jobject, jlong, jobject, jint, jint, jlong, jint);

/*
 * Class:     com_union_media_streamer_encoder_x264_X264EncoderWrapper
 * Method:    _close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_union_media_streamer_encoder_x264_X264EncoderWrapper__1close
        (JNIEnv *, jobject, jlong);

/*
 * Class:     com_union_media_streamer_encoder_x264_X264EncoderWrapper
 * Method:    _release
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_union_media_streamer_encoder_x264_X264EncoderWrapper__1release
        (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif