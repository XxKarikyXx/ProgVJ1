// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_TileContainer
#include <openfl/display/TileContainer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_27_new,"openfl.display.TileContainer","new",0x2eee5efb,"openfl.display.TileContainer.new","openfl/display/TileContainer.hx",27,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_37_addTile,"openfl.display.TileContainer","addTile",0x324f860a,"openfl.display.TileContainer.addTile","openfl/display/TileContainer.hx",37,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_59_addTileAt,"openfl.display.TileContainer","addTileAt",0x09c4d59d,"openfl.display.TileContainer.addTileAt","openfl/display/TileContainer.hx",59,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_81_addTiles,"openfl.display.TileContainer","addTiles",0xd345c329,"openfl.display.TileContainer.addTiles","openfl/display/TileContainer.hx",81,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_92_clone,"openfl.display.TileContainer","clone",0x3db2beb8,"openfl.display.TileContainer.clone","openfl/display/TileContainer.hx",92,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_105_contains,"openfl.display.TileContainer","contains",0x762ef9a4,"openfl.display.TileContainer.contains","openfl/display/TileContainer.hx",105,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_110_getTileAt,"openfl.display.TileContainer","getTileAt",0xcdf729d2,"openfl.display.TileContainer.getTileAt","openfl/display/TileContainer.hx",110,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_123_getTileIndex,"openfl.display.TileContainer","getTileIndex",0x4280db93,"openfl.display.TileContainer.getTileIndex","openfl/display/TileContainer.hx",123,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_134_removeTile,"openfl.display.TileContainer","removeTile",0x9f9a5057,"openfl.display.TileContainer.removeTile","openfl/display/TileContainer.hx",134,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_150_removeTileAt,"openfl.display.TileContainer","removeTileAt",0x77108d2a,"openfl.display.TileContainer.removeTileAt","openfl/display/TileContainer.hx",150,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_161_removeTiles,"openfl.display.TileContainer","removeTiles",0x076bfc3c,"openfl.display.TileContainer.removeTiles","openfl/display/TileContainer.hx",161,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_179_setTileIndex,"openfl.display.TileContainer","setTileIndex",0x5779ff07,"openfl.display.TileContainer.setTileIndex","openfl/display/TileContainer.hx",179,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_192_swapTiles,"openfl.display.TileContainer","swapTiles",0xb95a02cd,"openfl.display.TileContainer.swapTiles","openfl/display/TileContainer.hx",192,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_207_swapTilesAt,"openfl.display.TileContainer","swapTilesAt",0x45fa4920,"openfl.display.TileContainer.swapTilesAt","openfl/display/TileContainer.hx",207,0x026ee5d7)
HX_LOCAL_STACK_FRAME(_hx_pos_3aeffccbe166a6d0_228_get_numTiles,"openfl.display.TileContainer","get_numTiles",0x6c190b6d,"openfl.display.TileContainer.get_numTiles","openfl/display/TileContainer.hx",228,0x026ee5d7)
namespace openfl{
namespace display{

void TileContainer_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float scaleX = __o_scaleX.Default(1);
Float scaleY = __o_scaleY.Default(1);
Float rotation = __o_rotation.Default(0);
Float originX = __o_originX.Default(0);
Float originY = __o_originY.Default(0);
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_27_new)
HXLINE(  29)		super::__construct((int)-1,x,y,scaleX,scaleY,rotation,originX,originY);
HXLINE(  31)		this->_hx___tiles = ::Array_obj< ::Dynamic>::__new();
HXLINE(  32)		this->__length = (int)0;
            	}

Dynamic TileContainer_obj::__CreateEmpty() { return new TileContainer_obj; }

void *TileContainer_obj::_hx_vtable = 0;

Dynamic TileContainer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TileContainer_obj > _hx_result = new TileContainer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool TileContainer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4b539fa1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4b539fa1;
	} else {
		return inClassId==(int)0x555b129c;
	}
}

static ::openfl::display::ITileContainer_obj _hx_openfl_display_TileContainer__hx_openfl_display_ITileContainer= {
	( int (hx::Object::*)())&::openfl::display::TileContainer_obj::get_numTiles,
	(  ::openfl::display::Tile (hx::Object::*)( ::openfl::display::Tile))&::openfl::display::TileContainer_obj::addTile,
	(  ::openfl::display::Tile (hx::Object::*)( ::openfl::display::Tile,int))&::openfl::display::TileContainer_obj::addTileAt,
	( ::Array< ::Dynamic> (hx::Object::*)(::Array< ::Dynamic>))&::openfl::display::TileContainer_obj::addTiles,
	( bool (hx::Object::*)( ::openfl::display::Tile))&::openfl::display::TileContainer_obj::contains,
	(  ::openfl::display::Tile (hx::Object::*)(int))&::openfl::display::TileContainer_obj::getTileAt,
	( int (hx::Object::*)( ::openfl::display::Tile))&::openfl::display::TileContainer_obj::getTileIndex,
	(  ::openfl::display::Tile (hx::Object::*)( ::openfl::display::Tile))&::openfl::display::TileContainer_obj::removeTile,
	(  ::openfl::display::Tile (hx::Object::*)(int))&::openfl::display::TileContainer_obj::removeTileAt,
	( void (hx::Object::*)(hx::Null< int > ,hx::Null< int > ))&::openfl::display::TileContainer_obj::removeTiles,
	( void (hx::Object::*)( ::openfl::display::Tile,int))&::openfl::display::TileContainer_obj::setTileIndex,
	( void (hx::Object::*)( ::openfl::display::Tile, ::openfl::display::Tile))&::openfl::display::TileContainer_obj::swapTiles,
	( void (hx::Object::*)(int,int))&::openfl::display::TileContainer_obj::swapTilesAt,
};

void *TileContainer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xcad54adc: return &_hx_openfl_display_TileContainer__hx_openfl_display_ITileContainer;
	}
	return super::_hx_getInterface(inHash);
}

 ::openfl::display::Tile TileContainer_obj::addTile( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_37_addTile)
HXLINE(  39)		if (hx::IsNull( tile )) {
HXLINE(  39)			return null();
            		}
HXLINE(  41)		if (hx::IsEq( tile->parent,hx::ObjectPtr<OBJ_>(this) )) {
HXLINE(  43)			this->_hx___tiles->remove(tile);
HXLINE(  44)			this->__length--;
            		}
HXLINE(  48)		::Array< ::Dynamic> _hx_tmp = this->_hx___tiles;
HXDLIN(  48)		_hx_tmp[this->get_numTiles()] = tile;
HXLINE(  49)		tile->parent = hx::ObjectPtr<OBJ_>(this);
HXLINE(  50)		this->__length++;
HXLINE(  52)		if (!(this->_hx___dirty)) {
HXLINE(  52)			this->_hx___dirty = true;
HXDLIN(  52)			if (hx::IsNotNull( this->parent )) {
HXLINE(  52)				this->parent->_hx___setRenderDirty();
            			}
            		}
HXLINE(  54)		return tile;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,addTile,return )

 ::openfl::display::Tile TileContainer_obj::addTileAt( ::openfl::display::Tile tile,int index){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_59_addTileAt)
HXLINE(  61)		if (hx::IsNull( tile )) {
HXLINE(  61)			return null();
            		}
HXLINE(  63)		if (hx::IsEq( tile->parent,hx::ObjectPtr<OBJ_>(this) )) {
HXLINE(  65)			this->_hx___tiles->remove(tile);
HXLINE(  66)			this->__length--;
            		}
HXLINE(  70)		this->_hx___tiles->insert(index,tile);
HXLINE(  71)		tile->parent = hx::ObjectPtr<OBJ_>(this);
HXLINE(  72)		this->__length++;
HXLINE(  74)		if (!(this->_hx___dirty)) {
HXLINE(  74)			this->_hx___dirty = true;
HXDLIN(  74)			if (hx::IsNotNull( this->parent )) {
HXLINE(  74)				this->parent->_hx___setRenderDirty();
            			}
            		}
HXLINE(  76)		return tile;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileContainer_obj,addTileAt,return )

::Array< ::Dynamic> TileContainer_obj::addTiles(::Array< ::Dynamic> tiles){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_81_addTiles)
HXLINE(  83)		{
HXLINE(  83)			int _g = (int)0;
HXDLIN(  83)			while((_g < tiles->length)){
HXLINE(  83)				 ::openfl::display::Tile tile = tiles->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN(  83)				_g = (_g + (int)1);
HXLINE(  84)				this->addTile(tile);
            			}
            		}
HXLINE(  87)		return tiles;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,addTiles,return )

 ::openfl::display::Tile TileContainer_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_92_clone)
HXLINE(  94)		 ::openfl::display::TileContainer group =  ::openfl::display::TileContainer_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null());
HXLINE(  95)		{
HXLINE(  95)			int _g = (int)0;
HXDLIN(  95)			::Array< ::Dynamic> _g1 = this->_hx___tiles;
HXDLIN(  95)			while((_g < _g1->length)){
HXLINE(  95)				 ::openfl::display::Tile tile = _g1->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN(  95)				_g = (_g + (int)1);
HXLINE(  96)				group->addTile(tile->clone());
            			}
            		}
HXLINE(  98)		return group;
            	}


bool TileContainer_obj::contains( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_105_contains)
HXDLIN( 105)		return (this->_hx___tiles->indexOf(tile,null()) > (int)-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,contains,return )

 ::openfl::display::Tile TileContainer_obj::getTileAt(int index){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_110_getTileAt)
HXLINE( 112)		bool _hx_tmp;
HXDLIN( 112)		if ((index >= (int)0)) {
HXLINE( 112)			_hx_tmp = (index < this->get_numTiles());
            		}
            		else {
HXLINE( 112)			_hx_tmp = false;
            		}
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 114)			return this->_hx___tiles->__get(index).StaticCast<  ::openfl::display::Tile >();
            		}
HXLINE( 118)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,getTileAt,return )

int TileContainer_obj::getTileIndex( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_123_getTileIndex)
HXLINE( 125)		{
HXLINE( 125)			int _g1 = (int)0;
HXDLIN( 125)			int _g = this->_hx___tiles->length;
HXDLIN( 125)			while((_g1 < _g)){
HXLINE( 125)				_g1 = (_g1 + (int)1);
HXDLIN( 125)				int i = (_g1 - (int)1);
HXLINE( 126)				if (hx::IsEq( this->_hx___tiles->__get(i).StaticCast<  ::openfl::display::Tile >(),tile )) {
HXLINE( 126)					return i;
            				}
            			}
            		}
HXLINE( 129)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,getTileIndex,return )

 ::openfl::display::Tile TileContainer_obj::removeTile( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_134_removeTile)
HXLINE( 136)		bool _hx_tmp;
HXDLIN( 136)		if (hx::IsNotNull( tile )) {
HXLINE( 136)			_hx_tmp = hx::IsEq( tile->parent,hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 136)			_hx_tmp = false;
            		}
HXDLIN( 136)		if (_hx_tmp) {
HXLINE( 138)			tile->parent = null();
HXLINE( 139)			this->_hx___tiles->remove(tile);
HXLINE( 140)			this->__length--;
HXLINE( 141)			if (!(this->_hx___dirty)) {
HXLINE( 141)				this->_hx___dirty = true;
HXDLIN( 141)				if (hx::IsNotNull( this->parent )) {
HXLINE( 141)					this->parent->_hx___setRenderDirty();
            				}
            			}
            		}
HXLINE( 145)		return tile;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,removeTile,return )

 ::openfl::display::Tile TileContainer_obj::removeTileAt(int index){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_150_removeTileAt)
HXLINE( 152)		bool _hx_tmp;
HXDLIN( 152)		if ((index >= (int)0)) {
HXLINE( 152)			_hx_tmp = (index < this->get_numTiles());
            		}
            		else {
HXLINE( 152)			_hx_tmp = false;
            		}
HXDLIN( 152)		if (_hx_tmp) {
HXLINE( 153)			return this->removeTile(this->_hx___tiles->__get(index).StaticCast<  ::openfl::display::Tile >());
            		}
HXLINE( 156)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileContainer_obj,removeTileAt,return )

void TileContainer_obj::removeTiles(hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_161_removeTiles)
HXLINE( 163)		if ((beginIndex < (int)0)) {
HXLINE( 163)			beginIndex = (int)0;
            		}
HXLINE( 164)		if ((endIndex > (this->_hx___tiles->length - (int)1))) {
HXLINE( 164)			endIndex = (this->_hx___tiles->length - (int)1);
            		}
HXLINE( 166)		::Array< ::Dynamic> removed = this->_hx___tiles;
HXDLIN( 166)		::Array< ::Dynamic> removed1 = removed->splice(beginIndex,((endIndex - beginIndex) + (int)1));
HXLINE( 167)		{
HXLINE( 167)			int _g = (int)0;
HXDLIN( 167)			while((_g < removed1->length)){
HXLINE( 167)				 ::openfl::display::Tile tile = removed1->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 167)				_g = (_g + (int)1);
HXLINE( 168)				tile->parent = null();
            			}
            		}
HXLINE( 170)		this->__length = this->_hx___tiles->length;
HXLINE( 172)		if (!(this->_hx___dirty)) {
HXLINE( 172)			this->_hx___dirty = true;
HXDLIN( 172)			if (hx::IsNotNull( this->parent )) {
HXLINE( 172)				this->parent->_hx___setRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileContainer_obj,removeTiles,(void))

void TileContainer_obj::setTileIndex( ::openfl::display::Tile tile,int index){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_179_setTileIndex)
HXDLIN( 179)		bool _hx_tmp;
HXDLIN( 179)		bool _hx_tmp1;
HXDLIN( 179)		if ((index >= (int)0)) {
HXDLIN( 179)			_hx_tmp1 = (index <= this->get_numTiles());
            		}
            		else {
HXDLIN( 179)			_hx_tmp1 = false;
            		}
HXDLIN( 179)		if (_hx_tmp1) {
HXDLIN( 179)			_hx_tmp = hx::IsEq( tile->parent,hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 179)			_hx_tmp = false;
            		}
HXDLIN( 179)		if (_hx_tmp) {
HXLINE( 181)			this->_hx___tiles->remove(tile);
HXLINE( 182)			this->_hx___tiles->insert(index,tile);
HXLINE( 183)			if (!(this->_hx___dirty)) {
HXLINE( 183)				this->_hx___dirty = true;
HXDLIN( 183)				if (hx::IsNotNull( this->parent )) {
HXLINE( 183)					this->parent->_hx___setRenderDirty();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileContainer_obj,setTileIndex,(void))

void TileContainer_obj::swapTiles( ::openfl::display::Tile tile1, ::openfl::display::Tile tile2){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_192_swapTiles)
HXDLIN( 192)		bool _hx_tmp;
HXDLIN( 192)		if (hx::IsEq( tile1->parent,hx::ObjectPtr<OBJ_>(this) )) {
HXDLIN( 192)			_hx_tmp = hx::IsEq( tile2->parent,hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 192)			_hx_tmp = false;
            		}
HXDLIN( 192)		if (_hx_tmp) {
HXLINE( 194)			int index1 = this->_hx___tiles->indexOf(tile1,null());
HXLINE( 195)			int index2 = this->_hx___tiles->indexOf(tile2,null());
HXLINE( 197)			this->_hx___tiles[index1] = tile2;
HXLINE( 198)			this->_hx___tiles[index2] = tile1;
HXLINE( 200)			if (!(this->_hx___dirty)) {
HXLINE( 200)				this->_hx___dirty = true;
HXDLIN( 200)				if (hx::IsNotNull( this->parent )) {
HXLINE( 200)					this->parent->_hx___setRenderDirty();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileContainer_obj,swapTiles,(void))

void TileContainer_obj::swapTilesAt(int index1,int index2){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_207_swapTilesAt)
HXLINE( 209)		 ::openfl::display::Tile swap = this->_hx___tiles->__get(index1).StaticCast<  ::openfl::display::Tile >();
HXLINE( 210)		::Array< ::Dynamic> _hx_tmp = this->_hx___tiles;
HXDLIN( 210)		_hx_tmp[index1] = this->_hx___tiles->__get(index2).StaticCast<  ::openfl::display::Tile >();
HXLINE( 211)		this->_hx___tiles[index2] = swap;
HXLINE( 212)		swap = null();
HXLINE( 214)		if (!(this->_hx___dirty)) {
HXLINE( 214)			this->_hx___dirty = true;
HXDLIN( 214)			if (hx::IsNotNull( this->parent )) {
HXLINE( 214)				this->parent->_hx___setRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TileContainer_obj,swapTilesAt,(void))

int TileContainer_obj::get_numTiles(){
            	HX_STACKFRAME(&_hx_pos_3aeffccbe166a6d0_228_get_numTiles)
HXDLIN( 228)		return this->__length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TileContainer_obj,get_numTiles,return )


hx::ObjectPtr< TileContainer_obj > TileContainer_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY) {
	hx::ObjectPtr< TileContainer_obj > __this = new TileContainer_obj();
	__this->__construct(__o_x,__o_y,__o_scaleX,__o_scaleY,__o_rotation,__o_originX,__o_originY);
	return __this;
}

hx::ObjectPtr< TileContainer_obj > TileContainer_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY) {
	TileContainer_obj *__this = (TileContainer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TileContainer_obj), true, "openfl.display.TileContainer"));
	*(void **)__this = TileContainer_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_scaleX,__o_scaleY,__o_rotation,__o_originX,__o_originY);
	return __this;
}

TileContainer_obj::TileContainer_obj()
{
}

void TileContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileContainer);
	HX_MARK_MEMBER_NAME(_hx___tiles,"__tiles");
	 ::openfl::display::Tile_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___tiles,"__tiles");
	 ::openfl::display::Tile_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TileContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__tiles") ) { return hx::Val( _hx___tiles ); }
		if (HX_FIELD_EQ(inName,"addTile") ) { return hx::Val( addTile_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_numTiles() ); }
		if (HX_FIELD_EQ(inName,"addTiles") ) { return hx::Val( addTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return hx::Val( contains_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addTileAt") ) { return hx::Val( addTileAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileAt") ) { return hx::Val( getTileAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapTiles") ) { return hx::Val( swapTiles_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeTile") ) { return hx::Val( removeTile_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeTiles") ) { return hx::Val( removeTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapTilesAt") ) { return hx::Val( swapTilesAt_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTileIndex") ) { return hx::Val( getTileIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeTileAt") ) { return hx::Val( removeTileAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileIndex") ) { return hx::Val( setTileIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numTiles") ) { return hx::Val( get_numTiles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TileContainer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__tiles") ) { _hx___tiles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"));
	outFields->push(HX_HCSTRING("__tiles","\x65","\x56","\x93","\x7a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TileContainer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TileContainer_obj,_hx___tiles),HX_HCSTRING("__tiles","\x65","\x56","\x93","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TileContainer_obj_sStaticStorageInfo = 0;
#endif

static ::String TileContainer_obj_sMemberFields[] = {
	HX_HCSTRING("__tiles","\x65","\x56","\x93","\x7a"),
	HX_HCSTRING("addTile","\xef","\x0d","\x3a","\x89"),
	HX_HCSTRING("addTileAt","\xc2","\xe0","\x4c","\xd6"),
	HX_HCSTRING("addTiles","\xa4","\x23","\x92","\x89"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getTileAt","\xf7","\x34","\x7f","\x9a"),
	HX_HCSTRING("getTileIndex","\x8e","\x95","\xc6","\x58"),
	HX_HCSTRING("removeTile","\x92","\x05","\x1c","\xca"),
	HX_HCSTRING("removeTileAt","\x25","\x47","\x56","\x8d"),
	HX_HCSTRING("removeTiles","\xa1","\xda","\x68","\x0e"),
	HX_HCSTRING("setTileIndex","\x02","\xb9","\xbf","\x6d"),
	HX_HCSTRING("swapTiles","\xf2","\x0d","\xe2","\x85"),
	HX_HCSTRING("swapTilesAt","\x85","\x27","\xf7","\x4c"),
	HX_HCSTRING("get_numTiles","\x68","\xc5","\x5e","\x82"),
	::String(null()) };

static void TileContainer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TileContainer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class TileContainer_obj::__mClass;

void TileContainer_obj::__register()
{
	hx::Object *dummy = new TileContainer_obj;
	TileContainer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.TileContainer","\x89","\xc5","\x06","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TileContainer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TileContainer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TileContainer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TileContainer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TileContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TileContainer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display