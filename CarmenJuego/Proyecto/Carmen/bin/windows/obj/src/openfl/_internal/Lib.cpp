// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7288ada1c7eddece_24_notImplemented,"openfl._internal.Lib","notImplemented",0xa949dbc8,"openfl._internal.Lib.notImplemented","openfl/_internal/Lib.hx",24,0xe5ec63ab)
HX_LOCAL_STACK_FRAME(_hx_pos_7288ada1c7eddece_21_boot,"openfl._internal.Lib","boot",0xa890ac4b,"openfl._internal.Lib.boot","openfl/_internal/Lib.hx",21,0xe5ec63ab)
namespace openfl{
namespace _internal{

void Lib_obj::__construct() { }

Dynamic Lib_obj::__CreateEmpty() { return new Lib_obj; }

void *Lib_obj::_hx_vtable = 0;

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Lib_obj > _hx_result = new Lib_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lib_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a0eec29;
}

 ::openfl::display::Application Lib_obj::application;

 ::openfl::display::MovieClip Lib_obj::current;

 ::haxe::ds::StringMap Lib_obj::_hx___sentWarnings;

void Lib_obj::notImplemented( ::Dynamic posInfo){
            	HX_STACKFRAME(&_hx_pos_7288ada1c7eddece_24_notImplemented)
HXLINE(  26)		::String api = ((( (::String)(posInfo->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) ) + HX_(".",2e,00,00,00)) + ( (::String)(posInfo->__Field(HX_("methodName",cc,19,0f,12),hx::paccDynamic)) ));
HXLINE(  28)		if (!(::openfl::_internal::Lib_obj::_hx___sentWarnings->exists(api))) {
HXLINE(  30)			::openfl::_internal::Lib_obj::_hx___sentWarnings->set(api,true);
HXLINE(  32)			::lime::utils::Log_obj::warn((( (::String)(posInfo->__Field(HX_("methodName",cc,19,0f,12),hx::paccDynamic)) ) + HX_(" is not implemented",1f,12,d2,b9)),posInfo);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,notImplemented,(void))


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = ( current ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { outValue = ( application ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { outValue = ( _hx___sentWarnings ); return true; }
		if (HX_FIELD_EQ(inName,"notImplemented") ) { outValue = notImplemented_dyn(); return true; }
	}
	return false;
}

bool Lib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast<  ::openfl::display::MovieClip >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=ioValue.Cast<  ::openfl::display::Application >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { _hx___sentWarnings=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Lib_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Lib_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Application*/ ,(void *) &Lib_obj::application,HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsObject /*::openfl::display::MovieClip*/ ,(void *) &Lib_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Lib_obj::_hx___sentWarnings,HX_HCSTRING("__sentWarnings","\x2f","\x1b","\x27","\x19")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Lib_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Lib_obj::application,"application");
	HX_MARK_MEMBER_NAME(Lib_obj::current,"current");
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lib_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Lib_obj::application,"application");
	HX_VISIT_MEMBER_NAME(Lib_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
};

#endif

hx::Class Lib_obj::__mClass;

static ::String Lib_obj_sStaticFields[] = {
	HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("__sentWarnings","\x2f","\x1b","\x27","\x19"),
	HX_HCSTRING("notImplemented","\x6f","\x3a","\x1a","\x27"),
	::String(null())
};

void Lib_obj::__register()
{
	hx::Object *dummy = new Lib_obj;
	Lib_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.Lib","\xf5","\x2e","\xc2","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &Lib_obj::__SetStatic;
	__mClass->mMarkFunc = Lib_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Lib_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lib_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lib_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lib_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lib_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Lib_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_7288ada1c7eddece_21_boot)
HXDLIN(  21)		_hx___sentWarnings =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace _internal