// This output is automatically generated. Do not edit.
#ifndef J2P__SRuS__INCLUDED
#define J2P__SRuS__INCLUDED
#include "pick-jni.h"
#include "j2psupport.hxx"
#include "IfaceSRuS.hxx"
#include "j2pDOM_APISPEC.hxx"
#include "j2pMathML_content_APISPEC.hxx"
#include "j2pSProS.hxx"
#undef PUBLIC_JAVAMOD_PRE
#undef PUBLIC_JAVAMOD_POST
#ifdef IN_MODULE_J2P__SRuS
#define PUBLIC_JAVAMOD_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVAMOD_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_IMPORT_POST
#endif
#undef PUBLIC_JAVALIB_PRE
#undef PUBLIC_JAVALIB_POST
#ifdef IN_LIBRARY_J2P__SRuS
#define PUBLIC_JAVALIB_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVALIB_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_IMPORT_POST
#endif
PUBLIC_JAVALIB_PRE jobject wrap_SRuS_SEDMLProcessor(JNIEnv* env, iface::SRuS::SEDMLProcessor* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_SRuS_SEDMLProcessor_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_SEDMLProcessor_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_SRuS_SEDMLProcessor_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_SRuS_SEDMLProcessor_supportsModellingLanguage(JNIEnv* env, jobject thisptr, jstring aNSURI) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_SEDMLProcessor_buildOneModel(JNIEnv* env, jobject thisptr, jobject aModel) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_SEDMLProcessor_buildAllModels(JNIEnv* env, jobject thisptr, jobject aElement) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_SRuS_SEDMLProcessor_generateData(JNIEnv* env, jobject thisptr, jobject aSet, jobject aElement, jobject aMonitor) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_SRuS_TransformedModel(JNIEnv* env, iface::SRuS::TransformedModel* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_SRuS_TransformedModel_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_TransformedModel_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_SRuS_TransformedModel_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_TransformedModel_getXmlDocument(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_TransformedModel_getModelDocument(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_TransformedModel_getSedmlModel(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_SRuS_TransformedModelSet(JNIEnv* env, iface::SRuS::TransformedModelSet* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_SRuS_TransformedModelSet_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_TransformedModelSet_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_SRuS_TransformedModelSet_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_SRuS_TransformedModelSet_getLength(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_TransformedModelSet_item(JNIEnv* env, jobject thisptr, jlong idx) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_TransformedModelSet_getItemByID(JNIEnv* env, jobject thisptr, jstring matchId) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_SRuS_GeneratedDataMonitor(JNIEnv* env, iface::SRuS::GeneratedDataMonitor* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_SRuS_GeneratedDataMonitor_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_GeneratedDataMonitor_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_SRuS_GeneratedDataMonitor_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_SRuS_GeneratedDataMonitor_progress(JNIEnv* env, jobject thisptr, jobject aData) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_SRuS_GeneratedDataMonitor_failure(JNIEnv* env, jobject thisptr, jstring aErrMsg) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_SRuS_GeneratedDataMonitor_done(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_SRuS_GeneratedData(JNIEnv* env, iface::SRuS::GeneratedData* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_SRuS_GeneratedData_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_GeneratedData_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_SRuS_GeneratedData_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_GeneratedData_getSedmlDataGenerator(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_SRuS_GeneratedData_getLength(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_SRuS_GeneratedData_dataPoint(JNIEnv* env, jobject thisptr, jlong idx) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_SRuS_GeneratedDataSet(JNIEnv* env, iface::SRuS::GeneratedDataSet* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_SRuS_GeneratedDataSet_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_GeneratedDataSet_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_SRuS_GeneratedDataSet_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_SRuS_GeneratedDataSet_getLength(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_GeneratedDataSet_item(JNIEnv* env, jobject thisptr, jlong idx) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_SRuS_Bootstrap(JNIEnv* env, iface::SRuS::Bootstrap* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_SRuS_Bootstrap_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_Bootstrap_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_SRuS_Bootstrap_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_SRuS_Bootstrap_makeDefaultProcessor(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
#endif // not J2P__SRuS__INCLUDED
