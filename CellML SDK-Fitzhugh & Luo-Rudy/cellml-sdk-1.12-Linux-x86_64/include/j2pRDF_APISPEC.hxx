// This output is automatically generated. Do not edit.
#ifndef J2P__RDF_APISPEC__INCLUDED
#define J2P__RDF_APISPEC__INCLUDED
#include "pick-jni.h"
#include "j2psupport.hxx"
#include "IfaceRDF_APISPEC.hxx"
#include "j2pDOM_APISPEC.hxx"
#include "j2pMathML_content_APISPEC.hxx"
#include "j2pCellML_APISPEC.hxx"
#undef PUBLIC_JAVAMOD_PRE
#undef PUBLIC_JAVAMOD_POST
#ifdef IN_MODULE_J2P__RDF_APISPEC
#define PUBLIC_JAVAMOD_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVAMOD_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVAMOD_POST CDA_IMPORT_POST
#endif
#undef PUBLIC_JAVALIB_PRE
#undef PUBLIC_JAVALIB_POST
#ifdef IN_LIBRARY_J2P__RDF_APISPEC
#define PUBLIC_JAVALIB_PRE CDA_EXPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_EXPORT_POST
#else
#define PUBLIC_JAVALIB_PRE CDA_IMPORT_PRE
#define PUBLIC_JAVALIB_POST CDA_IMPORT_POST
#endif
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_DataSource(JNIEnv* env, iface::rdf_api::DataSource* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_DataSource_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_DataSource_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_DataSource_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_DataSource_getURIReference(JNIEnv* env, jobject thisptr, jstring aURI) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_DataSource_createBlankNode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_DataSource_getPlainLiteral(JNIEnv* env, jobject thisptr, jstring aForm, jstring aLanguage) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_DataSource_getTypedLiteral(JNIEnv* env, jobject thisptr, jstring aForm, jstring datatypeURI) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_DataSource_getAllTriples(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_Node(JNIEnv* env, iface::rdf_api::Node* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Node_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Node_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_Node_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Node_getTriplesInto(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Node_getTriplesIntoByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_Resource(JNIEnv* env, iface::rdf_api::Resource* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Resource_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Resource_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_Resource_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Resource_getTriplesOutOfByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Resource_getTripleOutOfByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_rdf_1api_Resource_hasTripleOutOf(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Resource_createTripleOutOf(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Resource_getTriplesOutOfByObject(JNIEnv* env, jobject thisptr, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Resource_getTriplesWherePredicate(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Resource_getTriplesWhereSubject(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Resource_getCorrespondingContainer(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Resource_findOrMakeContainer(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aContainerType) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_rdf_1api_Resource_hasTripleOutOfWithPredicateAndObject(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Resource_getTripleOutOfByPredicateAndObject(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Resource_getTriplesInto(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Resource_getTriplesIntoByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_NodeIterator(JNIEnv* env, iface::rdf_api::NodeIterator* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_NodeIterator_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_NodeIterator_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_NodeIterator_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_NodeIterator_getNextNode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_Container(JNIEnv* env, iface::rdf_api::Container* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Container_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Container_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_Container_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Container_getCorrespondingResource(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Container_getContainerType(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Container_setContainerType(JNIEnv* env, jobject thisptr, jobject param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Container_iterateChildren(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Container_appendChild(JNIEnv* env, jobject thisptr, jobject aChild) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Container_removeChild(JNIEnv* env, jobject thisptr, jobject aChild, jboolean aDoRenumbering) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Container_renumberContainer(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Container_mergeWith(JNIEnv* env, jobject thisptr, jobject aContainer) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_BlankNode(JNIEnv* env, iface::rdf_api::BlankNode* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_BlankNode_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_BlankNode_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_BlankNode_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_BlankNode_getTriplesOutOfByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_BlankNode_getTripleOutOfByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_rdf_1api_BlankNode_hasTripleOutOf(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_BlankNode_createTripleOutOf(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_BlankNode_getTriplesOutOfByObject(JNIEnv* env, jobject thisptr, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_BlankNode_getTriplesWherePredicate(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_BlankNode_getTriplesWhereSubject(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_BlankNode_getCorrespondingContainer(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_BlankNode_findOrMakeContainer(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aContainerType) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_rdf_1api_BlankNode_hasTripleOutOfWithPredicateAndObject(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_BlankNode_getTripleOutOfByPredicateAndObject(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_BlankNode_getTriplesInto(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_BlankNode_getTriplesIntoByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_URIReference(JNIEnv* env, iface::rdf_api::URIReference* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_URIReference_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_URIReference_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_URIReference_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_rdf_1api_URIReference_getURI(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_URIReference_getTriplesOutOfByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_URIReference_getTripleOutOfByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_rdf_1api_URIReference_hasTripleOutOf(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_URIReference_createTripleOutOf(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_URIReference_getTriplesOutOfByObject(JNIEnv* env, jobject thisptr, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_URIReference_getTriplesWherePredicate(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_URIReference_getTriplesWhereSubject(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_URIReference_getCorrespondingContainer(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_URIReference_findOrMakeContainer(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aContainerType) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jboolean Java_pjm2pcm_rdf_1api_URIReference_hasTripleOutOfWithPredicateAndObject(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_URIReference_getTripleOutOfByPredicateAndObject(JNIEnv* env, jobject thisptr, jobject aPredicate, jobject aObject) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_URIReference_getTriplesInto(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_URIReference_getTriplesIntoByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_Literal(JNIEnv* env, iface::rdf_api::Literal* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Literal_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Literal_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_Literal_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_rdf_1api_Literal_getLexicalForm(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Literal_getTriplesInto(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Literal_getTriplesIntoByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_PlainLiteral(JNIEnv* env, iface::rdf_api::PlainLiteral* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_PlainLiteral_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_PlainLiteral_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_PlainLiteral_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_rdf_1api_PlainLiteral_getLanguage(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_rdf_1api_PlainLiteral_getLexicalForm(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_PlainLiteral_getTriplesInto(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_PlainLiteral_getTriplesIntoByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_TypedLiteral(JNIEnv* env, iface::rdf_api::TypedLiteral* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_TypedLiteral_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_TypedLiteral_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_TypedLiteral_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_rdf_1api_TypedLiteral_getDatatypeURI(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_rdf_1api_TypedLiteral_getLexicalForm(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_TypedLiteral_getTriplesInto(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_TypedLiteral_getTriplesIntoByPredicate(JNIEnv* env, jobject thisptr, jobject aPredicate) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_Triple(JNIEnv* env, iface::rdf_api::Triple* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Triple_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Triple_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_Triple_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Triple_getSubject(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Triple_getPredicate(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Triple_getObject(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Triple_unassert(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_TripleEnumerator(JNIEnv* env, iface::rdf_api::TripleEnumerator* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_TripleEnumerator_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_TripleEnumerator_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_TripleEnumerator_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_TripleEnumerator_getNextTriple(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_TripleSet(JNIEnv* env, iface::rdf_api::TripleSet* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_TripleSet_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_TripleSet_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_TripleSet_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_TripleSet_enumerateTriples(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_Bootstrap(JNIEnv* env, iface::rdf_api::Bootstrap* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Bootstrap_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Bootstrap_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_Bootstrap_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Bootstrap_createDataSource(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_Bootstrap_parseIntoDataSource(JNIEnv* env, jobject thisptr, jobject ds, jobject root, jstring baseURI) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_Bootstrap_getDOMForDataSource(JNIEnv* env, jobject thisptr, jobject ds, jstring baseURI) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_rdf_1api_Bootstrap_serialiseDataSource(JNIEnv* env, jobject thisptr, jobject ds, jstring baseURI) PUBLIC_JAVAMOD_POST; };
PUBLIC_JAVALIB_PRE jobject wrap_rdf_api_RDFAPIRepresentation(JNIEnv* env, iface::rdf_api::RDFAPIRepresentation* obj) PUBLIC_JAVALIB_POST;
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_RDFAPIRepresentation_finalize(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_RDFAPIRepresentation_nqueryInterface(JNIEnv* env, jclass* clazz, jlong fromptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jint Java_pjm2pcm_rdf_1api_RDFAPIRepresentation_hashCode(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; }
extern "C" { PUBLIC_JAVAMOD_PRE jobject Java_pjm2pcm_rdf_1api_RDFAPIRepresentation_getSource(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE void Java_pjm2pcm_rdf_1api_RDFAPIRepresentation_setSource(JNIEnv* env, jobject thisptr, jobject param) PUBLIC_JAVAMOD_POST; };
extern "C" { PUBLIC_JAVAMOD_PRE jstring Java_pjm2pcm_rdf_1api_RDFAPIRepresentation_getType(JNIEnv* env, jobject thisptr) PUBLIC_JAVAMOD_POST; };
#endif // not J2P__RDF_APISPEC__INCLUDED
