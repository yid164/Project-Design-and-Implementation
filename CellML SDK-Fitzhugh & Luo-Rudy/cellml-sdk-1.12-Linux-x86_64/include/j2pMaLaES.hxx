// This output is automatically generated. Do not edit.
#ifndef J2P__MaLaES__INCLUDED
#define J2P__MaLaES__INCLUDED
#include "pick-jni.h"
#include "j2psupport.hxx"
#include "IfaceMaLaES.hxx"
#include "j2pDOM_APISPEC.hxx"
#include "j2pMathML_content_APISPEC.hxx"
#include "j2pCellML_APISPEC.hxx"
#include "j2pCUSES.hxx"
#include "j2pAnnoTools.hxx"
#include "j2pCeVAS.hxx"
#undef PUBLIC_JAVAMOD_PRE
#undef PUBLIC_JAVAMOD_POST
#ifdef IN_MODULE_J2P__MaLaES
#define PUBLIC_JAVAMOD_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVAMOD_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_IMPORT_POST
#endif
#undef PUBLIC_JAVALIB_PRE
#undef PUBLIC_JAVALIB_POST
#ifdef IN_LIBRARY_J2P__MaLaES
#define PUBLIC_JAVALIB_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVALIB_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_IMPORT_POST
#endif
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_DegreeVariable(JNIEnv* env, iface::cellml_services::DegreeVariable* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_DegreeVariable_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_DegreeVariable_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_DegreeVariable_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_DegreeVariable_getVariable(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_cellml_1services_DegreeVariable_getDegree(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_cellml_1services_DegreeVariable_getAppearedUndelayed(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_cellml_1services_DegreeVariable_getAppearedInfinitesimallyDelayed(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_DegreeVariableIterator(JNIEnv* env, iface::cellml_services::DegreeVariableIterator* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_DegreeVariableIterator_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_DegreeVariableIterator_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_DegreeVariableIterator_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_DegreeVariableIterator_nextDegreeVariable(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_MaLaESResult(JNIEnv* env, iface::cellml_services::MaLaESResult* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_MaLaESResult_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_MaLaESResult_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_MaLaESResult_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1services_MaLaESResult_getCompileErrors(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1services_MaLaESResult_getExpression(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_cellml_1services_MaLaESResult_getSupplementariesLength(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1services_MaLaESResult_getSupplementary(JNIEnv* env, jobject thisptr, jlong index) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_MaLaESResult_iterateInvolvedVariables(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_MaLaESResult_iterateInvolvedVariablesByDegree(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_MaLaESResult_iterateBoundVariables(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_MaLaESResult_iterateLocallyBoundVariables(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_cellml_1services_MaLaESResult_getDiffDegree(JNIEnv* env, jobject thisptr, jobject aVar) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_cellml_1services_MaLaESResult_getInvolvesExternalCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_MaLaESTransform(JNIEnv* env, iface::cellml_services::MaLaESTransform* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_MaLaESTransform_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_MaLaESTransform_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_MaLaESTransform_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1services_MaLaESTransform_getCompileErrors(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_MaLaESTransform_transform(JNIEnv* env, jobject thisptr, jobject aCeVAS, jobject aCUSES, jobject aAnnos, jobject aMathML, jobject aContext, jobject aUnitsOf, jobject aBoundUnitsOf, jlong aUnitsDiffDegree) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_MaLaESTransform_stripPassthrough(JNIEnv* env, jobject thisptr, jobject aModel) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_MaLaESBootstrap(JNIEnv* env, iface::cellml_services::MaLaESBootstrap* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_MaLaESBootstrap_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_MaLaESBootstrap_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_MaLaESBootstrap_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_MaLaESBootstrap_compileTransformer(JNIEnv* env, jobject thisptr, jstring specification) PUBLIC_JAVAMOD_POST; };
#endif // not J2P__MaLaES__INCLUDED
