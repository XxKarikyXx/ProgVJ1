// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_GlobalGameData
#include <GlobalGameData.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_auxiliar_ToolsForUse
#include <auxiliar/ToolsForUse.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_gameObjects_Coin
#include <gameObjects/Coin.h>
#endif
#ifndef INCLUDED_gameObjects_God
#include <gameObjects/God.h>
#endif
#ifndef INCLUDED_gameObjects_Player1
#include <gameObjects/Player1.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_742a5bb90b30bcdd_27_clear,"GlobalGameData","clear",0x92482fbe,"GlobalGameData.clear","GlobalGameData.hx",27,0x7ebc443f)
HX_LOCAL_STACK_FRAME(_hx_pos_742a5bb90b30bcdd_35_thereIsPlayer,"GlobalGameData","thereIsPlayer",0x0f09a0a0,"GlobalGameData.thereIsPlayer","GlobalGameData.hx",35,0x7ebc443f)
HX_LOCAL_STACK_FRAME(_hx_pos_742a5bb90b30bcdd_39_itsOnASurface,"GlobalGameData","itsOnASurface",0x97cacf84,"GlobalGameData.itsOnASurface","GlobalGameData.hx",39,0x7ebc443f)
HX_LOCAL_STACK_FRAME(_hx_pos_742a5bb90b30bcdd_64_thereIsACoinHere,"GlobalGameData","thereIsACoinHere",0xd6df17c3,"GlobalGameData.thereIsACoinHere","GlobalGameData.hx",64,0x7ebc443f)
HX_LOCAL_STACK_FRAME(_hx_pos_742a5bb90b30bcdd_20_boot,"GlobalGameData","boot",0xd5875721,"GlobalGameData.boot","GlobalGameData.hx",20,0x7ebc443f)
HX_LOCAL_STACK_FRAME(_hx_pos_742a5bb90b30bcdd_21_boot,"GlobalGameData","boot",0xd5875721,"GlobalGameData.boot","GlobalGameData.hx",21,0x7ebc443f)
HX_LOCAL_STACK_FRAME(_hx_pos_742a5bb90b30bcdd_22_boot,"GlobalGameData","boot",0xd5875721,"GlobalGameData.boot","GlobalGameData.hx",22,0x7ebc443f)
HX_LOCAL_STACK_FRAME(_hx_pos_742a5bb90b30bcdd_24_boot,"GlobalGameData","boot",0xd5875721,"GlobalGameData.boot","GlobalGameData.hx",24,0x7ebc443f)

void GlobalGameData_obj::__construct() { }

Dynamic GlobalGameData_obj::__CreateEmpty() { return new GlobalGameData_obj; }

void *GlobalGameData_obj::_hx_vtable = 0;

Dynamic GlobalGameData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GlobalGameData_obj > _hx_result = new GlobalGameData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GlobalGameData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x094c42a7;
}

 ::gameObjects::God GlobalGameData_obj::vGod;

 ::gameObjects::Player1 GlobalGameData_obj::vPlayer1;

 ::flixel::tile::FlxTilemap GlobalGameData_obj::vMap;

int GlobalGameData_obj::cTileIndexCoins;

int GlobalGameData_obj::cTileIndexNonCollision;

int GlobalGameData_obj::cTileIndexNonCollisionBlack;

int GlobalGameData_obj::cTileSize;

void GlobalGameData_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_742a5bb90b30bcdd_27_clear)
HXLINE(  28)		::GlobalGameData_obj::vGod = null();
HXLINE(  29)		::GlobalGameData_obj::vPlayer1 = null();
HXLINE(  30)		::GlobalGameData_obj::vMap = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GlobalGameData_obj,clear,(void))

bool GlobalGameData_obj::thereIsPlayer(Float aSizeOfSurface,int aX,int aY){
            	HX_STACKFRAME(&_hx_pos_742a5bb90b30bcdd_35_thereIsPlayer)
HXDLIN(  35)		Float _hx_tmp = ::GlobalGameData_obj::vPlayer1->x;
HXDLIN(  35)		Float _hx_tmp1 = (_hx_tmp + ((Float)::GlobalGameData_obj::vPlayer1->get_width() / (Float)(int)2));
HXDLIN(  35)		Float _hx_tmp2 = ::GlobalGameData_obj::vPlayer1->y;
HXDLIN(  35)		return ::auxiliar::ToolsForUse_obj::IsInsideCircle(aX,aY,_hx_tmp1,(_hx_tmp2 + ((Float)::GlobalGameData_obj::vPlayer1->get_height() / (Float)(int)2)),aSizeOfSurface);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GlobalGameData_obj,thereIsPlayer,return )

bool GlobalGameData_obj::itsOnASurface(Float aSizeOfSurface,int aX,int aY){
            	HX_STACKFRAME(&_hx_pos_742a5bb90b30bcdd_39_itsOnASurface)
HXLINE(  40)		int midSize = ::Std_obj::_hx_int(((Float)aSizeOfSurface / (Float)(int)2));
HXLINE(  41)		int midSize2 = ::Std_obj::_hx_int(((Float)midSize / (Float)(int)2));
HXLINE(  43)		bool _hx_tmp;
HXDLIN(  43)		 ::flixel::tile::FlxTilemap _hx_tmp1 = ::GlobalGameData_obj::vMap;
HXDLIN(  43)		int _hx_tmp2 = ::Std_obj::_hx_int(((Float)aX / (Float)(int)32));
HXDLIN(  43)		if ((_hx_tmp1->getTile(_hx_tmp2,::Std_obj::_hx_int(((Float)aY / (Float)(int)32))) != (int)0)) {
HXLINE(  43)			 ::flixel::tile::FlxTilemap _hx_tmp3 = ::GlobalGameData_obj::vMap;
HXDLIN(  43)			int _hx_tmp4 = ::Std_obj::_hx_int(((Float)aX / (Float)(int)32));
HXDLIN(  43)			_hx_tmp = (_hx_tmp3->getTile(_hx_tmp4,::Std_obj::_hx_int(((Float)aY / (Float)(int)32))) == (int)2);
            		}
            		else {
HXLINE(  43)			_hx_tmp = true;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  45)			bool _hx_tmp5;
HXDLIN(  45)			 ::flixel::tile::FlxTilemap _hx_tmp6 = ::GlobalGameData_obj::vMap;
HXDLIN(  45)			int _hx_tmp7 = ::Std_obj::_hx_int(((Float)(aX + midSize2) / (Float)(int)32));
HXDLIN(  45)			if ((_hx_tmp6->getTile(_hx_tmp7,::Std_obj::_hx_int(((Float)aY / (Float)(int)32))) != (int)0)) {
HXLINE(  45)				 ::flixel::tile::FlxTilemap _hx_tmp8 = ::GlobalGameData_obj::vMap;
HXDLIN(  45)				int _hx_tmp9 = ::Std_obj::_hx_int(((Float)(aX + midSize2) / (Float)(int)32));
HXDLIN(  45)				_hx_tmp5 = (_hx_tmp8->getTile(_hx_tmp9,::Std_obj::_hx_int(((Float)aY / (Float)(int)32))) == (int)2);
            			}
            			else {
HXLINE(  45)				_hx_tmp5 = true;
            			}
HXDLIN(  45)			if (_hx_tmp5) {
HXLINE(  47)				bool _hx_tmp10;
HXDLIN(  47)				 ::flixel::tile::FlxTilemap _hx_tmp11 = ::GlobalGameData_obj::vMap;
HXDLIN(  47)				int _hx_tmp12 = ::Std_obj::_hx_int(((Float)aX / (Float)(int)32));
HXDLIN(  47)				if ((_hx_tmp11->getTile(_hx_tmp12,::Std_obj::_hx_int(((Float)(((Float)midSize / (Float)(int)2) + aY) / (Float)(int)32))) != (int)0)) {
HXLINE(  47)					 ::flixel::tile::FlxTilemap _hx_tmp13 = ::GlobalGameData_obj::vMap;
HXDLIN(  47)					int _hx_tmp14 = ::Std_obj::_hx_int(((Float)aX / (Float)(int)32));
HXDLIN(  47)					_hx_tmp10 = (_hx_tmp13->getTile(_hx_tmp14,::Std_obj::_hx_int(((Float)(((Float)midSize / (Float)(int)2) + aY) / (Float)(int)32))) != (int)2);
            				}
            				else {
HXLINE(  47)					_hx_tmp10 = false;
            				}
HXDLIN(  47)				if (_hx_tmp10) {
HXLINE(  49)					bool _hx_tmp15;
HXDLIN(  49)					bool _hx_tmp16;
HXDLIN(  49)					 ::flixel::tile::FlxTilemap _hx_tmp17 = ::GlobalGameData_obj::vMap;
HXDLIN(  49)					int _hx_tmp18 = ::Std_obj::_hx_int(((Float)(aX + midSize2) / (Float)(int)32));
HXDLIN(  49)					if ((_hx_tmp17->getTile(_hx_tmp18,::Std_obj::_hx_int(((Float)(((Float)midSize / (Float)(int)2) + aY) / (Float)(int)32))) != (int)0)) {
HXLINE(  49)						 ::flixel::tile::FlxTilemap _hx_tmp19 = ::GlobalGameData_obj::vMap;
HXDLIN(  49)						int _hx_tmp20 = ::Std_obj::_hx_int(((Float)(aX + midSize2) / (Float)(int)32));
HXDLIN(  49)						_hx_tmp16 = (_hx_tmp19->getTile(_hx_tmp20,::Std_obj::_hx_int(((Float)(((Float)midSize / (Float)(int)2) + aY) / (Float)(int)32))) != (int)2);
            					}
            					else {
HXLINE(  49)						_hx_tmp16 = false;
            					}
HXDLIN(  49)					if (_hx_tmp16) {
HXLINE(  49)						 ::flixel::tile::FlxTilemap _hx_tmp21 = ::GlobalGameData_obj::vMap;
HXDLIN(  49)						int _hx_tmp22 = ::Std_obj::_hx_int(((Float)(aX + midSize2) / (Float)(int)32));
HXDLIN(  49)						_hx_tmp15 = (_hx_tmp21->getTile(_hx_tmp22,::Std_obj::_hx_int(((Float)(((Float)midSize / (Float)(int)2) + aY) / (Float)(int)32))) != (int)1);
            					}
            					else {
HXLINE(  49)						_hx_tmp15 = false;
            					}
HXDLIN(  49)					if (_hx_tmp15) {
HXLINE(  51)						return true;
            					}
            				}
            			}
            		}
HXLINE(  60)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GlobalGameData_obj,itsOnASurface,return )

bool GlobalGameData_obj::thereIsACoinHere(Float anX,Float anY, ::flixel::group::FlxTypedGroup otherCoins,Float aRad){
            	HX_GC_STACKFRAME(&_hx_pos_742a5bb90b30bcdd_64_thereIsACoinHere)
HXLINE(  65)		Float rad = aRad;
HXLINE(  67)		{
HXLINE(  67)			 ::flixel::group::FlxTypedGroupIterator aCoin =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,otherCoins->members,null());
HXDLIN(  67)			while(aCoin->hasNext()){
HXLINE(  67)				 ::flixel::FlxBasic aCoin1 = aCoin->next().StaticCast<  ::flixel::FlxBasic >();
HXLINE(  70)				 ::gameObjects::Coin coin1 = hx::TCast<  ::gameObjects::Coin >::cast(aCoin1);
HXLINE(  72)				if (::auxiliar::ToolsForUse_obj::IsInsideCircle(anX,anY,coin1->x,coin1->y,rad)) {
HXLINE(  74)					return true;
            				}
            			}
            		}
HXLINE(  78)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GlobalGameData_obj,thereIsACoinHere,return )


GlobalGameData_obj::GlobalGameData_obj()
{
}

bool GlobalGameData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"vGod") ) { outValue = ( vGod ); return true; }
		if (HX_FIELD_EQ(inName,"vMap") ) { outValue = ( vMap ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vPlayer1") ) { outValue = ( vPlayer1 ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"thereIsPlayer") ) { outValue = thereIsPlayer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"itsOnASurface") ) { outValue = itsOnASurface_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"thereIsACoinHere") ) { outValue = thereIsACoinHere_dyn(); return true; }
	}
	return false;
}

bool GlobalGameData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"vGod") ) { vGod=ioValue.Cast<  ::gameObjects::God >(); return true; }
		if (HX_FIELD_EQ(inName,"vMap") ) { vMap=ioValue.Cast<  ::flixel::tile::FlxTilemap >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vPlayer1") ) { vPlayer1=ioValue.Cast<  ::gameObjects::Player1 >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GlobalGameData_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GlobalGameData_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::gameObjects::God*/ ,(void *) &GlobalGameData_obj::vGod,HX_HCSTRING("vGod","\x66","\x6e","\x35","\x4e")},
	{hx::fsObject /*::gameObjects::Player1*/ ,(void *) &GlobalGameData_obj::vPlayer1,HX_HCSTRING("vPlayer1","\xda","\xcb","\xa6","\xb4")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(void *) &GlobalGameData_obj::vMap,HX_HCSTRING("vMap","\xc6","\xef","\x39","\x4e")},
	{hx::fsInt,(void *) &GlobalGameData_obj::cTileIndexCoins,HX_HCSTRING("cTileIndexCoins","\xe1","\xcd","\xa2","\xbf")},
	{hx::fsInt,(void *) &GlobalGameData_obj::cTileIndexNonCollision,HX_HCSTRING("cTileIndexNonCollision","\x66","\x53","\xae","\xbf")},
	{hx::fsInt,(void *) &GlobalGameData_obj::cTileIndexNonCollisionBlack,HX_HCSTRING("cTileIndexNonCollisionBlack","\x79","\xe0","\x0a","\x59")},
	{hx::fsInt,(void *) &GlobalGameData_obj::cTileSize,HX_HCSTRING("cTileSize","\x92","\x1e","\x67","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GlobalGameData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlobalGameData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GlobalGameData_obj::vGod,"vGod");
	HX_MARK_MEMBER_NAME(GlobalGameData_obj::vPlayer1,"vPlayer1");
	HX_MARK_MEMBER_NAME(GlobalGameData_obj::vMap,"vMap");
	HX_MARK_MEMBER_NAME(GlobalGameData_obj::cTileIndexCoins,"cTileIndexCoins");
	HX_MARK_MEMBER_NAME(GlobalGameData_obj::cTileIndexNonCollision,"cTileIndexNonCollision");
	HX_MARK_MEMBER_NAME(GlobalGameData_obj::cTileIndexNonCollisionBlack,"cTileIndexNonCollisionBlack");
	HX_MARK_MEMBER_NAME(GlobalGameData_obj::cTileSize,"cTileSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlobalGameData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlobalGameData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GlobalGameData_obj::vGod,"vGod");
	HX_VISIT_MEMBER_NAME(GlobalGameData_obj::vPlayer1,"vPlayer1");
	HX_VISIT_MEMBER_NAME(GlobalGameData_obj::vMap,"vMap");
	HX_VISIT_MEMBER_NAME(GlobalGameData_obj::cTileIndexCoins,"cTileIndexCoins");
	HX_VISIT_MEMBER_NAME(GlobalGameData_obj::cTileIndexNonCollision,"cTileIndexNonCollision");
	HX_VISIT_MEMBER_NAME(GlobalGameData_obj::cTileIndexNonCollisionBlack,"cTileIndexNonCollisionBlack");
	HX_VISIT_MEMBER_NAME(GlobalGameData_obj::cTileSize,"cTileSize");
};

#endif

hx::Class GlobalGameData_obj::__mClass;

static ::String GlobalGameData_obj_sStaticFields[] = {
	HX_HCSTRING("vGod","\x66","\x6e","\x35","\x4e"),
	HX_HCSTRING("vPlayer1","\xda","\xcb","\xa6","\xb4"),
	HX_HCSTRING("vMap","\xc6","\xef","\x39","\x4e"),
	HX_HCSTRING("cTileIndexCoins","\xe1","\xcd","\xa2","\xbf"),
	HX_HCSTRING("cTileIndexNonCollision","\x66","\x53","\xae","\xbf"),
	HX_HCSTRING("cTileIndexNonCollisionBlack","\x79","\xe0","\x0a","\x59"),
	HX_HCSTRING("cTileSize","\x92","\x1e","\x67","\xf3"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("thereIsPlayer","\x6f","\xc9","\xf9","\x6c"),
	HX_HCSTRING("itsOnASurface","\x53","\xf8","\xba","\xf5"),
	HX_HCSTRING("thereIsACoinHere","\x54","\x1a","\x4b","\xc8"),
	::String(null())
};

void GlobalGameData_obj::__register()
{
	hx::Object *dummy = new GlobalGameData_obj;
	GlobalGameData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("GlobalGameData","\xdf","\x73","\xb7","\xa4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GlobalGameData_obj::__GetStatic;
	__mClass->mSetStaticField = &GlobalGameData_obj::__SetStatic;
	__mClass->mMarkFunc = GlobalGameData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GlobalGameData_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GlobalGameData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlobalGameData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlobalGameData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlobalGameData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GlobalGameData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_742a5bb90b30bcdd_20_boot)
HXDLIN(  20)		cTileIndexCoins = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_742a5bb90b30bcdd_21_boot)
HXDLIN(  21)		cTileIndexNonCollision = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_742a5bb90b30bcdd_22_boot)
HXDLIN(  22)		cTileIndexNonCollisionBlack = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_742a5bb90b30bcdd_24_boot)
HXDLIN(  24)		cTileSize = (int)32;
            	}
}

