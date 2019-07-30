// This output is automatically generated. Do not edit.
#ifndef J2P__CellML_events__INCLUDED
#define J2P__CellML_events__INCLUDED
#include "pick-jni.h"
#include "j2psupport.hxx"
#include "IfaceCellML_events.hxx"
#include "j2pDOM_APISPEC.hxx"
#include "j2pMathML_content_APISPEC.hxx"
#include "j2pCellML_APISPEC.hxx"
#include "j2pDOM_events.hxx"
#undef PUBLIC_JAVAMOD_PRE
#undef PUBLIC_JAVAMOD_POST
#ifdef IN_MODULE_J2P__CellML_events
#define PUBLIC_JAVAMOD_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVAMOD_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_IMPORT_POST
#endif
#undef PUBLIC_JAVALIB_PRE
#undef PUBLIC_JAVALIB_POST
#ifdef IN_LIBRARY_J2P__CellML_events
#define PUBLIC_JAVALIB_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVALIB_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_IMPORT_POST
#endif
PUBLIC_JAVALIB_PRE jobject wrap_cellml_events_MutationEvent(JNIEnv* env, iface::cellml_events::MutationEvent* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1events_MutationEvent_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1events_MutationEvent_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1events_MutationEvent_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1events_MutationEvent_getRelatedElement(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1events_MutationEvent_getPrevValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1events_MutationEvent_getNewValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1events_MutationEvent_getAttrLocalName(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1events_MutationEvent_getAttrNamespaceURI(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1events_MutationEvent_getAttrChange(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1events_MutationEvent_getType(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1events_MutationEvent_getTarget(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1events_MutationEvent_getCurrentTarget(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1events_MutationEvent_getEventPhase(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_cellml_1events_MutationEvent_getBubbles(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_cellml_1events_MutationEvent_getCancelable(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_cellml_1events_MutationEvent_getTimeStamp(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1events_MutationEvent_stopPropagation(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1events_MutationEvent_preventDefault(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1events_MutationEvent_initEvent(JNIEnv* env, jobject thisptr, jstring eventTypeArg, jboolean canBubbleArg, jboolean cancelableArg) PUBLIC_JAVAMOD_POST; };
#endif // not J2P__CellML_events__INCLUDED
