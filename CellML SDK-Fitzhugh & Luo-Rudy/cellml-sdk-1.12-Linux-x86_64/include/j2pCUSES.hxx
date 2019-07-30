// This output is automatically generated. Do not edit.
#ifndef J2P__CUSES__INCLUDED
#define J2P__CUSES__INCLUDED
#include "pick-jni.h"
#include "j2psupport.hxx"
#include "IfaceCUSES.hxx"
#include "j2pDOM_APISPEC.hxx"
#include "j2pMathML_content_APISPEC.hxx"
#include "j2pCellML_APISPEC.hxx"
#undef PUBLIC_JAVAMOD_PRE
#undef PUBLIC_JAVAMOD_POST
#ifdef IN_MODULE_J2P__CUSES
#define PUBLIC_JAVAMOD_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVAMOD_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_IMPORT_POST
#endif
#undef PUBLIC_JAVALIB_PRE
#undef PUBLIC_JAVALIB_POST
#ifdef IN_LIBRARY_J2P__CUSES
#define PUBLIC_JAVALIB_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVALIB_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_IMPORT_POST
#endif
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_BaseUnit(JNIEnv* env, iface::cellml_services::BaseUnit* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_BaseUnit_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_BaseUnit_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_BaseUnit_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1services_BaseUnit_getName(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_UserBaseUnit(JNIEnv* env, iface::cellml_services::UserBaseUnit* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_UserBaseUnit_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_UserBaseUnit_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_UserBaseUnit_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_UserBaseUnit_getCellmlUnits(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1services_UserBaseUnit_getName(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_BaseUnitInstance(JNIEnv* env, iface::cellml_services::BaseUnitInstance* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_BaseUnitInstance_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_BaseUnitInstance_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_BaseUnitInstance_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_BaseUnitInstance_getUnit(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_cellml_1services_BaseUnitInstance_getPrefix(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_cellml_1services_BaseUnitInstance_getOffset(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_cellml_1services_BaseUnitInstance_getExponent(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_CanonicalUnitRepresentation(JNIEnv* env, iface::cellml_services::CanonicalUnitRepresentation* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_CanonicalUnitRepresentation_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CanonicalUnitRepresentation_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_CanonicalUnitRepresentation_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_cellml_1services_CanonicalUnitRepresentation_getLength(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CanonicalUnitRepresentation_fetchBaseUnit(JNIEnv* env, jobject thisptr, jlong index) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_cellml_1services_CanonicalUnitRepresentation_compatibleWith(JNIEnv* env, jobject thisptr, jobject aCompareWith) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_cellml_1services_CanonicalUnitRepresentation_convertUnits(JNIEnv* env, jobject thisptr, jobject aConvertTo, jobject offset) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_cellml_1services_CanonicalUnitRepresentation_siConversion(JNIEnv* env, jobject thisptr, jobject offset) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_CanonicalUnitRepresentation_addBaseUnit(JNIEnv* env, jobject thisptr, jobject baseUnit) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CanonicalUnitRepresentation_mergeWith(JNIEnv* env, jobject thisptr, jdouble thisExponent, jobject other, jdouble otherExponent) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_CUSES(JNIEnv* env, iface::cellml_services::CUSES* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_CUSES_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CUSES_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_CUSES_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_cellml_1services_CUSES_getModelError(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CUSES_getUnitsByName(JNIEnv* env, jobject thisptr, jobject aContext, jstring aName) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CUSES_createEmptyUnits(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_cellml_services_CUSESBootstrap(JNIEnv* env, iface::cellml_services::CUSESBootstrap* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_cellml_1services_CUSESBootstrap_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CUSESBootstrap_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_cellml_1services_CUSESBootstrap_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_cellml_1services_CUSESBootstrap_createCUSESForModel(JNIEnv* env, jobject thisptr, jobject aModel, jboolean aStrict) PUBLIC_JAVAMOD_POST; };
#endif // not J2P__CUSES__INCLUDED
