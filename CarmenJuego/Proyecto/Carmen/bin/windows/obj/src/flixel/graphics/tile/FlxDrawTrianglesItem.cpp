// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#include <flixel/graphics/tile/FlxDrawTrianglesItem.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a928be64e2bd594d_20_new,"flixel.graphics.tile.FlxDrawTrianglesItem","new",0x8669d929,"flixel.graphics.tile.FlxDrawTrianglesItem.new","flixel/graphics/tile/FlxDrawTrianglesItem.hx",20,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_43_render,"flixel.graphics.tile.FlxDrawTrianglesItem","render",0xbf64462d,"flixel.graphics.tile.FlxDrawTrianglesItem.render","flixel/graphics/tile/FlxDrawTrianglesItem.hx",43,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_70_reset,"flixel.graphics.tile.FlxDrawTrianglesItem","reset",0xa508d6d8,"flixel.graphics.tile.FlxDrawTrianglesItem.reset","flixel/graphics/tile/FlxDrawTrianglesItem.hx",70,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_83_dispose,"flixel.graphics.tile.FlxDrawTrianglesItem","dispose",0xf49121e8,"flixel.graphics.tile.FlxDrawTrianglesItem.dispose","flixel/graphics/tile/FlxDrawTrianglesItem.hx",83,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_95_addTriangles,"flixel.graphics.tile.FlxDrawTrianglesItem","addTriangles",0xd3f66861,"flixel.graphics.tile.FlxDrawTrianglesItem.addTriangles","flixel/graphics/tile/FlxDrawTrianglesItem.hx",95,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_198_addQuad,"flixel.graphics.tile.FlxDrawTrianglesItem","addQuad",0xc08c1cd1,"flixel.graphics.tile.FlxDrawTrianglesItem.addQuad","flixel/graphics/tile/FlxDrawTrianglesItem.hx",198,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_283_get_numVertices,"flixel.graphics.tile.FlxDrawTrianglesItem","get_numVertices",0x2e325a3f,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numVertices","flixel/graphics/tile/FlxDrawTrianglesItem.hx",283,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_288_get_numTriangles,"flixel.graphics.tile.FlxDrawTrianglesItem","get_numTriangles",0x542b93a5,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numTriangles","flixel/graphics/tile/FlxDrawTrianglesItem.hx",288,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_171_inflateBounds,"flixel.graphics.tile.FlxDrawTrianglesItem","inflateBounds",0x8ece7465,"flixel.graphics.tile.FlxDrawTrianglesItem.inflateBounds","flixel/graphics/tile/FlxDrawTrianglesItem.hx",171,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_22_boot,"flixel.graphics.tile.FlxDrawTrianglesItem","boot",0x0e4d2b49,"flixel.graphics.tile.FlxDrawTrianglesItem.boot","flixel/graphics/tile/FlxDrawTrianglesItem.hx",22,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_23_boot,"flixel.graphics.tile.FlxDrawTrianglesItem","boot",0x0e4d2b49,"flixel.graphics.tile.FlxDrawTrianglesItem.boot","flixel/graphics/tile/FlxDrawTrianglesItem.hx",23,0x6492a666)
namespace flixel{
namespace graphics{
namespace tile{

void FlxDrawTrianglesItem_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a928be64e2bd594d_20_new)
HXLINE(  34)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  34)		_this->x = (int)0;
HXDLIN(  34)		_this->y = (int)0;
HXDLIN(  34)		_this->width = (int)0;
HXDLIN(  34)		_this->height = (int)0;
HXDLIN(  34)		 ::flixel::math::FlxRect rect = _this;
HXDLIN(  34)		rect->_inPool = false;
HXDLIN(  34)		this->bounds = rect;
HXLINE(  32)		this->colorsPosition = (int)0;
HXLINE(  31)		this->indicesPosition = (int)0;
HXLINE(  30)		this->verticesPosition = (int)0;
HXLINE(  28)		int length = null();
HXDLIN(  28)		bool fixed = null();
HXDLIN(  28)		this->colors =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,null());
HXLINE(  27)		int length1 = null();
HXDLIN(  27)		bool fixed1 = null();
HXDLIN(  27)		this->uvtData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null(),true);
HXLINE(  26)		int length2 = null();
HXDLIN(  26)		bool fixed2 = null();
HXDLIN(  26)		this->indices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length2,fixed2,null());
HXLINE(  25)		int length3 = null();
HXDLIN(  25)		bool fixed3 = null();
HXDLIN(  25)		this->vertices =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length3,fixed3,null(),true);
HXLINE(  38)		super::__construct();
HXLINE(  39)		this->type = ::flixel::graphics::tile::FlxDrawItemType_obj::TRIANGLES_dyn();
            	}

Dynamic FlxDrawTrianglesItem_obj::__CreateEmpty() { return new FlxDrawTrianglesItem_obj; }

void *FlxDrawTrianglesItem_obj::_hx_vtable = 0;

Dynamic FlxDrawTrianglesItem_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxDrawTrianglesItem_obj > _hx_result = new FlxDrawTrianglesItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDrawTrianglesItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x18d0451d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x18d0451d;
	} else {
		return inClassId==(int)0x71e7549d;
	}
}

void FlxDrawTrianglesItem_obj::render( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_43_render)
HXLINE(  44)		if (!(::flixel::FlxG_obj::renderTile)) {
HXLINE(  45)			return;
            		}
HXLINE(  47)		if ((this->get_numTriangles() <= (int)0)) {
HXLINE(  48)			return;
            		}
HXLINE(  50)		bool _hx_tmp;
HXDLIN(  50)		if (!(camera->antialiasing)) {
HXLINE(  50)			_hx_tmp = this->antialiasing;
            		}
            		else {
HXLINE(  50)			_hx_tmp = true;
            		}
HXDLIN(  50)		camera->canvas->get_graphics()->beginBitmapFill(this->graphics->bitmap,null(),true,_hx_tmp);
HXLINE(  52)		camera->canvas->get_graphics()->drawTriangles(this->vertices,this->indices,this->uvtData,(int)1);
HXLINE(  56)		camera->canvas->get_graphics()->endFill();
HXLINE(  58)		if (::flixel::FlxG_obj::debugger->drawDebug) {
HXLINE(  60)			 ::openfl::display::Graphics gfx = camera->debugLayer->get_graphics();
HXLINE(  61)			gfx->lineStyle((int)1,(int)-16776961,((Float)0.5),null(),null(),null(),null(),null());
HXLINE(  62)			gfx->drawTriangles(this->vertices,this->indices,null(),null());
            		}
HXLINE(  66)		this->super::render(camera);
            	}


void FlxDrawTrianglesItem_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_70_reset)
HXLINE(  71)		this->super::reset();
HXLINE(  72)		{
HXLINE(  72)			::Dynamic this1 = this->vertices;
HXDLIN(  72)			( ( ::openfl::_Vector::FloatVector)(this1) )->splice((int)0,this->vertices->get_length());
            		}
HXLINE(  73)		{
HXLINE(  73)			::Dynamic this2 = this->indices;
HXDLIN(  73)			( ( ::openfl::_Vector::IntVector)(this2) )->splice((int)0,this->indices->get_length());
            		}
HXLINE(  74)		{
HXLINE(  74)			::Dynamic this3 = this->uvtData;
HXDLIN(  74)			( ( ::openfl::_Vector::FloatVector)(this3) )->splice((int)0,this->uvtData->get_length());
            		}
HXLINE(  75)		{
HXLINE(  75)			::Dynamic this4 = this->colors;
HXDLIN(  75)			( ( ::openfl::_Vector::IntVector)(this4) )->splice((int)0,this->colors->get_length());
            		}
HXLINE(  77)		this->verticesPosition = (int)0;
HXLINE(  78)		this->indicesPosition = (int)0;
HXLINE(  79)		this->colorsPosition = (int)0;
            	}


void FlxDrawTrianglesItem_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_83_dispose)
HXLINE(  84)		this->super::dispose();
HXLINE(  86)		this->vertices = null();
HXLINE(  87)		this->indices = null();
HXLINE(  88)		this->uvtData = null();
HXLINE(  89)		this->colors = null();
HXLINE(  90)		this->bounds = null();
            	}


void FlxDrawTrianglesItem_obj::addTriangles( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::openfl::_Vector::IntVector colors, ::flixel::math::FlxPoint position, ::flixel::math::FlxRect cameraBounds){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_95_addTriangles)
HXLINE(  96)		if (hx::IsNull( position )) {
HXLINE(  97)			position = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::point->set(null(),null());
            		}
HXLINE(  99)		if (hx::IsNull( cameraBounds )) {
HXLINE( 100)			 ::flixel::math::FlxRect _this = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::rect;
HXDLIN( 100)			_this->x = (int)0;
HXDLIN( 100)			_this->y = (int)0;
HXDLIN( 100)			_this->width = ::flixel::FlxG_obj::width;
HXDLIN( 100)			_this->height = ::flixel::FlxG_obj::height;
HXDLIN( 100)			cameraBounds = _this;
            		}
HXLINE( 102)		int verticesLength = vertices->get_length();
HXLINE( 103)		int prevVerticesLength = this->vertices->get_length();
HXLINE( 104)		int numberOfVertices = ::Std_obj::_hx_int(((Float)verticesLength / (Float)(int)2));
HXLINE( 105)		int prevIndicesLength = this->indices->get_length();
HXLINE( 106)		int prevUVTDataLength = this->uvtData->get_length();
HXLINE( 107)		int prevColorsLength = this->colors->get_length();
HXLINE( 108)		int prevNumberOfVertices = this->get_numVertices();
HXLINE( 110)		Float tempX;
HXDLIN( 110)		Float tempY;
HXLINE( 111)		int i = (int)0;
HXLINE( 112)		int currentVertexPosition = prevVerticesLength;
HXLINE( 114)		while((i < verticesLength)){
HXLINE( 116)			Float position1 = position->x;
HXDLIN( 116)			tempX = (position1 + vertices->get(i));
HXLINE( 117)			Float position2 = position->y;
HXDLIN( 117)			tempY = (position2 + vertices->get((i + (int)1)));
HXLINE( 119)			{
HXLINE( 119)				currentVertexPosition = (currentVertexPosition + (int)1);
HXDLIN( 119)				this->vertices->set((currentVertexPosition - (int)1),tempX);
            			}
HXLINE( 120)			{
HXLINE( 120)				currentVertexPosition = (currentVertexPosition + (int)1);
HXDLIN( 120)				this->vertices->set((currentVertexPosition - (int)1),tempY);
            			}
HXLINE( 122)			if ((i == (int)0)) {
HXLINE( 124)				 ::flixel::math::FlxRect _this1 = this->bounds;
HXDLIN( 124)				_this1->x = tempX;
HXDLIN( 124)				_this1->y = tempY;
HXDLIN( 124)				_this1->width = (int)0;
HXDLIN( 124)				_this1->height = (int)0;
            			}
            			else {
HXLINE( 128)				 ::flixel::math::FlxRect bounds = this->bounds;
HXDLIN( 128)				if ((tempX < bounds->x)) {
HXLINE( 128)					 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 128)					bounds1->width = (bounds1->width + (bounds->x - tempX));
HXDLIN( 128)					bounds->x = tempX;
            				}
HXDLIN( 128)				if ((tempY < bounds->y)) {
HXLINE( 128)					 ::flixel::math::FlxRect bounds2 = bounds;
HXDLIN( 128)					bounds2->height = (bounds2->height + (bounds->y - tempY));
HXDLIN( 128)					bounds->y = tempY;
            				}
HXDLIN( 128)				if ((tempX > (bounds->x + bounds->width))) {
HXLINE( 128)					bounds->width = (tempX - bounds->x);
            				}
HXDLIN( 128)				if ((tempY > (bounds->y + bounds->height))) {
HXLINE( 128)					bounds->height = (tempY - bounds->y);
            				}
            			}
HXLINE( 131)			i = (i + (int)2);
            		}
HXLINE( 134)		 ::flixel::math::FlxRect Rect = this->bounds;
HXDLIN( 134)		bool result;
HXDLIN( 134)		bool result1;
HXDLIN( 134)		bool result2;
HXDLIN( 134)		if (((Rect->x + Rect->width) > cameraBounds->x)) {
HXLINE( 134)			Float Rect1 = Rect->x;
HXDLIN( 134)			result2 = (Rect1 < (cameraBounds->x + cameraBounds->width));
            		}
            		else {
HXLINE( 134)			result2 = false;
            		}
HXDLIN( 134)		if (result2) {
HXLINE( 134)			result1 = ((Rect->y + Rect->height) > cameraBounds->y);
            		}
            		else {
HXLINE( 134)			result1 = false;
            		}
HXDLIN( 134)		if (result1) {
HXLINE( 134)			Float Rect2 = Rect->y;
HXDLIN( 134)			result = (Rect2 < (cameraBounds->y + cameraBounds->height));
            		}
            		else {
HXLINE( 134)			result = false;
            		}
HXDLIN( 134)		if (Rect->_weak) {
HXLINE( 134)			if (!(Rect->_inPool)) {
HXLINE( 134)				Rect->_inPool = true;
HXDLIN( 134)				Rect->_weak = false;
HXDLIN( 134)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXDLIN( 134)		if (!(result)) {
HXLINE( 136)			::Dynamic this1 = this->vertices;
HXDLIN( 136)			( ( ::openfl::_Vector::FloatVector)(this1) )->splice((this->vertices->get_length() - verticesLength),verticesLength);
            		}
            		else {
HXLINE( 140)			int uvtDataLength = uvtData->get_length();
HXLINE( 141)			{
HXLINE( 141)				int _g1 = (int)0;
HXDLIN( 141)				int _g = uvtDataLength;
HXDLIN( 141)				while((_g1 < _g)){
HXLINE( 141)					_g1 = (_g1 + (int)1);
HXDLIN( 141)					int i1 = (_g1 - (int)1);
HXLINE( 143)					{
HXLINE( 143)						::Dynamic this2 = this->uvtData;
HXDLIN( 143)						( ( ::openfl::_Vector::FloatVector)(this2) )->set((prevUVTDataLength + i1),uvtData->get(i1));
            					}
            				}
            			}
HXLINE( 146)			int indicesLength = indices->get_length();
HXLINE( 147)			{
HXLINE( 147)				int _g11 = (int)0;
HXDLIN( 147)				int _g2 = indicesLength;
HXDLIN( 147)				while((_g11 < _g2)){
HXLINE( 147)					_g11 = (_g11 + (int)1);
HXDLIN( 147)					int i2 = (_g11 - (int)1);
HXLINE( 149)					{
HXLINE( 149)						::Dynamic this3 = this->indices;
HXDLIN( 149)						( ( ::openfl::_Vector::IntVector)(this3) )->set((prevIndicesLength + i2),(indices->get(i2) + prevNumberOfVertices));
            					}
            				}
            			}
HXLINE( 152)			if (this->colored) {
HXLINE( 154)				{
HXLINE( 154)					int _g12 = (int)0;
HXDLIN( 154)					int _g3 = numberOfVertices;
HXDLIN( 154)					while((_g12 < _g3)){
HXLINE( 154)						_g12 = (_g12 + (int)1);
HXDLIN( 154)						int i3 = (_g12 - (int)1);
HXLINE( 156)						{
HXLINE( 156)							::Dynamic this4 = this->colors;
HXDLIN( 156)							( ( ::openfl::_Vector::IntVector)(this4) )->set((prevColorsLength + i3),colors->get(i3));
            						}
            					}
            				}
HXLINE( 159)				 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 159)				_hx_tmp->colorsPosition = (_hx_tmp->colorsPosition + numberOfVertices);
            			}
HXLINE( 162)			 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 162)			_hx_tmp1->verticesPosition = (_hx_tmp1->verticesPosition + verticesLength);
HXLINE( 163)			 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 163)			_hx_tmp2->indicesPosition = (_hx_tmp2->indicesPosition + indicesLength);
            		}
HXLINE( 166)		if (position->_weak) {
HXLINE( 166)			position->put();
            		}
HXLINE( 167)		if (cameraBounds->_weak) {
HXLINE( 167)			if (!(cameraBounds->_inPool)) {
HXLINE( 167)				cameraBounds->_inPool = true;
HXDLIN( 167)				cameraBounds->_weak = false;
HXDLIN( 167)				::flixel::math::FlxRect_obj::_pool->putUnsafe(cameraBounds);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxDrawTrianglesItem_obj,addTriangles,(void))

void FlxDrawTrianglesItem_obj::addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_198_addQuad)
HXLINE( 199)		int prevVerticesPos = this->verticesPosition;
HXLINE( 200)		int prevIndicesPos = this->indicesPosition;
HXLINE( 201)		int prevColorsPos = this->colorsPosition;
HXLINE( 202)		int prevNumberOfVertices = this->get_numVertices();
HXLINE( 204)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 204)		point->_inPool = false;
HXDLIN( 204)		 ::flixel::math::FlxPoint point1 = point;
HXLINE( 205)		{
HXLINE( 205)			Float x1 = (point1->x * matrix->a);
HXDLIN( 205)			Float x11 = ((x1 + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 205)			Float y1 = (point1->x * matrix->b);
HXDLIN( 205)			Float y11 = ((y1 + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 205)			point1->set(x11,y11);
            		}
HXLINE( 207)		this->vertices->set(prevVerticesPos,point1->x);
HXLINE( 208)		this->vertices->set((prevVerticesPos + (int)1),point1->y);
HXLINE( 210)		this->uvtData->set(prevVerticesPos,frame->uv->x);
HXLINE( 211)		this->uvtData->set((prevVerticesPos + (int)1),frame->uv->y);
HXLINE( 213)		point1->set(frame->frame->width,(int)0);
HXLINE( 214)		{
HXLINE( 214)			Float x12 = (point1->x * matrix->a);
HXDLIN( 214)			Float x13 = ((x12 + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 214)			Float y12 = (point1->x * matrix->b);
HXDLIN( 214)			Float y13 = ((y12 + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 214)			point1->set(x13,y13);
            		}
HXLINE( 216)		this->vertices->set((prevVerticesPos + (int)2),point1->x);
HXLINE( 217)		this->vertices->set((prevVerticesPos + (int)3),point1->y);
HXLINE( 219)		this->uvtData->set((prevVerticesPos + (int)2),frame->uv->width);
HXLINE( 220)		this->uvtData->set((prevVerticesPos + (int)3),frame->uv->y);
HXLINE( 222)		point1->set(frame->frame->width,frame->frame->height);
HXLINE( 223)		{
HXLINE( 223)			Float x14 = (point1->x * matrix->a);
HXDLIN( 223)			Float x15 = ((x14 + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 223)			Float y14 = (point1->x * matrix->b);
HXDLIN( 223)			Float y15 = ((y14 + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 223)			point1->set(x15,y15);
            		}
HXLINE( 225)		this->vertices->set((prevVerticesPos + (int)4),point1->x);
HXLINE( 226)		this->vertices->set((prevVerticesPos + (int)5),point1->y);
HXLINE( 228)		this->uvtData->set((prevVerticesPos + (int)4),frame->uv->width);
HXLINE( 229)		this->uvtData->set((prevVerticesPos + (int)5),frame->uv->height);
HXLINE( 231)		point1->set((int)0,frame->frame->height);
HXLINE( 232)		{
HXLINE( 232)			Float x16 = (point1->x * matrix->a);
HXDLIN( 232)			Float x17 = ((x16 + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 232)			Float y16 = (point1->x * matrix->b);
HXDLIN( 232)			Float y17 = ((y16 + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 232)			point1->set(x17,y17);
            		}
HXLINE( 234)		this->vertices->set((prevVerticesPos + (int)6),point1->x);
HXLINE( 235)		this->vertices->set((prevVerticesPos + (int)7),point1->y);
HXLINE( 237)		point1->put();
HXLINE( 239)		this->uvtData->set((prevVerticesPos + (int)6),frame->uv->x);
HXLINE( 240)		this->uvtData->set((prevVerticesPos + (int)7),frame->uv->height);
HXLINE( 242)		this->indices->set(prevIndicesPos,prevNumberOfVertices);
HXLINE( 243)		this->indices->set((prevIndicesPos + (int)1),(prevNumberOfVertices + (int)1));
HXLINE( 244)		this->indices->set((prevIndicesPos + (int)2),(prevNumberOfVertices + (int)2));
HXLINE( 245)		this->indices->set((prevIndicesPos + (int)3),(prevNumberOfVertices + (int)2));
HXLINE( 246)		this->indices->set((prevIndicesPos + (int)4),(prevNumberOfVertices + (int)3));
HXLINE( 247)		this->indices->set((prevIndicesPos + (int)5),prevNumberOfVertices);
HXLINE( 249)		if (this->colored) {
HXLINE( 251)			Float red = ((Float)1.0);
HXLINE( 252)			Float green = ((Float)1.0);
HXLINE( 253)			Float blue = ((Float)1.0);
HXLINE( 254)			Float alpha = ((Float)1.0);
HXLINE( 256)			if (hx::IsNotNull( transform )) {
HXLINE( 258)				red = transform->redMultiplier;
HXLINE( 259)				green = transform->greenMultiplier;
HXLINE( 260)				blue = transform->blueMultiplier;
HXLINE( 263)				alpha = transform->alphaMultiplier;
            			}
HXLINE( 267)			int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 267)			{
HXLINE( 267)				int Value = ::Math_obj::round((red * (int)255));
HXDLIN( 267)				color = ((int)color & (int)(int)-16711681);
HXDLIN( 267)				int color1;
HXDLIN( 267)				if ((Value > (int)255)) {
HXLINE( 267)					color1 = (int)255;
            				}
            				else {
HXLINE( 267)					if ((Value < (int)0)) {
HXLINE( 267)						color1 = (int)0;
            					}
            					else {
HXLINE( 267)						color1 = Value;
            					}
            				}
HXDLIN( 267)				color = ((int)color | (int)((int)color1 << (int)(int)16));
            			}
HXDLIN( 267)			{
HXLINE( 267)				int Value1 = ::Math_obj::round((green * (int)255));
HXDLIN( 267)				color = ((int)color & (int)(int)-65281);
HXDLIN( 267)				int color2;
HXDLIN( 267)				if ((Value1 > (int)255)) {
HXLINE( 267)					color2 = (int)255;
            				}
            				else {
HXLINE( 267)					if ((Value1 < (int)0)) {
HXLINE( 267)						color2 = (int)0;
            					}
            					else {
HXLINE( 267)						color2 = Value1;
            					}
            				}
HXDLIN( 267)				color = ((int)color | (int)((int)color2 << (int)(int)8));
            			}
HXDLIN( 267)			{
HXLINE( 267)				int Value2 = ::Math_obj::round((blue * (int)255));
HXDLIN( 267)				color = ((int)color & (int)(int)-256);
HXDLIN( 267)				int color3;
HXDLIN( 267)				if ((Value2 > (int)255)) {
HXLINE( 267)					color3 = (int)255;
            				}
            				else {
HXLINE( 267)					if ((Value2 < (int)0)) {
HXLINE( 267)						color3 = (int)0;
            					}
            					else {
HXLINE( 267)						color3 = Value2;
            					}
            				}
HXDLIN( 267)				color = ((int)color | (int)color3);
            			}
HXDLIN( 267)			{
HXLINE( 267)				int Value3 = ::Math_obj::round((alpha * (int)255));
HXDLIN( 267)				color = ((int)color & (int)(int)16777215);
HXDLIN( 267)				int color4;
HXDLIN( 267)				if ((Value3 > (int)255)) {
HXLINE( 267)					color4 = (int)255;
            				}
            				else {
HXLINE( 267)					if ((Value3 < (int)0)) {
HXLINE( 267)						color4 = (int)0;
            					}
            					else {
HXLINE( 267)						color4 = Value3;
            					}
            				}
HXDLIN( 267)				color = ((int)color | (int)((int)color4 << (int)(int)24));
            			}
HXDLIN( 267)			int color5 = color;
HXLINE( 269)			this->colors->set(prevColorsPos,color5);
HXLINE( 270)			this->colors->set((prevColorsPos + (int)1),color5);
HXLINE( 271)			this->colors->set((prevColorsPos + (int)2),color5);
HXLINE( 272)			this->colors->set((prevColorsPos + (int)3),color5);
HXLINE( 274)			 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 274)			_hx_tmp->colorsPosition = (_hx_tmp->colorsPosition + (int)4);
            		}
HXLINE( 277)		 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 277)		_hx_tmp1->verticesPosition = (_hx_tmp1->verticesPosition + (int)8);
HXLINE( 278)		 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 278)		_hx_tmp2->indicesPosition = (_hx_tmp2->indicesPosition + (int)6);
            	}


int FlxDrawTrianglesItem_obj::get_numVertices(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_283_get_numVertices)
HXDLIN( 283)		return ::Std_obj::_hx_int(((Float)this->vertices->get_length() / (Float)(int)2));
            	}


int FlxDrawTrianglesItem_obj::get_numTriangles(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_288_get_numTriangles)
HXDLIN( 288)		return ::Std_obj::_hx_int(((Float)this->indices->get_length() / (Float)(int)3));
            	}


 ::flixel::math::FlxPoint FlxDrawTrianglesItem_obj::point;

 ::flixel::math::FlxRect FlxDrawTrianglesItem_obj::rect;

 ::flixel::math::FlxRect FlxDrawTrianglesItem_obj::inflateBounds( ::flixel::math::FlxRect bounds,Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_171_inflateBounds)
HXLINE( 172)		if ((x < bounds->x)) {
HXLINE( 174)			 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 174)			bounds1->width = (bounds1->width + (bounds->x - x));
HXLINE( 175)			bounds->x = x;
            		}
HXLINE( 178)		if ((y < bounds->y)) {
HXLINE( 180)			 ::flixel::math::FlxRect bounds2 = bounds;
HXDLIN( 180)			bounds2->height = (bounds2->height + (bounds->y - y));
HXLINE( 181)			bounds->y = y;
            		}
HXLINE( 184)		if ((x > (bounds->x + bounds->width))) {
HXLINE( 186)			bounds->width = (x - bounds->x);
            		}
HXLINE( 189)		if ((y > (bounds->y + bounds->height))) {
HXLINE( 191)			bounds->height = (y - bounds->y);
            		}
HXLINE( 194)		return bounds;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxDrawTrianglesItem_obj,inflateBounds,return )


hx::ObjectPtr< FlxDrawTrianglesItem_obj > FlxDrawTrianglesItem_obj::__new() {
	hx::ObjectPtr< FlxDrawTrianglesItem_obj > __this = new FlxDrawTrianglesItem_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxDrawTrianglesItem_obj > FlxDrawTrianglesItem_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxDrawTrianglesItem_obj *__this = (FlxDrawTrianglesItem_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxDrawTrianglesItem_obj), true, "flixel.graphics.tile.FlxDrawTrianglesItem"));
	*(void **)__this = FlxDrawTrianglesItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxDrawTrianglesItem_obj::FlxDrawTrianglesItem_obj()
{
}

void FlxDrawTrianglesItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawTrianglesItem);
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(uvtData,"uvtData");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(verticesPosition,"verticesPosition");
	HX_MARK_MEMBER_NAME(indicesPosition,"indicesPosition");
	HX_MARK_MEMBER_NAME(colorsPosition,"colorsPosition");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDrawTrianglesItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(uvtData,"uvtData");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(verticesPosition,"verticesPosition");
	HX_VISIT_MEMBER_NAME(indicesPosition,"indicesPosition");
	HX_VISIT_MEMBER_NAME(colorsPosition,"colorsPosition");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxDrawTrianglesItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { return hx::Val( colors ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return hx::Val( bounds ); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return hx::Val( indices ); }
		if (HX_FIELD_EQ(inName,"uvtData") ) { return hx::Val( uvtData ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"addQuad") ) { return hx::Val( addQuad_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return hx::Val( vertices ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTriangles") ) { return hx::Val( addTriangles_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorsPosition") ) { return hx::Val( colorsPosition ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indicesPosition") ) { return hx::Val( indicesPosition ); }
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return hx::Val( get_numVertices_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"verticesPosition") ) { return hx::Val( verticesPosition ); }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return hx::Val( get_numTriangles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxDrawTrianglesItem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { outValue = ( rect ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = ( point ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inflateBounds") ) { outValue = inflateBounds_dyn(); return true; }
	}
	return false;
}

hx::Val FlxDrawTrianglesItem_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvtData") ) { uvtData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorsPosition") ) { colorsPosition=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indicesPosition") ) { indicesPosition=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"verticesPosition") ) { verticesPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxDrawTrianglesItem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxDrawTrianglesItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("verticesPosition","\xc2","\x3d","\xe8","\xf5"));
	outFields->push(HX_HCSTRING("indicesPosition","\xf0","\xa2","\xe6","\x12"));
	outFields->push(HX_HCSTRING("colorsPosition","\x79","\x52","\xf8","\x2c"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxDrawTrianglesItem_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,vertices),HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{hx::fsObject /*::openfl::_Vector::IntVector*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,uvtData),HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27")},
	{hx::fsObject /*::openfl::_Vector::IntVector*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,verticesPosition),HX_HCSTRING("verticesPosition","\xc2","\x3d","\xe8","\xf5")},
	{hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,indicesPosition),HX_HCSTRING("indicesPosition","\xf0","\xa2","\xe6","\x12")},
	{hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,colorsPosition),HX_HCSTRING("colorsPosition","\x79","\x52","\xf8","\x2c")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxDrawTrianglesItem_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxDrawTrianglesItem_obj::point,HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxDrawTrianglesItem_obj::rect,HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxDrawTrianglesItem_obj_sMemberFields[] = {
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("verticesPosition","\xc2","\x3d","\xe8","\xf5"),
	HX_HCSTRING("indicesPosition","\xf0","\xa2","\xe6","\x12"),
	HX_HCSTRING("colorsPosition","\x79","\x52","\xf8","\x2c"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("addTriangles","\x4a","\x52","\x95","\x7e"),
	HX_HCSTRING("addQuad","\x88","\x7b","\x47","\x87"),
	HX_HCSTRING("get_numVertices","\xf6","\xc7","\x0d","\x17"),
	HX_HCSTRING("get_numTriangles","\x0e","\x26","\x50","\x2b"),
	::String(null()) };

static void FlxDrawTrianglesItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::point,"point");
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::rect,"rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDrawTrianglesItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::point,"point");
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::rect,"rect");
};

#endif

hx::Class FlxDrawTrianglesItem_obj::__mClass;

static ::String FlxDrawTrianglesItem_obj_sStaticFields[] = {
	HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("inflateBounds","\x5c","\x36","\x3c","\x2f"),
	::String(null())
};

void FlxDrawTrianglesItem_obj::__register()
{
	hx::Object *dummy = new FlxDrawTrianglesItem_obj;
	FlxDrawTrianglesItem_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.tile.FlxDrawTrianglesItem","\xb7","\x10","\x12","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDrawTrianglesItem_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxDrawTrianglesItem_obj::__SetStatic;
	__mClass->mMarkFunc = FlxDrawTrianglesItem_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxDrawTrianglesItem_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxDrawTrianglesItem_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxDrawTrianglesItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDrawTrianglesItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDrawTrianglesItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDrawTrianglesItem_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxDrawTrianglesItem_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_22_boot)
HXDLIN(  22)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  22)			point->_inPool = false;
HXDLIN(  22)			return point;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_22_boot)
HXDLIN(  22)		point =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_23_boot)
HXDLIN(  23)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  23)			_this->x = (int)0;
HXDLIN(  23)			_this->y = (int)0;
HXDLIN(  23)			_this->width = (int)0;
HXDLIN(  23)			_this->height = (int)0;
HXDLIN(  23)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  23)			rect->_inPool = false;
HXDLIN(  23)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_23_boot)
HXDLIN(  23)		rect =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile