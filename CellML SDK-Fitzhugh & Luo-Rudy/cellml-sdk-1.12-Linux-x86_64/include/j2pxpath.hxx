// This output is automatically generated. Do not edit.
#ifndef J2P__xpath__INCLUDED
#define J2P__xpath__INCLUDED
#include "pick-jni.h"
#include "j2psupport.hxx"
#include "Ifacexpath.hxx"
#include "j2pDOM_APISPEC.hxx"
#undef PUBLIC_JAVAMOD_PRE
#undef PUBLIC_JAVAMOD_POST
#ifdef IN_MODULE_J2P__xpath
#define PUBLIC_JAVAMOD_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVAMOD_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_IMPORT_POST
#endif
#undef PUBLIC_JAVALIB_PRE
#undef PUBLIC_JAVALIB_POST
#ifdef IN_LIBRARY_J2P__xpath
#define PUBLIC_JAVALIB_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVALIB_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_IMPORT_POST
#endif
PUBLIC_JAVALIB_PRE jobject wrap_xpath_XPathEvaluator(JNIEnv* env, iface::xpath::XPathEvaluator* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_xpath_XPathEvaluator_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathEvaluator_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_xpath_XPathEvaluator_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathEvaluator_createExpression(JNIEnv* env, jobject thisptr, jstring expression, jobject resolver) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathEvaluator_createNSResolver(JNIEnv* env, jobject thisptr, jobject nodeResolver) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathEvaluator_evaluate(JNIEnv* env, jobject thisptr, jstring expression, jobject contextNode, jobject resolver, jint type, jobject result) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_xpath_XPathExpression(JNIEnv* env, iface::xpath::XPathExpression* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_xpath_XPathExpression_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathExpression_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_xpath_XPathExpression_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathExpression_evaluate(JNIEnv* env, jobject thisptr, jobject contextNode, jint type, jobject result) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_xpath_XPathNSResolver(JNIEnv* env, iface::xpath::XPathNSResolver* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_xpath_XPathNSResolver_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNSResolver_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_xpath_XPathNSResolver_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_xpath_XPathNSResolver_lookupNamespaceURI(JNIEnv* env, jobject thisptr, jstring prefix) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_xpath_XPathResult(JNIEnv* env, iface::xpath::XPathResult* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_xpath_XPathResult_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathResult_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_xpath_XPathResult_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_xpath_XPathResult_getResultType(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jdouble Java_pjm2pcm_xpath_XPathResult_getNumberValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_xpath_XPathResult_getStringValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_xpath_XPathResult_getBooleanValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathResult_getSingleNodeValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_xpath_XPathResult_getInvalidIteratorState(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jlong Java_pjm2pcm_xpath_XPathResult_getSnapshotLength(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathResult_iterateNext(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathResult_snapshotItem(JNIEnv* env, jobject thisptr, jlong index) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_xpath_XPathNamespace(JNIEnv* env, iface::xpath::XPathNamespace* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_xpath_XPathNamespace_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_xpath_XPathNamespace_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_getOwnerElement(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_xpath_XPathNamespace_getNodeName(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_xpath_XPathNamespace_getNodeValue(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_xpath_XPathNamespace_setNodeValue(JNIEnv* env, jobject thisptr, jstring param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_xpath_XPathNamespace_getNodeType(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_getParentNode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_getChildNodes(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_getFirstChild(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_getLastChild(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_getPreviousSibling(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_getNextSibling(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_getAttributes(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_getOwnerDocument(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_insertBefore(JNIEnv* env, jobject thisptr, jobject newChild, jobject refChild) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_replaceChild(JNIEnv* env, jobject thisptr, jobject newChild, jobject oldChild) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_removeChild(JNIEnv* env, jobject thisptr, jobject oldChild) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_appendChild(JNIEnv* env, jobject thisptr, jobject newChild) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_xpath_XPathNamespace_hasChildNodes(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_xpath_XPathNamespace_cloneNode(JNIEnv* env, jobject thisptr, jboolean deep) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_xpath_XPathNamespace_normalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_xpath_XPathNamespace_isSupported(JNIEnv* env, jobject thisptr, jstring feature, jstring version) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_xpath_XPathNamespace_getNamespaceURI(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_xpath_XPathNamespace_getPrefix(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_xpath_XPathNamespace_setPrefix(JNIEnv* env, jobject thisptr, jstring param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_xpath_XPathNamespace_getLocalName(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_xpath_XPathNamespace_hasAttributes(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
#endif // not J2P__xpath__INCLUDED
