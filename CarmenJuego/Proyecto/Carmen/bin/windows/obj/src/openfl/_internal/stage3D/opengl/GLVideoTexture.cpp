// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLVideoTexture
#include <openfl/_internal/stage3D/opengl/GLVideoTexture.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_VideoTexture
#include <openfl/display3D/textures/VideoTexture.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4c968ed63f4ef91b_22_create,"openfl._internal.stage3D.opengl.GLVideoTexture","create",0x562bceb5,"openfl._internal.stage3D.opengl.GLVideoTexture.create","openfl/_internal/stage3D/opengl/GLVideoTexture.hx",22,0x30240f6b)
HX_LOCAL_STACK_FRAME(_hx_pos_4c968ed63f4ef91b_48_getTexture,"openfl._internal.stage3D.opengl.GLVideoTexture","getTexture",0xd13f871e,"openfl._internal.stage3D.opengl.GLVideoTexture.getTexture","openfl/_internal/stage3D/opengl/GLVideoTexture.hx",48,0x30240f6b)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace opengl{

void GLVideoTexture_obj::__construct() { }

Dynamic GLVideoTexture_obj::__CreateEmpty() { return new GLVideoTexture_obj; }

void *GLVideoTexture_obj::_hx_vtable = 0;

Dynamic GLVideoTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLVideoTexture_obj > _hx_result = new GLVideoTexture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLVideoTexture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6e532cb7;
}

void GLVideoTexture_obj::create( ::openfl::display3D::textures::VideoTexture videoTexture, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_4c968ed63f4ef91b_22_create)
HXLINE(  24)		 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
HXLINE(  25)		videoTexture->_hx___textureTarget = gl->TEXTURE_2D;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLVideoTexture_obj,create,(void))

 ::lime::graphics::opengl::GLObject GLVideoTexture_obj::getTexture( ::openfl::display3D::textures::VideoTexture videoTexture, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_4c968ed63f4ef91b_48_getTexture)
HXDLIN(  48)		return videoTexture->_hx___textureID;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLVideoTexture_obj,getTexture,return )


GLVideoTexture_obj::GLVideoTexture_obj()
{
}

bool GLVideoTexture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTexture") ) { outValue = getTexture_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLVideoTexture_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLVideoTexture_obj_sStaticStorageInfo = 0;
#endif

static void GLVideoTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLVideoTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLVideoTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLVideoTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class GLVideoTexture_obj::__mClass;

static ::String GLVideoTexture_obj_sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	::String(null())
};

void GLVideoTexture_obj::__register()
{
	hx::Object *dummy = new GLVideoTexture_obj;
	GLVideoTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.opengl.GLVideoTexture","\x95","\xbb","\x78","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLVideoTexture_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLVideoTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLVideoTexture_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLVideoTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLVideoTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLVideoTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLVideoTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace opengl