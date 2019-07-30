// This output is automatically generated. Do not edit.
#ifndef P2J__SRuS__INCLUDED
#define P2J__SRuS__INCLUDED
#include <exception>
#include "cda_compiler_support.h"
#include "pick-jni.h"
#include "IfaceSRuS.hxx"
#include "p2jxpcom.hxx"
#ifdef MODULE_CONTAINS_P2J__SRuS
#define PUBLIC_P2J__SRuS_PRE CDA_EXPORT_PRE
#define PUBLIC_P2J__SRuS_POST CDA_EXPORT_POST
#else
#define PUBLIC_P2J__SRuS_PRE CDA_IMPORT_PRE
#define PUBLIC_P2J__SRuS_POST CDA_IMPORT_POST
#endif
#include "p2jDOM_APISPEC.hxx"
#include "p2jMathML_content_APISPEC.hxx"
#include "p2jSProS.hxx"
namespace p2j
{
  namespace SRuS
  {
    class TransformedModel;
    class TransformedModelSet;
    class GeneratedData;
    class GeneratedDataSet;
    class GeneratedDataMonitor;
    PUBLIC_P2J__SRuS_PRE class PUBLIC_P2J__SRuS_POST GeneratedDataMonitor
        : public virtual ::iface::SRuS::GeneratedDataMonitor
        , public virtual ::p2j::XPCOM::IObject
    {
    public:
      GeneratedDataMonitor() {}
      PUBLIC_P2J__SRuS_PRE GeneratedDataMonitor(JNIEnv* aEnv, jobject aObject) PUBLIC_P2J__SRuS_POST;
      PUBLIC_P2J__SRuS_PRE void progress(iface::SRuS::GeneratedDataSet* aData) throw(std::exception&) PUBLIC_P2J__SRuS_POST;
      PUBLIC_P2J__SRuS_PRE void failure(const std::string& aErrMsg) throw(std::exception&) PUBLIC_P2J__SRuS_POST;
      PUBLIC_P2J__SRuS_PRE void done() throw(std::exception&) PUBLIC_P2J__SRuS_POST;
    };
  };
};
#endif // not P2J__SRuS__INCLUDED
