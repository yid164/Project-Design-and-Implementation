// This output is automatically generated. Do not edit.
#ifndef J2P__CGRS__INCLUDED
#define J2P__CGRS__INCLUDED
#include "pick-jni.h"
#include "j2psupport.hxx"
#include "IfaceCGRS.hxx"
#undef PUBLIC_JAVAMOD_PRE
#undef PUBLIC_JAVAMOD_POST
#ifdef IN_MODULE_J2P__CGRS
#define PUBLIC_JAVAMOD_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVAMOD_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_IMPORT_POST
#endif
#undef PUBLIC_JAVALIB_PRE
#undef PUBLIC_JAVALIB_POST
#ifdef IN_LIBRARY_J2P__CGRS
#define PUBLIC_JAVALIB_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVALIB_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_IMPORT_POST
#endif
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_GenericsService(JNIEnv* env, iface::CGRS::GenericsService* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_GenericsService_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_GenericsService_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_GenericsService_loadGenericModule(JNIEnv* env, jobject thisptr, jstring aModulePath) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_getBootstrapByName(JNIEnv* env, jobject thisptr, jstring aBootstrapName) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_getInterfaceByName(JNIEnv* env, jobject thisptr, jstring aInterfaceName) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeString(JNIEnv* env, jobject thisptr, jstring val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeWString(JNIEnv* env, jobject thisptr, jstring val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeShort(JNIEnv* env, jobject thisptr, jshort val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeLong(JNIEnv* env, jobject thisptr, jint val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeLongLong(JNIEnv* env, jobject thisptr, jlong val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeUShort(JNIEnv* env, jobject thisptr, jint val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeULong(JNIEnv* env, jobject thisptr, jlong val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeULongLong(JNIEnv* env, jobject thisptr, jlong val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeFloat(JNIEnv* env, jobject thisptr, jfloat val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeDouble(JNIEnv* env, jobject thisptr, jdouble val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeBoolean(JNIEnv* env, jobject thisptr, jboolean val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeChar(JNIEnv* env, jobject thisptr, jchar val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeOctet(JNIEnv* env, jobject thisptr, jbyte val) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeSequence(JNIEnv* env, jobject thisptr, jobject innerType) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeEnumFromString(JNIEnv* env, jobject thisptr, jobject etype, jstring name) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeEnumFromIndex(JNIEnv* env, jobject thisptr, jobject etype, jint index) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeObject(JNIEnv* env, jobject thisptr, jobject value) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericsService_makeVoid(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_GenericInterface(JNIEnv* env, iface::CGRS::GenericInterface* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_GenericInterface_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericInterface_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_GenericInterface_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_GenericInterface_getBaseCount(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericInterface_getBase(JNIEnv* env, jobject thisptr, jint aBaseNumber) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_GenericInterface_getAttributeCount(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericInterface_getAttributeByIndex(JNIEnv* env, jobject thisptr, jint aAttributeNumber) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericInterface_getAttributeByName(JNIEnv* env, jobject thisptr, jstring aAttributeName) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_GenericInterface_getOperationCount(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericInterface_getOperationByIndex(JNIEnv* env, jobject thisptr, jint aOperationNumber) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericInterface_getOperationByName(JNIEnv* env, jobject thisptr, jstring aOperationName) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_GenericType(JNIEnv* env, iface::CGRS::GenericType* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_GenericType_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericType_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_GenericType_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_CGRS_GenericType_getAsString(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_SequenceType(JNIEnv* env, iface::CGRS::SequenceType* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_SequenceType_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_SequenceType_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_SequenceType_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_SequenceType_getInnerType(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_CGRS_SequenceType_getAsString(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_EnumType(JNIEnv* env, iface::CGRS::EnumType* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_EnumType_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_EnumType_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_EnumType_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_EnumType_getMaxIndex(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_CGRS_EnumType_indexToName(JNIEnv* env, jobject thisptr, jint index) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_EnumType_nameToIndex(JNIEnv* env, jobject thisptr, jstring name) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_CGRS_EnumType_getAsString(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_GenericValue(JNIEnv* env, iface::CGRS::GenericValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_GenericValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_GenericValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_StringValue(JNIEnv* env, iface::CGRS::StringValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_StringValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_StringValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_StringValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_CGRS_StringValue_getAsString(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_StringValue_setAsString(JNIEnv* env, jobject thisptr, jstring param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_StringValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_WStringValue(JNIEnv* env, iface::CGRS::WStringValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_WStringValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_WStringValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_WStringValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_CGRS_WStringValue_getAsWString(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_WStringValue_setAsWString(JNIEnv* env, jobject thisptr, jstring param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_WStringValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_ShortValue(JNIEnv* env, iface::CGRS::ShortValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_ShortValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_ShortValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_ShortValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jshort Java_pjm2pcm_CGRS_ShortValue_getAsShort(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_ShortValue_setAsShort(JNIEnv* env, jobject thisptr, jshort param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_ShortValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_LongValue(JNIEnv* env, iface::CGRS::LongValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_LongValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_LongValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_LongValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_LongValue_getAsLong(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_LongValue_setAsLong(JNIEnv* env, jobject thisptr, jint param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_LongValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_LongLongValue(JNIEnv* env, iface::CGRS::LongLongValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_LongLongValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_LongLongValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_LongLongValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_CGRS_LongLongValue_getAsLongLong(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_LongLongValue_setAsLongLong(JNIEnv* env, jobject thisptr, jlong param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_LongLongValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_UShortValue(JNIEnv* env, iface::CGRS::UShortValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_UShortValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_UShortValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_UShortValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_UShortValue_getAsUShort(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_UShortValue_setAsUShort(JNIEnv* env, jobject thisptr, jint param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_UShortValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_ULongValue(JNIEnv* env, iface::CGRS::ULongValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_ULongValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_ULongValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_ULongValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_CGRS_ULongValue_getAsULong(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_ULongValue_setAsULong(JNIEnv* env, jobject thisptr, jlong param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_ULongValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_ULongLongValue(JNIEnv* env, iface::CGRS::ULongLongValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_ULongLongValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_ULongLongValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_ULongLongValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_CGRS_ULongLongValue_getAsULongLong(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_ULongLongValue_setAsULongLong(JNIEnv* env, jobject thisptr, jlong param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_ULongLongValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_FloatValue(JNIEnv* env, iface::CGRS::FloatValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_FloatValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_FloatValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_FloatValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jfloat Java_pjm2pcm_CGRS_FloatValue_getAsFloat(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_FloatValue_setAsFloat(JNIEnv* env, jobject thisptr, jfloat param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_FloatValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_DoubleValue(JNIEnv* env, iface::CGRS::DoubleValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_DoubleValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_DoubleValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_DoubleValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_CGRS_DoubleValue_getAsDouble(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_DoubleValue_setAsDouble(JNIEnv* env, jobject thisptr, jdouble param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_DoubleValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_BooleanValue(JNIEnv* env, iface::CGRS::BooleanValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_BooleanValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_BooleanValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_BooleanValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_CGRS_BooleanValue_getAsBoolean(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_BooleanValue_setAsBoolean(JNIEnv* env, jobject thisptr, jboolean param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_BooleanValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_CharValue(JNIEnv* env, iface::CGRS::CharValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_CharValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_CharValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_CharValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jchar Java_pjm2pcm_CGRS_CharValue_getAsChar(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_CharValue_setAsChar(JNIEnv* env, jobject thisptr, jchar param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_CharValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_OctetValue(JNIEnv* env, iface::CGRS::OctetValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_OctetValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_OctetValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_OctetValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jbyte Java_pjm2pcm_CGRS_OctetValue_getAsOctet(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_OctetValue_setAsOctet(JNIEnv* env, jobject thisptr, jbyte param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_OctetValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_ObjectValue(JNIEnv* env, iface::CGRS::ObjectValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_ObjectValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_ObjectValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_ObjectValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_ObjectValue_getAsObject(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_ObjectValue_setAsObject(JNIEnv* env, jobject thisptr, jobject param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_ObjectValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_CallbackObjectValue(JNIEnv* env, iface::CGRS::CallbackObjectValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_CallbackObjectValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_CallbackObjectValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_CallbackObjectValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_CallbackObjectValue_invokeOnInterface(JNIEnv* env, jobject thisptr, jstring interfaceName, jstring methodName, jobject inValues, jobject outValues, jobject wasException) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_CallbackObjectValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_SequenceValue(JNIEnv* env, iface::CGRS::SequenceValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_SequenceValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_SequenceValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_SequenceValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_SequenceValue_getValueCount(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_SequenceValue_getValueByIndex(JNIEnv* env, jobject thisptr, jint index) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_SequenceValue_appendValue(JNIEnv* env, jobject thisptr, jobject v) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_SequenceValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_EnumValue(JNIEnv* env, iface::CGRS::EnumValue* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_EnumValue_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_EnumValue_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_EnumValue_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_CGRS_EnumValue_getAsString(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_EnumValue_setAsString(JNIEnv* env, jobject thisptr, jstring param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_EnumValue_getAsLong(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_EnumValue_setAsLong(JNIEnv* env, jobject thisptr, jint param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_EnumValue_getTypeOfValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_GenericAttribute(JNIEnv* env, iface::CGRS::GenericAttribute* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_GenericAttribute_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericAttribute_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_GenericAttribute_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_CGRS_GenericAttribute_getIsReadonly(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_CGRS_GenericAttribute_getName(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericAttribute_getType(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericAttribute_getGetter(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericAttribute_getSetter(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_GenericParameter(JNIEnv* env, iface::CGRS::GenericParameter* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_GenericParameter_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericParameter_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_GenericParameter_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_CGRS_GenericParameter_getIsIn(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_CGRS_GenericParameter_getIsOut(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_CGRS_GenericParameter_getName(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericParameter_getType(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_CGRS_GenericMethod(JNIEnv* env, iface::CGRS::GenericMethod* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_CGRS_GenericMethod_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericMethod_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_CGRS_GenericMethod_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericMethod_getParameters(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericMethod_getReturnType(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_CGRS_GenericMethod_invoke(JNIEnv* env, jobject thisptr, jobject invokeOn, jobject inValues, jobject outValues, jobject wasException) PUBLIC_JAVAMOD_POST; };
#endif // not J2P__CGRS__INCLUDED
