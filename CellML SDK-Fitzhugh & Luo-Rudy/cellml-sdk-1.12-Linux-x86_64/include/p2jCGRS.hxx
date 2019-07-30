// This output is automatically generated. Do not edit.
#ifndef P2J__CGRS__INCLUDED
#define P2J__CGRS__INCLUDED
#include <exception>
#include "cda_compiler_support.h"
#include "pick-jni.h"
#include "IfaceCGRS.hxx"
#include "p2jxpcom.hxx"
#ifdef MODULE_CONTAINS_P2J__CGRS
#define PUBLIC_P2J__CGRS_PRE CDA_EXPORT_PRE
#define PUBLIC_P2J__CGRS_POST CDA_EXPORT_POST
#else
#define PUBLIC_P2J__CGRS_PRE CDA_IMPORT_PRE
#define PUBLIC_P2J__CGRS_POST CDA_IMPORT_POST
#endif
namespace p2j
{
  namespace CGRS
  {
    class GenericAttribute;
    class GenericMethod;
    class GenericValue;
    class GenericInterface;
    class StringValue;
    class WStringValue;
    class ShortValue;
    class LongValue;
    class LongLongValue;
    class UShortValue;
    class ULongValue;
    class ULongLongValue;
    class FloatValue;
    class DoubleValue;
    class BooleanValue;
    class CharValue;
    class OctetValue;
    class SequenceValue;
    class SequenceType;
    class EnumValue;
    class EnumType;
    class ObjectValue;
    class GenericType;
    PUBLIC_P2J__CGRS_PRE class PUBLIC_P2J__CGRS_POST GenericValue
        : public virtual ::iface::CGRS::GenericValue
        , public virtual ::p2j::XPCOM::IObject
    {
    public:
      GenericValue() {}
      PUBLIC_P2J__CGRS_PRE GenericValue(JNIEnv* aEnv, jobject aObject) PUBLIC_P2J__CGRS_POST;
      PUBLIC_P2J__CGRS_PRE already_AddRefd<iface::CGRS::GenericType> typeOfValue() throw(std::exception&) PUBLIC_P2J__CGRS_POST;
    };
    PUBLIC_P2J__CGRS_PRE class PUBLIC_P2J__CGRS_POST CallbackObjectValue
        : public virtual ::iface::CGRS::CallbackObjectValue
        , public ::p2j::CGRS::GenericValue
    {
    public:
      CallbackObjectValue() {}
      PUBLIC_P2J__CGRS_PRE CallbackObjectValue(JNIEnv* aEnv, jobject aObject) PUBLIC_P2J__CGRS_POST;
      PUBLIC_P2J__CGRS_PRE already_AddRefd<iface::CGRS::GenericValue> invokeOnInterface(const std::string& interfaceName, const std::string& methodName, const std::vector<iface::CGRS::GenericValue*>& inValues, std::vector<iface::CGRS::GenericValue*>& outValues, bool* wasException) throw(std::exception&) PUBLIC_P2J__CGRS_POST;
    };
  };
};
#endif // not P2J__CGRS__INCLUDED
