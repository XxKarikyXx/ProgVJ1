// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DProgramType_Context3DProgramType_Impl_
#include <openfl/display3D/_Context3DProgramType/Context3DProgramType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f34d0745d06fd2f8_16_fromString,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_","fromString",0x5dd12501,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_.fromString","openfl/display3D/Context3DProgramType.hx",16,0xd8b3bd25)
HX_LOCAL_STACK_FRAME(_hx_pos_f34d0745d06fd2f8_28_toString,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_","toString",0xfbdb9252,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_.toString","openfl/display3D/Context3DProgramType.hx",28,0xd8b3bd25)
HX_LOCAL_STACK_FRAME(_hx_pos_f34d0745d06fd2f8_11_boot,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_","boot",0x8910fad8,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_.boot","openfl/display3D/Context3DProgramType.hx",11,0xd8b3bd25)
HX_LOCAL_STACK_FRAME(_hx_pos_f34d0745d06fd2f8_12_boot,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_","boot",0x8910fad8,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_.boot","openfl/display3D/Context3DProgramType.hx",12,0xd8b3bd25)
namespace openfl{
namespace display3D{
namespace _Context3DProgramType{

void Context3DProgramType_Impl__obj::__construct() { }

Dynamic Context3DProgramType_Impl__obj::__CreateEmpty() { return new Context3DProgramType_Impl__obj; }

void *Context3DProgramType_Impl__obj::_hx_vtable = 0;

Dynamic Context3DProgramType_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DProgramType_Impl__obj > _hx_result = new Context3DProgramType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DProgramType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a0b7f38;
}

 ::Dynamic Context3DProgramType_Impl__obj::FRAGMENT;

 ::Dynamic Context3DProgramType_Impl__obj::VERTEX;

 ::Dynamic Context3DProgramType_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_f34d0745d06fd2f8_16_fromString)
HXDLIN(  16)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("fragment",d0,5f,e5,ad)) ){
HXLINE(  18)			return (int)0;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("vertex",64,db,47,a1)) ){
HXLINE(  19)			return (int)1;
HXDLIN(  19)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  20)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  16)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProgramType_Impl__obj,fromString,return )

::String Context3DProgramType_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_f34d0745d06fd2f8_28_toString)
HXDLIN(  28)		switch((int)(value)){
            			case (int)0: {
HXLINE(  30)				return HX_("fragment",d0,5f,e5,ad);
            			}
            			break;
            			case (int)1: {
HXLINE(  31)				return HX_("vertex",64,db,47,a1);
            			}
            			break;
            			default:{
HXLINE(  32)				return null();
            			}
            		}
HXLINE(  28)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProgramType_Impl__obj,toString,return )


Context3DProgramType_Impl__obj::Context3DProgramType_Impl__obj()
{
}

bool Context3DProgramType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *Context3DProgramType_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Context3DProgramType_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProgramType_Impl__obj::FRAGMENT,HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProgramType_Impl__obj::VERTEX,HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Context3DProgramType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DProgramType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DProgramType_Impl__obj::FRAGMENT,"FRAGMENT");
	HX_MARK_MEMBER_NAME(Context3DProgramType_Impl__obj::VERTEX,"VERTEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DProgramType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DProgramType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DProgramType_Impl__obj::FRAGMENT,"FRAGMENT");
	HX_VISIT_MEMBER_NAME(Context3DProgramType_Impl__obj::VERTEX,"VERTEX");
};

#endif

hx::Class Context3DProgramType_Impl__obj::__mClass;

static ::String Context3DProgramType_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07"),
	HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Context3DProgramType_Impl__obj::__register()
{
	hx::Object *dummy = new Context3DProgramType_Impl__obj;
	Context3DProgramType_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_","\x88","\x6b","\xde","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DProgramType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DProgramType_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DProgramType_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DProgramType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DProgramType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DProgramType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DProgramType_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DProgramType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f34d0745d06fd2f8_11_boot)
HXDLIN(  11)		FRAGMENT = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f34d0745d06fd2f8_12_boot)
HXDLIN(  12)		VERTEX = (int)1;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DProgramType