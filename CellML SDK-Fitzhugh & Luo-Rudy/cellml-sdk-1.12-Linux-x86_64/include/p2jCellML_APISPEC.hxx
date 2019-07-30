// This output is automatically generated. Do not edit.
#ifndef P2J__CellML_APISPEC__INCLUDED
#define P2J__CellML_APISPEC__INCLUDED
#include <exception>
#include "cda_compiler_support.h"
#include "pick-jni.h"
#include "IfaceCellML_APISPEC.hxx"
#include "p2jxpcom.hxx"
#ifdef MODULE_CONTAINS_P2J__CellML_APISPEC
#define PUBLIC_P2J__CellML_APISPEC_PRE CDA_EXPORT_PRE
#define PUBLIC_P2J__CellML_APISPEC_POST CDA_EXPORT_POST
#else
#define PUBLIC_P2J__CellML_APISPEC_PRE CDA_IMPORT_PRE
#define PUBLIC_P2J__CellML_APISPEC_POST CDA_IMPORT_POST
#endif
#include "p2jDOM_APISPEC.hxx"
#include "p2jMathML_content_APISPEC.hxx"
namespace p2j
{
  namespace cellml_api
  {
    class Model;
    class Group;
    class MapComponents;
    class CellMLComponent;
    class ImportComponent;
    class ImportUnits;
    class Units;
    class Unit;
    class CellMLImport;
    class CellMLVariable;
    class ComponentRef;
    class RelationshipRef;
    class Connection;
    class MapVariables;
    class Reaction;
    class ReactionSet;
    class VariableRef;
    class Role;
    class ExtensionElementList;
    class ExtensionAttributeSet;
    class MathList;
    class ModelSet;
    class CellMLElementSet;
    class CellMLComponentSet;
    class ImportComponentSet;
    class CellMLVariableSet;
    class UnitsSet;
    class CellMLImportSet;
    class ImportUnitsSet;
    class UnitSet;
    class ConnectionSet;
    class GroupSet;
    class RelationshipRefSet;
    class ComponentRefSet;
    class MapVariablesSet;
    class VariableRefSet;
    class RoleSet;
    PUBLIC_P2J__CellML_APISPEC_PRE class PUBLIC_P2J__CellML_APISPEC_POST UserData
        : public virtual ::iface::cellml_api::UserData
        , public virtual ::p2j::XPCOM::IObject
    {
    public:
      UserData() {}
      PUBLIC_P2J__CellML_APISPEC_PRE UserData(JNIEnv* aEnv, jobject aObject) PUBLIC_P2J__CellML_APISPEC_POST;
    };
    class VariableRef;
    class Role;
  };
};
#endif // not P2J__CellML_APISPEC__INCLUDED
