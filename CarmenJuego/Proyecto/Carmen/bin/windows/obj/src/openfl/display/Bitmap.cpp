// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Rectangle
#include <lime/utils/ObjectPool_openfl_geom_Rectangle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMBitmap
#include <openfl/_internal/renderer/dom/DOMBitmap.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f5857023424199a6_50_new,"openfl.display.Bitmap","new",0x8bc0314b,"openfl.display.Bitmap.new","openfl/display/Bitmap.hx",50,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_69___enterFrame,"openfl.display.Bitmap","__enterFrame",0x534728ca,"openfl.display.Bitmap.__enterFrame","openfl/display/Bitmap.hx",69,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_80___getBounds,"openfl.display.Bitmap","__getBounds",0x13081c76,"openfl.display.Bitmap.__getBounds","openfl/display/Bitmap.hx",80,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_95___hitTest,"openfl.display.Bitmap","__hitTest",0x80f61450,"openfl.display.Bitmap.__hitTest","openfl/display/Bitmap.hx",95,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_128___hitTestMask,"openfl.display.Bitmap","__hitTestMask",0x7acde95c,"openfl.display.Bitmap.__hitTestMask","openfl/display/Bitmap.hx",128,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_148___renderCairo,"openfl.display.Bitmap","__renderCairo",0x941372dd,"openfl.display.Bitmap.__renderCairo","openfl/display/Bitmap.hx",148,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_177___renderCairoMask,"openfl.display.Bitmap","__renderCairoMask",0xba721269,"openfl.display.Bitmap.__renderCairoMask","openfl/display/Bitmap.hx",177,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_182___renderCanvas,"openfl.display.Bitmap","__renderCanvas",0x00421ce3,"openfl.display.Bitmap.__renderCanvas","openfl/display/Bitmap.hx",182,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_209___renderCanvasMask,"openfl.display.Bitmap","__renderCanvasMask",0x68a5376f,"openfl.display.Bitmap.__renderCanvasMask","openfl/display/Bitmap.hx",209,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_214___renderDOM,"openfl.display.Bitmap","__renderDOM",0xfdebb997,"openfl.display.Bitmap.__renderDOM","openfl/display/Bitmap.hx",214,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_238___renderDOMClear,"openfl.display.Bitmap","__renderDOMClear",0xef620476,"openfl.display.Bitmap.__renderDOMClear","openfl/display/Bitmap.hx",238,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_243___renderGL,"openfl.display.Bitmap","__renderGL",0xbc428090,"openfl.display.Bitmap.__renderGL","openfl/display/Bitmap.hx",243,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_270___renderGLMask,"openfl.display.Bitmap","__renderGLMask",0x6c65759c,"openfl.display.Bitmap.__renderGLMask","openfl/display/Bitmap.hx",270,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_275___updateCacheBitmap,"openfl.display.Bitmap","__updateCacheBitmap",0xef053813,"openfl.display.Bitmap.__updateCacheBitmap","openfl/display/Bitmap.hx",275,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_283___updateMask,"openfl.display.Bitmap","__updateMask",0x5202506a,"openfl.display.Bitmap.__updateMask","openfl/display/Bitmap.hx",283,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_317_get_bitmapData,"openfl.display.Bitmap","get_bitmapData",0x619f7ef7,"openfl.display.Bitmap.get_bitmapData","openfl/display/Bitmap.hx",317,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_322_set_bitmapData,"openfl.display.Bitmap","set_bitmapData",0x81bf676b,"openfl.display.Bitmap.set_bitmapData","openfl/display/Bitmap.hx",322,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_342_get_height,"openfl.display.Bitmap","get_height",0x5901da25,"openfl.display.Bitmap.get_height","openfl/display/Bitmap.hx",342,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_355_set_height,"openfl.display.Bitmap","set_height",0x5c7f7899,"openfl.display.Bitmap.set_height","openfl/display/Bitmap.hx",355,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_375_get_width,"openfl.display.Bitmap","get_width",0x2b347588,"openfl.display.Bitmap.get_width","openfl/display/Bitmap.hx",375,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_388_set_width,"openfl.display.Bitmap","set_width",0x0e856194,"openfl.display.Bitmap.set_width","openfl/display/Bitmap.hx",388,0x461b2743)
namespace openfl{
namespace display{

void Bitmap_obj::__construct( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_50_new)
HXLINE(  52)		super::__construct();
HXLINE(  54)		this->_hx___bitmapData = bitmapData;
HXLINE(  55)		this->pixelSnapping = pixelSnapping;
HXLINE(  56)		this->smoothing = smoothing;
HXLINE(  58)		if (hx::IsNull( pixelSnapping )) {
HXLINE(  60)			this->pixelSnapping = (int)1;
            		}
            	}

Dynamic Bitmap_obj::__CreateEmpty() { return new Bitmap_obj; }

void *Bitmap_obj::_hx_vtable = 0;

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Bitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19c29573) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19c29573;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x3b5602c1;
	}
}

void Bitmap_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_69___enterFrame)
HXDLIN(  69)		bool _hx_tmp;
HXDLIN(  69)		bool _hx_tmp1;
HXDLIN(  69)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXDLIN(  69)			_hx_tmp1 = hx::IsNotNull( this->_hx___bitmapData->image );
            		}
            		else {
HXDLIN(  69)			_hx_tmp1 = false;
            		}
HXDLIN(  69)		if (_hx_tmp1) {
HXDLIN(  69)			_hx_tmp = (this->_hx___bitmapData->image->version != this->_hx___imageVersion);
            		}
            		else {
HXDLIN(  69)			_hx_tmp = false;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  71)			if (!(this->_hx___renderDirty)) {
HXLINE(  71)				this->_hx___renderDirty = true;
HXDLIN(  71)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


void Bitmap_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_80___getBounds)
HXDLIN(  80)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE(  82)			 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get();
HXLINE(  83)			bounds->setTo((int)0,(int)0,this->_hx___bitmapData->width,this->_hx___bitmapData->height);
HXLINE(  84)			bounds->_hx___transform(bounds,matrix);
HXLINE(  86)			rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE(  88)			::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            		}
            	}


bool Bitmap_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_95___hitTest)
HXLINE(  97)		bool _hx_tmp;
HXDLIN(  97)		bool _hx_tmp1;
HXDLIN(  97)		if (!(!(hitObject->get_visible()))) {
HXLINE(  97)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE(  97)			_hx_tmp1 = true;
            		}
HXDLIN(  97)		if (!(_hx_tmp1)) {
HXLINE(  97)			_hx_tmp = hx::IsNull( this->_hx___bitmapData );
            		}
            		else {
HXLINE(  97)			_hx_tmp = true;
            		}
HXDLIN(  97)		if (_hx_tmp) {
HXLINE(  97)			return false;
            		}
HXLINE(  98)		bool _hx_tmp2;
HXDLIN(  98)		if (hx::IsNotNull( this->get_mask() )) {
HXLINE(  98)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE(  98)			_hx_tmp2 = false;
            		}
HXDLIN(  98)		if (_hx_tmp2) {
HXLINE(  98)			return false;
            		}
HXLINE( 100)		this->_hx___getRenderTransform();
HXLINE( 102)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 102)		Float norm = (_this->a * _this->d);
HXDLIN( 102)		Float norm1 = (norm - (_this->b * _this->c));
HXDLIN( 102)		Float px;
HXDLIN( 102)		if ((norm1 == (int)0)) {
HXLINE( 102)			px = -(_this->tx);
            		}
            		else {
HXLINE( 102)			Float _this1 = _this->c;
HXDLIN( 102)			Float px1 = (_this1 * (_this->ty - y));
HXDLIN( 102)			Float _this2 = _this->d;
HXDLIN( 102)			px = (((Float)((Float)1.0) / (Float)norm1) * (px1 + (_this2 * (x - _this->tx))));
            		}
HXLINE( 103)		 ::openfl::geom::Matrix _this3 = this->_hx___renderTransform;
HXDLIN( 103)		Float norm2 = (_this3->a * _this3->d);
HXDLIN( 103)		Float norm3 = (norm2 - (_this3->b * _this3->c));
HXDLIN( 103)		Float py;
HXDLIN( 103)		if ((norm3 == (int)0)) {
HXLINE( 103)			py = -(_this3->ty);
            		}
            		else {
HXLINE( 103)			Float _this4 = _this3->a;
HXDLIN( 103)			Float py1 = (_this4 * (y - _this3->ty));
HXDLIN( 103)			Float _this5 = _this3->b;
HXDLIN( 103)			py = (((Float)((Float)1.0) / (Float)norm3) * (py1 + (_this5 * (_this3->tx - x))));
            		}
HXLINE( 105)		bool _hx_tmp3;
HXDLIN( 105)		bool _hx_tmp4;
HXDLIN( 105)		bool _hx_tmp5;
HXDLIN( 105)		if ((px > (int)0)) {
HXLINE( 105)			_hx_tmp5 = (py > (int)0);
            		}
            		else {
HXLINE( 105)			_hx_tmp5 = false;
            		}
HXDLIN( 105)		if (_hx_tmp5) {
HXLINE( 105)			_hx_tmp4 = (px <= this->_hx___bitmapData->width);
            		}
            		else {
HXLINE( 105)			_hx_tmp4 = false;
            		}
HXDLIN( 105)		if (_hx_tmp4) {
HXLINE( 105)			_hx_tmp3 = (py <= this->_hx___bitmapData->height);
            		}
            		else {
HXLINE( 105)			_hx_tmp3 = false;
            		}
HXDLIN( 105)		if (_hx_tmp3) {
HXLINE( 107)			bool _hx_tmp6;
HXDLIN( 107)			if (hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 107)				_hx_tmp6 = !(this->_hx___scrollRect->contains(px,py));
            			}
            			else {
HXLINE( 107)				_hx_tmp6 = false;
            			}
HXDLIN( 107)			if (_hx_tmp6) {
HXLINE( 109)				return false;
            			}
HXLINE( 113)			bool _hx_tmp7;
HXDLIN( 113)			if (hx::IsNotNull( stack )) {
HXLINE( 113)				_hx_tmp7 = !(interactiveOnly);
            			}
            			else {
HXLINE( 113)				_hx_tmp7 = false;
            			}
HXDLIN( 113)			if (_hx_tmp7) {
HXLINE( 115)				stack->push(hitObject);
            			}
HXLINE( 119)			return true;
            		}
HXLINE( 123)		return false;
            	}


bool Bitmap_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_128___hitTestMask)
HXLINE( 130)		if (hx::IsNull( this->_hx___bitmapData )) {
HXLINE( 130)			return false;
            		}
HXLINE( 132)		this->_hx___getRenderTransform();
HXLINE( 134)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 134)		Float norm = (_this->a * _this->d);
HXDLIN( 134)		Float norm1 = (norm - (_this->b * _this->c));
HXDLIN( 134)		Float px;
HXDLIN( 134)		if ((norm1 == (int)0)) {
HXLINE( 134)			px = -(_this->tx);
            		}
            		else {
HXLINE( 134)			Float _this1 = _this->c;
HXDLIN( 134)			Float px1 = (_this1 * (_this->ty - y));
HXDLIN( 134)			Float _this2 = _this->d;
HXDLIN( 134)			px = (((Float)((Float)1.0) / (Float)norm1) * (px1 + (_this2 * (x - _this->tx))));
            		}
HXLINE( 135)		 ::openfl::geom::Matrix _this3 = this->_hx___renderTransform;
HXDLIN( 135)		Float norm2 = (_this3->a * _this3->d);
HXDLIN( 135)		Float norm3 = (norm2 - (_this3->b * _this3->c));
HXDLIN( 135)		Float py;
HXDLIN( 135)		if ((norm3 == (int)0)) {
HXLINE( 135)			py = -(_this3->ty);
            		}
            		else {
HXLINE( 135)			Float _this4 = _this3->a;
HXDLIN( 135)			Float py1 = (_this4 * (y - _this3->ty));
HXDLIN( 135)			Float _this5 = _this3->b;
HXDLIN( 135)			py = (((Float)((Float)1.0) / (Float)norm3) * (py1 + (_this5 * (_this3->tx - x))));
            		}
HXLINE( 137)		bool _hx_tmp;
HXDLIN( 137)		bool _hx_tmp1;
HXDLIN( 137)		bool _hx_tmp2;
HXDLIN( 137)		if ((px > (int)0)) {
HXLINE( 137)			_hx_tmp2 = (py > (int)0);
            		}
            		else {
HXLINE( 137)			_hx_tmp2 = false;
            		}
HXDLIN( 137)		if (_hx_tmp2) {
HXLINE( 137)			_hx_tmp1 = (px <= this->_hx___bitmapData->width);
            		}
            		else {
HXLINE( 137)			_hx_tmp1 = false;
            		}
HXDLIN( 137)		if (_hx_tmp1) {
HXLINE( 137)			_hx_tmp = (py <= this->_hx___bitmapData->height);
            		}
            		else {
HXLINE( 137)			_hx_tmp = false;
            		}
HXDLIN( 137)		if (_hx_tmp) {
HXLINE( 139)			return true;
            		}
HXLINE( 143)		return false;
            	}


void Bitmap_obj::_hx___renderCairo( ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_148___renderCairo)
HXLINE( 150)		bool _hx_tmp;
HXDLIN( 150)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 150)			_hx_tmp = hx::IsNotNull( this->_hx___bitmapData->image );
            		}
            		else {
HXLINE( 150)			_hx_tmp = false;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 152)			this->_hx___imageVersion = this->_hx___bitmapData->image->version;
            		}
HXLINE( 157)		this->_hx___updateCacheBitmap(renderer,!(this->_hx___worldColorTransform->_hx___isDefault()));
HXLINE( 159)		bool _hx_tmp1;
HXDLIN( 159)		if (hx::IsNotNull( this->_hx___cacheBitmap )) {
HXLINE( 159)			_hx_tmp1 = !(this->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 159)			_hx_tmp1 = false;
            		}
HXDLIN( 159)		if (_hx_tmp1) {
HXLINE( 161)			 ::openfl::display::Bitmap bitmap = this->_hx___cacheBitmap;
HXDLIN( 161)			if (!(!(bitmap->_hx___renderable))) {
HXLINE( 161)				Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 161)				bool _hx_tmp2;
HXDLIN( 161)				bool _hx_tmp3;
HXDLIN( 161)				if ((alpha > (int)0)) {
HXLINE( 161)					_hx_tmp3 = hx::IsNotNull( bitmap->_hx___bitmapData );
            				}
            				else {
HXLINE( 161)					_hx_tmp3 = false;
            				}
HXDLIN( 161)				if (_hx_tmp3) {
HXLINE( 161)					_hx_tmp2 = bitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXLINE( 161)					_hx_tmp2 = false;
            				}
HXDLIN( 161)				if (_hx_tmp2) {
HXLINE( 161)					 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN( 161)					renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 161)					renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN( 161)					renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 161)					 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 161)					if (hx::IsNotNull( surface )) {
HXLINE( 161)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 161)						int _hx_tmp4;
HXDLIN( 161)						bool _hx_tmp5;
HXDLIN( 161)						if (renderer->_hx___allowSmoothing) {
HXLINE( 161)							_hx_tmp5 = bitmap->smoothing;
            						}
            						else {
HXLINE( 161)							_hx_tmp5 = false;
            						}
HXDLIN( 161)						if (_hx_tmp5) {
HXLINE( 161)							_hx_tmp4 = (int)1;
            						}
            						else {
HXLINE( 161)							_hx_tmp4 = (int)3;
            						}
HXDLIN( 161)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp4);
HXDLIN( 161)						cairo->set_source(pattern);
HXDLIN( 161)						if ((alpha == (int)1)) {
HXLINE( 161)							cairo->paint();
            						}
            						else {
HXLINE( 161)							cairo->paintWithAlpha(alpha);
            						}
            					}
HXDLIN( 161)					renderer->_hx___popMaskObject(bitmap,null());
            				}
            			}
            		}
            		else {
HXLINE( 165)			if (!(!(this->_hx___renderable))) {
HXLINE( 165)				Float alpha1 = renderer->_hx___getAlpha(this->_hx___worldAlpha);
HXDLIN( 165)				bool _hx_tmp6;
HXDLIN( 165)				bool _hx_tmp7;
HXDLIN( 165)				if ((alpha1 > (int)0)) {
HXLINE( 165)					_hx_tmp7 = hx::IsNotNull( this->_hx___bitmapData );
            				}
            				else {
HXLINE( 165)					_hx_tmp7 = false;
            				}
HXDLIN( 165)				if (_hx_tmp7) {
HXLINE( 165)					_hx_tmp6 = this->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXLINE( 165)					_hx_tmp6 = false;
            				}
HXDLIN( 165)				if (_hx_tmp6) {
HXLINE( 165)					 ::lime::graphics::cairo::Cairo cairo1 = renderer->cairo;
HXDLIN( 165)					renderer->_hx___setBlendMode(this->_hx___worldBlendMode);
HXDLIN( 165)					renderer->_hx___pushMaskObject(hx::ObjectPtr<OBJ_>(this),null());
HXDLIN( 165)					renderer->applyMatrix(this->_hx___renderTransform,cairo1);
HXDLIN( 165)					 ::Dynamic surface1 = this->_hx___bitmapData->getSurface();
HXDLIN( 165)					if (hx::IsNotNull( surface1 )) {
HXLINE( 165)						 ::Dynamic pattern1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface1);
HXDLIN( 165)						int _hx_tmp8;
HXDLIN( 165)						bool _hx_tmp9;
HXDLIN( 165)						if (renderer->_hx___allowSmoothing) {
HXLINE( 165)							_hx_tmp9 = this->smoothing;
            						}
            						else {
HXLINE( 165)							_hx_tmp9 = false;
            						}
HXDLIN( 165)						if (_hx_tmp9) {
HXLINE( 165)							_hx_tmp8 = (int)1;
            						}
            						else {
HXLINE( 165)							_hx_tmp8 = (int)3;
            						}
HXDLIN( 165)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern1,_hx_tmp8);
HXDLIN( 165)						cairo1->set_source(pattern1);
HXDLIN( 165)						if ((alpha1 == (int)1)) {
HXLINE( 165)							cairo1->paint();
            						}
            						else {
HXLINE( 165)							cairo1->paintWithAlpha(alpha1);
            						}
            					}
HXDLIN( 165)					renderer->_hx___popMaskObject(hx::ObjectPtr<OBJ_>(this),null());
            				}
            			}
            		}
HXLINE( 169)		this->_hx___renderEvent(renderer);
            	}


void Bitmap_obj::_hx___renderCairoMask( ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_177___renderCairoMask)
HXDLIN( 177)		 ::lime::graphics::cairo::Cairo renderer1 = renderer->cairo;
HXDLIN( 177)		Float _hx_tmp = this->get_width();
HXDLIN( 177)		renderer1->rectangle((int)0,(int)0,_hx_tmp,this->get_height());
            	}


void Bitmap_obj::_hx___renderCanvas( ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_182___renderCanvas)
HXLINE( 184)		bool _hx_tmp;
HXDLIN( 184)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 184)			_hx_tmp = hx::IsNotNull( this->_hx___bitmapData->image );
            		}
            		else {
HXLINE( 184)			_hx_tmp = false;
            		}
HXDLIN( 184)		if (_hx_tmp) {
HXLINE( 186)			this->_hx___imageVersion = this->_hx___bitmapData->image->version;
            		}
HXLINE( 190)		this->_hx___updateCacheBitmap(renderer,!(this->_hx___worldColorTransform->_hx___isDefault()));
HXLINE( 192)		bool _hx_tmp1;
HXDLIN( 192)		if (hx::IsNotNull( this->_hx___cacheBitmap )) {
HXLINE( 192)			_hx_tmp1 = !(this->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 192)			_hx_tmp1 = false;
            		}
HXDLIN( 192)		if (_hx_tmp1) {
HXLINE( 194)			 ::openfl::display::Bitmap bitmap = this->_hx___cacheBitmap;
            		}
HXLINE( 202)		this->_hx___renderEvent(renderer);
            	}


void Bitmap_obj::_hx___renderCanvasMask( ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_209___renderCanvasMask)
HXDLIN( 209)		 ::lime::graphics::CanvasRenderContext renderer1 = renderer->context;
HXDLIN( 209)		Float _hx_tmp = this->get_width();
HXDLIN( 209)		renderer1->rect((int)0,(int)0,_hx_tmp,this->get_height());
            	}


void Bitmap_obj::_hx___renderDOM( ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_214___renderDOM)
HXLINE( 216)		this->_hx___updateCacheBitmap(renderer,!(this->_hx___worldColorTransform->_hx___isDefault()));
HXLINE( 218)		bool _hx_tmp;
HXDLIN( 218)		if (hx::IsNotNull( this->_hx___cacheBitmap )) {
HXLINE( 218)			_hx_tmp = !(this->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 218)			_hx_tmp = false;
            		}
HXDLIN( 218)		if (_hx_tmp) {
HXLINE( 220)			this->_hx___renderDOMClear(renderer);
HXLINE( 221)			this->_hx___cacheBitmap->stage = this->stage;
HXLINE( 223)			 ::openfl::display::Bitmap bitmap = this->_hx___cacheBitmap;
            		}
HXLINE( 231)		this->_hx___renderEvent(renderer);
            	}


void Bitmap_obj::_hx___renderDOMClear( ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_238___renderDOMClear)
HXDLIN( 238)		::openfl::_internal::renderer::dom::DOMBitmap_obj::clear(hx::ObjectPtr<OBJ_>(this),renderer);
            	}


void Bitmap_obj::_hx___renderGL( ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_243___renderGL)
HXLINE( 245)		bool _hx_tmp;
HXDLIN( 245)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 245)			_hx_tmp = hx::IsNotNull( this->_hx___bitmapData->image );
            		}
            		else {
HXLINE( 245)			_hx_tmp = false;
            		}
HXDLIN( 245)		if (_hx_tmp) {
HXLINE( 247)			this->_hx___imageVersion = this->_hx___bitmapData->image->version;
            		}
HXLINE( 251)		this->_hx___updateCacheBitmap(renderer,false);
HXLINE( 253)		bool _hx_tmp1;
HXDLIN( 253)		if (hx::IsNotNull( this->_hx___cacheBitmap )) {
HXLINE( 253)			_hx_tmp1 = !(this->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 253)			_hx_tmp1 = false;
            		}
HXDLIN( 253)		if (_hx_tmp1) {
HXLINE( 255)			::openfl::_internal::renderer::opengl::GLBitmap_obj::render(this->_hx___cacheBitmap,renderer);
            		}
            		else {
HXLINE( 259)			::openfl::_internal::renderer::opengl::GLBitmap_obj::render(hx::ObjectPtr<OBJ_>(this),renderer);
            		}
HXLINE( 263)		this->_hx___renderEvent(renderer);
            	}


void Bitmap_obj::_hx___renderGLMask( ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_270___renderGLMask)
HXDLIN( 270)		::openfl::_internal::renderer::opengl::GLBitmap_obj::renderMask(hx::ObjectPtr<OBJ_>(this),renderer);
            	}


bool Bitmap_obj::_hx___updateCacheBitmap( ::openfl::display::DisplayObjectRenderer renderer,bool force){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_275___updateCacheBitmap)
HXLINE( 277)		bool _hx_tmp;
HXDLIN( 277)		if (hx::IsNull( this->_hx___filters )) {
HXLINE( 277)			_hx_tmp = hx::IsEq( renderer->_hx___type,::lime::graphics::RendererType_obj::OPENGL_dyn() );
            		}
            		else {
HXLINE( 277)			_hx_tmp = false;
            		}
HXDLIN( 277)		if (_hx_tmp) {
HXLINE( 277)			return false;
            		}
HXLINE( 278)		return this->super::_hx___updateCacheBitmap(renderer,force);
            	}


void Bitmap_obj::_hx___updateMask( ::openfl::display::Graphics maskGraphics){
            	HX_GC_STACKFRAME(&_hx_pos_f5857023424199a6_283___updateMask)
HXLINE( 285)		if (hx::IsNull( this->_hx___bitmapData )) {
HXLINE( 287)			return;
            		}
HXLINE( 291)		maskGraphics->_hx___commands->overrideMatrix(this->_hx___worldTransform);
HXLINE( 292)		maskGraphics->beginFill((int)0,null());
HXLINE( 293)		maskGraphics->drawRect((int)0,(int)0,this->_hx___bitmapData->width,this->_hx___bitmapData->height);
HXLINE( 295)		if (hx::IsNull( maskGraphics->_hx___bounds )) {
HXLINE( 297)			maskGraphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 301)		this->_hx___getBounds(maskGraphics->_hx___bounds,::openfl::geom::Matrix_obj::_hx___identity);
HXLINE( 303)		this->super::_hx___updateMask(maskGraphics);
            	}


 ::openfl::display::BitmapData Bitmap_obj::get_bitmapData(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_317_get_bitmapData)
HXDLIN( 317)		return this->_hx___bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_bitmapData,return )

 ::openfl::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_322_set_bitmapData)
HXLINE( 324)		this->_hx___bitmapData = value;
HXLINE( 325)		this->smoothing = false;
HXLINE( 327)		if (!(this->_hx___renderDirty)) {
HXLINE( 327)			this->_hx___renderDirty = true;
HXDLIN( 327)			this->_hx___setParentRenderDirty();
            		}
HXLINE( 329)		bool _hx_tmp = hx::IsNotNull( this->_hx___filters );
HXLINE( 335)		this->_hx___imageVersion = (int)-1;
HXLINE( 337)		return this->_hx___bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

Float Bitmap_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_342_get_height)
HXLINE( 344)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 346)			int _hx_tmp = this->_hx___bitmapData->height;
HXDLIN( 346)			return (_hx_tmp * ::Math_obj::abs(this->get_scaleY()));
            		}
HXLINE( 350)		return (int)0;
            	}


Float Bitmap_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_355_set_height)
HXLINE( 357)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 359)			if ((value != this->_hx___bitmapData->height)) {
HXLINE( 361)				if (!(this->_hx___renderDirty)) {
HXLINE( 361)					this->_hx___renderDirty = true;
HXDLIN( 361)					this->_hx___setParentRenderDirty();
            				}
HXLINE( 362)				this->set_scaleY(((Float)value / (Float)this->_hx___bitmapData->height));
            			}
HXLINE( 366)			return value;
            		}
HXLINE( 370)		return (int)0;
            	}


Float Bitmap_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_375_get_width)
HXLINE( 377)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 379)			int _hx_tmp = this->_hx___bitmapData->width;
HXDLIN( 379)			return (_hx_tmp * ::Math_obj::abs(this->_hx___scaleX));
            		}
HXLINE( 383)		return (int)0;
            	}


Float Bitmap_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_388_set_width)
HXLINE( 390)		if (hx::IsNotNull( this->_hx___bitmapData )) {
HXLINE( 392)			if ((value != this->_hx___bitmapData->width)) {
HXLINE( 394)				if (!(this->_hx___renderDirty)) {
HXLINE( 394)					this->_hx___renderDirty = true;
HXDLIN( 394)					this->_hx___setParentRenderDirty();
            				}
HXLINE( 395)				this->set_scaleX(((Float)value / (Float)this->_hx___bitmapData->width));
            			}
HXLINE( 399)			return value;
            		}
HXLINE( 403)		return (int)0;
            	}



hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing) {
	hx::ObjectPtr< Bitmap_obj > __this = new Bitmap_obj();
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing) {
	Bitmap_obj *__this = (Bitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bitmap_obj), true, "openfl.display.Bitmap"));
	*(void **)__this = Bitmap_obj::_hx_vtable;
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_MARK_MEMBER_NAME(_hx___imageVersion,"__imageVersion");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_VISIT_MEMBER_NAME(_hx___imageVersion,"__imageVersion");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return hx::Val( smoothing ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_bitmapData() ); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return hx::Val( _hx___renderGL_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return hx::Val( _hx___renderDOM_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { return hx::Val( _hx___bitmapData ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return hx::Val( _hx___enterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return hx::Val( _hx___updateMask_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return hx::Val( pixelSnapping ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return hx::Val( _hx___hitTestMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return hx::Val( _hx___renderCairo_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__imageVersion") ) { return hx::Val( _hx___imageVersion ); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return hx::Val( _hx___renderCanvas_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderGLMask") ) { return hx::Val( _hx___renderGLMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bitmapData") ) { return hx::Val( get_bitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return hx::Val( set_bitmapData_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__renderDOMClear") ) { return hx::Val( _hx___renderDOMClear_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return hx::Val( _hx___renderCairoMask_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return hx::Val( _hx___renderCanvasMask_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__updateCacheBitmap") ) { return hx::Val( _hx___updateCacheBitmap_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Bitmap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bitmapData(inValue.Cast<  ::openfl::display::BitmapData >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { _hx___bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__imageVersion") ) { _hx___imageVersion=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("__bitmapData","\xd9","\x30","\x54","\x6c"));
	outFields->push(HX_HCSTRING("__imageVersion","\x1d","\xe4","\x7a","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Bitmap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,_hx___bitmapData),HX_HCSTRING("__bitmapData","\xd9","\x30","\x54","\x6c")},
	{hx::fsInt,(int)offsetof(Bitmap_obj,_hx___imageVersion),HX_HCSTRING("__imageVersion","\x1d","\xe4","\x7a","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Bitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String Bitmap_obj_sMemberFields[] = {
	HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("__bitmapData","\xd9","\x30","\x54","\x6c"),
	HX_HCSTRING("__imageVersion","\x1d","\xe4","\x7a","\x8d"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderDOMClear","\x41","\xdc","\xee","\x79"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__renderGLMask","\xa7","\x34","\x7c","\xb4"),
	HX_HCSTRING("__updateCacheBitmap","\x28","\x11","\x07","\x27"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("get_bitmapData","\x02","\x3e","\xb6","\xa9"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	::String(null()) };

static void Bitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Bitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Object *dummy = new Bitmap_obj;
	Bitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Bitmap","\xd9","\x2f","\x4d","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Bitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Bitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Bitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
