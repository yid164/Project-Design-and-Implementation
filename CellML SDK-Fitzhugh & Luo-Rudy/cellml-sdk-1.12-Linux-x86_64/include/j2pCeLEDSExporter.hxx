// This output is automatically generated. Do not edit.
#ifndef J2P__CeLEDSExporter__INCLUDED
#define J2P__CeLEDSExporter__INCLUDED
#include "pick-jni.h"
#include "j2psupport.hxx"
#include "IfaceCeLEDSExporter.hxx"
#include "j2pDOM_APISPEC.hxx"
#include "j2pMathML_content_APISPEC.hxx"
#include "j2pCellML_APISPEC.hxx"
#include "j2pCUSES.hxx"
#include "j2pAnnoTools.hxx"
#include "j2pCeVAS.hxx"
#include "j2pMaLaES.hxx"
#include "j2pCeLEDS.hxx"
#include "j2pCCGS.hxx"
#undef PUBLIC_JAVAMOD_PRE
#undef PUBLIC_JAVAMOD_POST
#ifdef IN_MODULE_J2P__CeLEDSExporter
#define PUBLIC_JAVAMOD_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVAMOD_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_IMPORT_POST
#endif
#undef PUBLIC_JAVALIB_PRE
#undef PUBLIC_JAVALIB_POST
#ifdef IN_LIBRARY_J2P__CeLEDSExporter
#define PUBLIC_JAVALIB_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVALIB_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_IMPORT_POST
#endif
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_CodeExporter(JNIEnv* env, iface::cellml_services::CodeExporter* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_CodeExporter_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CodeExporter_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_CodeExporter_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_cellml_1services_CodeExporter_getRangeStart(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_CodeExporter_setRangeStart(JNIEnv* env, jobject thisptr, jdouble param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_cellml_1services_CodeExporter_getRangeEnd(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_CodeExporter_setRangeEnd(JNIEnv* env, jobject thisptr, jdouble param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_cellml_1services_CodeExporter_getAbsTol(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_CodeExporter_setAbsTol(JNIEnv* env, jobject thisptr, jdouble param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_cellml_1services_CodeExporter_getRelTol(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_CodeExporter_setRelTol(JNIEnv* env, jobject thisptr, jdouble param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_cellml_1services_CodeExporter_getMaxStep(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_CodeExporter_setMaxStep(JNIEnv* env, jobject thisptr, jdouble param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1services_CodeExporter_generateCode(JNIEnv* env, jobject thisptr, jobject model) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_CeLEDSExporterBootstrap(JNIEnv* env, iface::cellml_services::CeLEDSExporterBootstrap* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_CeLEDSExporterBootstrap_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CeLEDSExporterBootstrap_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_CeLEDSExporterBootstrap_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CeLEDSExporterBootstrap_createDictGenerator(JNIEnv* env, jobject thisptr, jstring URL) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CeLEDSExporterBootstrap_createDictGeneratorFromText(JNIEnv* env, jobject thisptr, jstring XMLText) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CeLEDSExporterBootstrap_createExporter(JNIEnv* env, jobject thisptr, jstring URL) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CeLEDSExporterBootstrap_createExporterFromText(JNIEnv* env, jobject thisptr, jstring XMLText) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1services_CeLEDSExporterBootstrap_getLoadError(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
#endif // not J2P__CeLEDSExporter__INCLUDED
