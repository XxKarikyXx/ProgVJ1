// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_ui__MultitouchInputMode_MultitouchInputMode_Impl_
#include <openfl/ui/_MultitouchInputMode/MultitouchInputMode_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_db969e8eaa4463f9_12_fromString,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","fromString",0x1bb65d6c,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.fromString","openfl/ui/MultitouchInputMode.hx",12,0x44de2b53)
HX_LOCAL_STACK_FRAME(_hx_pos_db969e8eaa4463f9_25_toString,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","toString",0xaea349fd,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.toString","openfl/ui/MultitouchInputMode.hx",25,0x44de2b53)
HX_LOCAL_STACK_FRAME(_hx_pos_db969e8eaa4463f9_6_boot,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","boot",0x3642c103,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.boot","openfl/ui/MultitouchInputMode.hx",6,0x44de2b53)
HX_LOCAL_STACK_FRAME(_hx_pos_db969e8eaa4463f9_7_boot,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","boot",0x3642c103,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.boot","openfl/ui/MultitouchInputMode.hx",7,0x44de2b53)
HX_LOCAL_STACK_FRAME(_hx_pos_db969e8eaa4463f9_8_boot,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","boot",0x3642c103,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.boot","openfl/ui/MultitouchInputMode.hx",8,0x44de2b53)
namespace openfl{
namespace ui{
namespace _MultitouchInputMode{

void MultitouchInputMode_Impl__obj::__construct() { }

Dynamic MultitouchInputMode_Impl__obj::__CreateEmpty() { return new MultitouchInputMode_Impl__obj; }

void *MultitouchInputMode_Impl__obj::_hx_vtable = 0;

Dynamic MultitouchInputMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MultitouchInputMode_Impl__obj > _hx_result = new MultitouchInputMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MultitouchInputMode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5372533b;
}

 ::Dynamic MultitouchInputMode_Impl__obj::GESTURE;

 ::Dynamic MultitouchInputMode_Impl__obj::NONE;

 ::Dynamic MultitouchInputMode_Impl__obj::TOUCH_POINT;

 ::Dynamic MultitouchInputMode_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_db969e8eaa4463f9_12_fromString)
HXDLIN(  12)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("gesture",89,da,48,a1)) ){
HXLINE(  14)			return (int)0;
HXDLIN(  14)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  15)			return (int)1;
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("touchPoint",11,98,20,c0)) ){
HXLINE(  16)			return (int)2;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  17)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  12)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MultitouchInputMode_Impl__obj,fromString,return )

::String MultitouchInputMode_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_db969e8eaa4463f9_25_toString)
HXDLIN(  25)		switch((int)(value)){
            			case (int)0: {
HXLINE(  27)				return HX_("gesture",89,da,48,a1);
            			}
            			break;
            			case (int)1: {
HXLINE(  28)				return HX_("none",b8,12,0a,49);
            			}
            			break;
            			case (int)2: {
HXLINE(  29)				return HX_("touchPoint",11,98,20,c0);
            			}
            			break;
            			default:{
HXLINE(  30)				return null();
            			}
            		}
HXLINE(  25)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MultitouchInputMode_Impl__obj,toString,return )


MultitouchInputMode_Impl__obj::MultitouchInputMode_Impl__obj()
{
}

bool MultitouchInputMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MultitouchInputMode_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo MultitouchInputMode_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &MultitouchInputMode_Impl__obj::GESTURE,HX_HCSTRING("GESTURE","\x69","\xae","\x1c","\x21")},
	{hx::fsObject /*Dynamic*/ ,(void *) &MultitouchInputMode_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &MultitouchInputMode_Impl__obj::TOUCH_POINT,HX_HCSTRING("TOUCH_POINT","\x50","\x84","\xc0","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void MultitouchInputMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MultitouchInputMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MultitouchInputMode_Impl__obj::GESTURE,"GESTURE");
	HX_MARK_MEMBER_NAME(MultitouchInputMode_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(MultitouchInputMode_Impl__obj::TOUCH_POINT,"TOUCH_POINT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MultitouchInputMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_Impl__obj::GESTURE,"GESTURE");
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_Impl__obj::TOUCH_POINT,"TOUCH_POINT");
};

#endif

hx::Class MultitouchInputMode_Impl__obj::__mClass;

static ::String MultitouchInputMode_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("GESTURE","\x69","\xae","\x1c","\x21"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("TOUCH_POINT","\x50","\x84","\xc0","\x94"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void MultitouchInputMode_Impl__obj::__register()
{
	hx::Object *dummy = new MultitouchInputMode_Impl__obj;
	MultitouchInputMode_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","\x3d","\x55","\xb8","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MultitouchInputMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MultitouchInputMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MultitouchInputMode_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MultitouchInputMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MultitouchInputMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MultitouchInputMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MultitouchInputMode_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MultitouchInputMode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_db969e8eaa4463f9_6_boot)
HXDLIN(   6)		GESTURE = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_db969e8eaa4463f9_7_boot)
HXDLIN(   7)		NONE = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_db969e8eaa4463f9_8_boot)
HXDLIN(   8)		TOUCH_POINT = (int)2;
            	}
}

} // end namespace openfl
} // end namespace ui
} // end namespace _MultitouchInputMode
