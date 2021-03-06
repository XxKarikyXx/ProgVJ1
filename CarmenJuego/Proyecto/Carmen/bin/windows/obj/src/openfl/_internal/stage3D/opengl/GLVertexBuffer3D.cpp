// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLVertexBuffer3D
#include <openfl/_internal/stage3D/opengl/GLVertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_edda006889311a1b_26_create,"openfl._internal.stage3D.opengl.GLVertexBuffer3D","create",0xba674880,"openfl._internal.stage3D.opengl.GLVertexBuffer3D.create","openfl/_internal/stage3D/opengl/GLVertexBuffer3D.hx",26,0xa0011436)
HX_LOCAL_STACK_FRAME(_hx_pos_edda006889311a1b_43_dispose,"openfl._internal.stage3D.opengl.GLVertexBuffer3D","dispose",0x09d9f29b,"openfl._internal.stage3D.opengl.GLVertexBuffer3D.dispose","openfl/_internal/stage3D/opengl/GLVertexBuffer3D.hx",43,0xa0011436)
HX_LOCAL_STACK_FRAME(_hx_pos_edda006889311a1b_56_uploadFromByteArray,"openfl._internal.stage3D.opengl.GLVertexBuffer3D","uploadFromByteArray",0xfd0993e2,"openfl._internal.stage3D.opengl.GLVertexBuffer3D.uploadFromByteArray","openfl/_internal/stage3D/opengl/GLVertexBuffer3D.hx",56,0xa0011436)
HX_LOCAL_STACK_FRAME(_hx_pos_edda006889311a1b_66_uploadFromTypedArray,"openfl._internal.stage3D.opengl.GLVertexBuffer3D","uploadFromTypedArray",0xd3b27d3e,"openfl._internal.stage3D.opengl.GLVertexBuffer3D.uploadFromTypedArray","openfl/_internal/stage3D/opengl/GLVertexBuffer3D.hx",66,0xa0011436)
HX_LOCAL_STACK_FRAME(_hx_pos_edda006889311a1b_91_uploadFromVector,"openfl._internal.stage3D.opengl.GLVertexBuffer3D","uploadFromVector",0xc875ddb2,"openfl._internal.stage3D.opengl.GLVertexBuffer3D.uploadFromVector","openfl/_internal/stage3D/opengl/GLVertexBuffer3D.hx",91,0xa0011436)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace opengl{

void GLVertexBuffer3D_obj::__construct() { }

Dynamic GLVertexBuffer3D_obj::__CreateEmpty() { return new GLVertexBuffer3D_obj; }

void *GLVertexBuffer3D_obj::_hx_vtable = 0;

Dynamic GLVertexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLVertexBuffer3D_obj > _hx_result = new GLVertexBuffer3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLVertexBuffer3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x162428d4;
}

void GLVertexBuffer3D_obj::create( ::openfl::display3D::VertexBuffer3D vertexBuffer, ::openfl::display::OpenGLRenderer renderer, ::Dynamic bufferUsage){
            	HX_STACKFRAME(&_hx_pos_edda006889311a1b_26_create)
HXLINE(  28)		 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
HXLINE(  30)		vertexBuffer->_hx___id = gl->createBuffer();
HXLINE(  31)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  33)		vertexBuffer->_hx___stride = (vertexBuffer->_hx___vertexSize * (int)4);
HXLINE(  36)		int _hx_tmp;
HXDLIN(  36)		if (hx::IsEq( bufferUsage,(int)0 )) {
HXLINE(  36)			_hx_tmp = gl->DYNAMIC_DRAW;
            		}
            		else {
HXLINE(  36)			_hx_tmp = gl->STATIC_DRAW;
            		}
HXDLIN(  36)		vertexBuffer->_hx___usage = _hx_tmp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLVertexBuffer3D_obj,create,(void))

void GLVertexBuffer3D_obj::dispose( ::openfl::display3D::VertexBuffer3D vertexBuffer, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_edda006889311a1b_43_dispose)
HXLINE(  45)		 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
HXLINE(  47)		gl->deleteBuffer(vertexBuffer->_hx___id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLVertexBuffer3D_obj,dispose,(void))

void GLVertexBuffer3D_obj::uploadFromByteArray( ::openfl::display3D::VertexBuffer3D vertexBuffer, ::openfl::display::OpenGLRenderer renderer, ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startVertex,int numVertices){
            	HX_GC_STACKFRAME(&_hx_pos_edda006889311a1b_56_uploadFromByteArray)
HXLINE(  58)		int offset = (byteArrayOffset + (startVertex * vertexBuffer->_hx___stride));
HXLINE(  59)		int length = (numVertices * vertexBuffer->_hx___vertexSize);
HXLINE(  61)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN(  61)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  61)		if (hx::IsNotNull( buffer )) {
HXLINE(  61)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)8);
HXDLIN(  61)			int in_byteOffset = offset;
HXDLIN(  61)			if ((in_byteOffset < (int)0)) {
HXLINE(  61)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  61)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE(  61)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  61)			int bufferByteLength = buffer->length;
HXDLIN(  61)			int elementSize = _this->bytesPerElement;
HXDLIN(  61)			int newByteLength = bufferByteLength;
HXDLIN(  61)			if (hx::IsNull( length )) {
HXLINE(  61)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  61)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  61)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN(  61)				if ((newByteLength < (int)0)) {
HXLINE(  61)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
            			else {
HXLINE(  61)				newByteLength = (length * _this->bytesPerElement);
HXDLIN(  61)				int newRange = (in_byteOffset + newByteLength);
HXDLIN(  61)				if ((newRange > bufferByteLength)) {
HXLINE(  61)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN(  61)			_this->buffer = buffer;
HXDLIN(  61)			_this->byteOffset = in_byteOffset;
HXDLIN(  61)			_this->byteLength = newByteLength;
HXDLIN(  61)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN(  61)			this1 = _this;
            		}
            		else {
HXLINE(  61)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            		}
HXDLIN(  61)		::openfl::_internal::stage3D::opengl::GLVertexBuffer3D_obj::uploadFromTypedArray(vertexBuffer,renderer,this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLVertexBuffer3D_obj,uploadFromByteArray,(void))

void GLVertexBuffer3D_obj::uploadFromTypedArray( ::openfl::display3D::VertexBuffer3D vertexBuffer, ::openfl::display::OpenGLRenderer renderer, ::lime::utils::ArrayBufferView data){
            	HX_STACKFRAME(&_hx_pos_edda006889311a1b_66_uploadFromTypedArray)
HXLINE(  68)		if (hx::IsNull( data )) {
HXLINE(  68)			return;
            		}
HXLINE(  69)		 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
HXLINE(  71)		gl->bindBuffer(gl->ARRAY_BUFFER,vertexBuffer->_hx___id);
HXLINE(  72)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  77)		int gl1 = gl->ARRAY_BUFFER;
HXDLIN(  77)		int data1 = data->byteLength;
HXDLIN(  77)		gl->bufferData(gl1,data1,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(data),vertexBuffer->_hx___usage);
HXLINE(  79)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLVertexBuffer3D_obj,uploadFromTypedArray,(void))

void GLVertexBuffer3D_obj::uploadFromVector( ::openfl::display3D::VertexBuffer3D vertexBuffer, ::openfl::display::OpenGLRenderer renderer, ::openfl::_Vector::FloatVector data,int startVertex,int numVertices){
            	HX_GC_STACKFRAME(&_hx_pos_edda006889311a1b_91_uploadFromVector)
HXLINE(  93)		if (hx::IsNull( data )) {
HXLINE(  93)			return;
            		}
HXLINE(  94)		 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
HXLINE(  98)		int start = (startVertex * vertexBuffer->_hx___vertexSize);
HXLINE(  99)		int count = (numVertices * vertexBuffer->_hx___vertexSize);
HXLINE( 100)		int length = (start + count);
HXLINE( 102)		 ::lime::utils::ArrayBufferView existingFloat32Array = vertexBuffer->_hx___tempFloat32Array;
HXLINE( 104)		bool _hx_tmp;
HXDLIN( 104)		if (hx::IsNotNull( vertexBuffer->_hx___tempFloat32Array )) {
HXLINE( 104)			_hx_tmp = (vertexBuffer->_hx___tempFloat32Array->length < count);
            		}
            		else {
HXLINE( 104)			_hx_tmp = true;
            		}
HXDLIN( 104)		if (_hx_tmp) {
HXLINE( 106)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 106)			if (hx::IsNotNull( count )) {
HXLINE( 106)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,count,(int)8);
            			}
            			else {
HXLINE( 106)				HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            			}
HXDLIN( 106)			vertexBuffer->_hx___tempFloat32Array = this1;
HXLINE( 108)			if (hx::IsNotNull( existingFloat32Array )) {
HXLINE( 110)				 ::lime::utils::ArrayBufferView _this = vertexBuffer->_hx___tempFloat32Array;
HXDLIN( 110)				int offset = (int)0;
HXDLIN( 110)				if (hx::IsNotNull( existingFloat32Array )) {
HXLINE( 110)					 ::haxe::io::Bytes _this1 = _this->buffer;
HXDLIN( 110)					_this1->blit((offset * _this->bytesPerElement),existingFloat32Array->buffer,existingFloat32Array->byteOffset,existingFloat32Array->byteLength);
            				}
            				else {
HXLINE( 110)					HX_STACK_DO_THROW(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c));
            				}
            			}
            		}
HXLINE( 116)		{
HXLINE( 116)			int _g1 = start;
HXDLIN( 116)			int _g = length;
HXDLIN( 116)			while((_g1 < _g)){
HXLINE( 116)				_g1 = (_g1 + (int)1);
HXDLIN( 116)				int i = (_g1 - (int)1);
HXLINE( 118)				{
HXLINE( 118)					 ::lime::utils::ArrayBufferView this2 = vertexBuffer->_hx___tempFloat32Array;
HXDLIN( 118)					Float val = data->get(i);
HXDLIN( 118)					{
HXLINE( 118)						int this3 = this2->byteOffset;
HXDLIN( 118)						::__hxcpp_memory_set_float(this2->buffer->b,(this3 + ((i - start) * (int)4)),val);
            					}
            				}
            			}
            		}
HXLINE( 122)		::openfl::_internal::stage3D::opengl::GLVertexBuffer3D_obj::uploadFromTypedArray(vertexBuffer,renderer,vertexBuffer->_hx___tempFloat32Array);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLVertexBuffer3D_obj,uploadFromVector,(void))


GLVertexBuffer3D_obj::GLVertexBuffer3D_obj()
{
}

bool GLVertexBuffer3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { outValue = dispose_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { outValue = uploadFromVector_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { outValue = uploadFromByteArray_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { outValue = uploadFromTypedArray_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLVertexBuffer3D_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLVertexBuffer3D_obj_sStaticStorageInfo = 0;
#endif

static void GLVertexBuffer3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLVertexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLVertexBuffer3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLVertexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class GLVertexBuffer3D_obj::__mClass;

static ::String GLVertexBuffer3D_obj_sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null())
};

void GLVertexBuffer3D_obj::__register()
{
	hx::Object *dummy = new GLVertexBuffer3D_obj;
	GLVertexBuffer3D_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.opengl.GLVertexBuffer3D","\x6a","\x76","\x21","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLVertexBuffer3D_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLVertexBuffer3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLVertexBuffer3D_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLVertexBuffer3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLVertexBuffer3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLVertexBuffer3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLVertexBuffer3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace opengl
