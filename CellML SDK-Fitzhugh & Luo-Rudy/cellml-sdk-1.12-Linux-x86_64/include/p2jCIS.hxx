// This output is automatically generated. Do not edit.
#ifndef P2J__CIS__INCLUDED
#define P2J__CIS__INCLUDED
#include <exception>
#include "cda_compiler_support.h"
#include "pick-jni.h"
#include "IfaceCIS.hxx"
#include "p2jxpcom.hxx"
#ifdef MODULE_CONTAINS_P2J__CIS
#define PUBLIC_P2J__CIS_PRE CDA_EXPORT_PRE
#define PUBLIC_P2J__CIS_POST CDA_EXPORT_POST
#else
#define PUBLIC_P2J__CIS_PRE CDA_IMPORT_PRE
#define PUBLIC_P2J__CIS_POST CDA_IMPORT_POST
#endif
#include "p2jDOM_APISPEC.hxx"
#include "p2jMathML_content_APISPEC.hxx"
#include "p2jCellML_APISPEC.hxx"
#include "p2jCUSES.hxx"
#include "p2jAnnoTools.hxx"
#include "p2jCeVAS.hxx"
#include "p2jMaLaES.hxx"
#include "p2jCCGS.hxx"
namespace p2j
{
  namespace cellml_services
  {
    PUBLIC_P2J__CIS_PRE class PUBLIC_P2J__CIS_POST IntegrationProgressObserver
        : public ::iface::cellml_services::IntegrationProgressObserver
        , public ::p2j::XPCOM::IObject
    {
    public:
      IntegrationProgressObserver() {}
      PUBLIC_P2J__CIS_PRE IntegrationProgressObserver(JNIEnv* aEnv, jobject aObject) PUBLIC_P2J__CIS_POST;
      PUBLIC_P2J__CIS_PRE void computedConstants(const std::vector<double>& values) throw(std::exception&) PUBLIC_P2J__CIS_POST;
      PUBLIC_P2J__CIS_PRE void results(const std::vector<double>& state) throw(std::exception&) PUBLIC_P2J__CIS_POST;
      PUBLIC_P2J__CIS_PRE void done() throw(std::exception&) PUBLIC_P2J__CIS_POST;
      PUBLIC_P2J__CIS_PRE void failed(const std::string& errorMessage) throw(std::exception&) PUBLIC_P2J__CIS_POST;
    };
  };
};
#endif // not P2J__CIS__INCLUDED
