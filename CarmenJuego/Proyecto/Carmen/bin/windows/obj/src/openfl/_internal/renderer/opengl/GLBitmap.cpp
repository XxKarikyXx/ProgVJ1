// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskShader
#include <openfl/_internal/renderer/opengl/GLMaskShader.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9c60723403252d5b_30_render,"openfl._internal.renderer.opengl.GLBitmap","render",0x8d0c282c,"openfl._internal.renderer.opengl.GLBitmap.render","openfl/_internal/renderer/opengl/GLBitmap.hx",30,0x02850ac4)
HX_LOCAL_STACK_FRAME(_hx_pos_9c60723403252d5b_71_renderMask,"openfl._internal.renderer.opengl.GLBitmap","renderMask",0x93111b38,"openfl._internal.renderer.opengl.GLBitmap.renderMask","openfl/_internal/renderer/opengl/GLBitmap.hx",71,0x02850ac4)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLBitmap_obj::__construct() { }

Dynamic GLBitmap_obj::__CreateEmpty() { return new GLBitmap_obj; }

void *GLBitmap_obj::_hx_vtable = 0;

Dynamic GLBitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLBitmap_obj > _hx_result = new GLBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLBitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ef700ce;
}

void GLBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_9c60723403252d5b_30_render)
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		if (!(!(bitmap->_hx___renderable))) {
HXLINE(  32)			_hx_tmp = (bitmap->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  32)			_hx_tmp = true;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  32)			return;
            		}
HXLINE(  34)		bool _hx_tmp1;
HXDLIN(  34)		if (hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXLINE(  34)			_hx_tmp1 = bitmap->_hx___bitmapData->_hx___isValid;
            		}
            		else {
HXLINE(  34)			_hx_tmp1 = false;
            		}
HXDLIN(  34)		if (_hx_tmp1) {
HXLINE(  36)			 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
HXLINE(  38)			renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXLINE(  39)			renderer->_hx___pushMaskObject(bitmap,null());
HXLINE(  42)			 ::openfl::display::Shader shader = renderer->_hx___initDisplayShader(bitmap->_hx___worldShader);
HXLINE(  43)			renderer->setShader(shader);
HXLINE(  44)			bool _hx_tmp2;
HXDLIN(  44)			if (renderer->_hx___allowSmoothing) {
HXLINE(  44)				if (!(bitmap->smoothing)) {
HXLINE(  44)					_hx_tmp2 = renderer->_hx___upscaled;
            				}
            				else {
HXLINE(  44)					_hx_tmp2 = true;
            				}
            			}
            			else {
HXLINE(  44)				_hx_tmp2 = false;
            			}
HXDLIN(  44)			renderer->applyBitmapData(bitmap->_hx___bitmapData,_hx_tmp2,null());
HXLINE(  45)			renderer->applyMatrix(renderer->_hx___getMatrix(bitmap->_hx___renderTransform));
HXLINE(  46)			renderer->applyAlpha(bitmap->_hx___worldAlpha);
HXLINE(  47)			renderer->applyColorTransform(bitmap->_hx___worldColorTransform);
HXLINE(  48)			renderer->updateShader();
HXLINE(  50)			int gl1 = gl->ARRAY_BUFFER;
HXDLIN(  50)			gl->bindBuffer(gl1,bitmap->_hx___bitmapData->getBuffer(gl));
HXLINE(  51)			if (hx::IsNotNull( shader->_hx___position )) {
HXLINE(  51)				int shader1 = shader->_hx___position->index;
HXDLIN(  51)				int gl2 = gl->FLOAT;
HXDLIN(  51)				gl->vertexAttribPointer(shader1,(int)3,gl2,false,(int)56,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0));
            			}
HXLINE(  52)			if (hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE(  52)				int shader2 = shader->_hx___textureCoord->index;
HXDLIN(  52)				int gl3 = gl->FLOAT;
HXDLIN(  52)				gl->vertexAttribPointer(shader2,(int)2,gl3,false,(int)56,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)12));
            			}
HXLINE(  53)			gl->drawArrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
HXLINE(  59)			renderer->_hx___clearShader();
HXLINE(  62)			renderer->_hx___popMaskObject(bitmap,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,render,(void))

void GLBitmap_obj::renderMask( ::openfl::display::Bitmap bitmap, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_9c60723403252d5b_71_renderMask)
HXDLIN(  71)		bool _hx_tmp;
HXDLIN(  71)		if (hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXDLIN(  71)			_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            		}
            		else {
HXDLIN(  71)			_hx_tmp = false;
            		}
HXDLIN(  71)		if (_hx_tmp) {
HXLINE(  73)			 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
HXLINE(  75)			 ::openfl::_internal::renderer::opengl::GLMaskShader shader = renderer->_hx___maskShader;
HXLINE(  76)			renderer->setShader(shader);
HXLINE(  77)			renderer->applyBitmapData(::openfl::_internal::renderer::opengl::GLMaskShader_obj::opaqueBitmapData,true,null());
HXLINE(  78)			renderer->applyMatrix(renderer->_hx___getMatrix(bitmap->_hx___renderTransform));
HXLINE(  79)			renderer->updateShader();
HXLINE(  81)			int gl1 = gl->ARRAY_BUFFER;
HXDLIN(  81)			gl->bindBuffer(gl1,bitmap->_hx___bitmapData->getBuffer(gl));
HXLINE(  82)			int shader1 = shader->_hx___position->index;
HXDLIN(  82)			int gl2 = gl->FLOAT;
HXDLIN(  82)			gl->vertexAttribPointer(shader1,(int)3,gl2,false,(int)56,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0));
HXLINE(  83)			int shader2 = shader->_hx___textureCoord->index;
HXDLIN(  83)			int gl3 = gl->FLOAT;
HXDLIN(  83)			gl->vertexAttribPointer(shader2,(int)2,gl3,false,(int)56,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)12));
HXLINE(  84)			gl->drawArrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
HXLINE(  90)			renderer->_hx___clearShader();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,renderMask,(void))


GLBitmap_obj::GLBitmap_obj()
{
}

bool GLBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLBitmap_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLBitmap_obj_sStaticStorageInfo = 0;
#endif

static void GLBitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLBitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBitmap_obj::__mClass;

static ::String GLBitmap_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null())
};

void GLBitmap_obj::__register()
{
	hx::Object *dummy = new GLBitmap_obj;
	GLBitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLBitmap","\xd8","\x64","\xbd","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLBitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLBitmap_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLBitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLBitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLBitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl