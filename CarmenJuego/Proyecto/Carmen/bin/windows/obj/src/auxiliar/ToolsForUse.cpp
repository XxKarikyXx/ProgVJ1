// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_auxiliar_ToolsForUse
#include <auxiliar/ToolsForUse.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e5a7abf282253391_11_IsInsideCircle,"auxiliar.ToolsForUse","IsInsideCircle",0xffe05286,"auxiliar.ToolsForUse.IsInsideCircle","auxiliar/ToolsForUse.hx",11,0x418f0701)
namespace auxiliar{

void ToolsForUse_obj::__construct() { }

Dynamic ToolsForUse_obj::__CreateEmpty() { return new ToolsForUse_obj; }

void *ToolsForUse_obj::_hx_vtable = 0;

Dynamic ToolsForUse_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ToolsForUse_obj > _hx_result = new ToolsForUse_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ToolsForUse_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x719dfc66;
}

bool ToolsForUse_obj::IsInsideCircle(Float centeraX,Float centeraY,Float aX,Float aY,Float aRad){
            	HX_STACKFRAME(&_hx_pos_e5a7abf282253391_11_IsInsideCircle)
HXLINE(  13)		Float ecuationA = ::Math_obj::pow((centeraX - aX),(int)2);
HXDLIN(  13)		Float ecuationA1 = (ecuationA + ::Math_obj::pow((centeraY - aY),(int)2));
HXLINE(  15)		if ((::Math_obj::sqrt(ecuationA1) < aRad)) {
HXLINE(  17)			return true;
            		}
HXLINE(  21)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ToolsForUse_obj,IsInsideCircle,return )


ToolsForUse_obj::ToolsForUse_obj()
{
}

bool ToolsForUse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"IsInsideCircle") ) { outValue = IsInsideCircle_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ToolsForUse_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ToolsForUse_obj_sStaticStorageInfo = 0;
#endif

static void ToolsForUse_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolsForUse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ToolsForUse_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolsForUse_obj::__mClass,"__mClass");
};

#endif

hx::Class ToolsForUse_obj::__mClass;

static ::String ToolsForUse_obj_sStaticFields[] = {
	HX_HCSTRING("IsInsideCircle","\x56","\xbe","\xd3","\x28"),
	::String(null())
};

void ToolsForUse_obj::__register()
{
	hx::Object *dummy = new ToolsForUse_obj;
	ToolsForUse_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("auxiliar.ToolsForUse","\x3e","\xd6","\xb4","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ToolsForUse_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ToolsForUse_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ToolsForUse_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ToolsForUse_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ToolsForUse_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToolsForUse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToolsForUse_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace auxiliar