// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_states_GameState
#define INCLUDED_states_GameState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(gameObjects,Bomb)
HX_DECLARE_CLASS1(gameObjects,Coin)
HX_DECLARE_CLASS1(gameObjects,God)
HX_DECLARE_CLASS1(gameObjects,Player1)
HX_DECLARE_CLASS1(gameObjects,ProjectilePlayer)
HX_DECLARE_CLASS1(gameObjects,Trap)
HX_DECLARE_CLASS1(skill,SkillsController)
HX_DECLARE_CLASS1(states,GameState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES GameState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef GameState_obj OBJ_;
		GameState_obj();

	public:
		enum { _hx_ClassId = 0x1a7112f9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.GameState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"states.GameState"); }
		static hx::ObjectPtr< GameState_obj > __new();
		static hx::ObjectPtr< GameState_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GameState","\x9f","\x44","\xf9","\x5a"); }

		static void __boot();
		static int cNumberProjectilesPlayer;
		static int cNumberTotalCoins;
		 ::flixel::tile::FlxTilemap vMap;
		 ::gameObjects::Player1 vPlayer;
		 ::gameObjects::God vGod;
		 ::flixel::group::FlxTypedGroup vProjectilesPlayer;
		 ::flixel::group::FlxTypedGroup vProjectilesGod;
		 ::flixel::group::FlxTypedGroup vTrapsGod;
		 ::flixel::group::FlxTypedGroup vBombsGod;
		 ::flixel::_hx_system::FlxSound vBackgroundSound;
		 ::flixel::group::FlxTypedGroup vCoinsPlayer;
		bool vResetPlaceCoin;
		 ::flixel::FlxSprite vBackgroundSprite;
		 ::flixel::text::FlxText vTextGame;
		 ::flixel::text::FlxText vTextSkill;
		 ::flixel::text::FlxText vStunTextGod;
		 ::flixel::text::FlxText vStunTextPlayer;
		 ::flixel::group::FlxTypedGroup vSkillsGod;
		 ::flixel::group::FlxTypedGroup vSkillsGodText;
		 ::skill::SkillsController vSkillsController;
		void create();

		void setCoinsData();
		::Dynamic setCoinsData_dyn();

		void setSkillsControllerData();
		::Dynamic setSkillsControllerData_dyn();

		void setPlayerData();
		::Dynamic setPlayerData_dyn();

		void setGodData();
		::Dynamic setGodData_dyn();

		void setCoinXAndYRandom( ::flixel::group::FlxTypedGroup otherCoins, ::gameObjects::Coin aCoin);
		::Dynamic setCoinXAndYRandom_dyn();

		bool playerCollectedAllCoins();
		::Dynamic playerCollectedAllCoins_dyn();

		void update(Float aDt);

		void shuffleCoins();
		::Dynamic shuffleCoins_dyn();

		void playerVsCoins( ::gameObjects::Player1 aPlayer, ::gameObjects::Coin aCoin);
		::Dynamic playerVsCoins_dyn();

		void trapsVsPlayer( ::gameObjects::Player1 aPlayer, ::gameObjects::Trap aTrap);
		::Dynamic trapsVsPlayer_dyn();

		void mapVsBombs( ::flixel::tile::FlxTilemap aMap, ::gameObjects::Bomb aBomb);
		::Dynamic mapVsBombs_dyn();

		void bombsVsPlayer( ::gameObjects::Player1 aPlayer, ::gameObjects::Bomb aBomb);
		::Dynamic bombsVsPlayer_dyn();

		void projectilesVsGod( ::gameObjects::ProjectilePlayer aProjectile, ::gameObjects::God aGod);
		::Dynamic projectilesVsGod_dyn();

		void projectilesVsPlayer( ::gameObjects::ProjectilePlayer aProjectile, ::gameObjects::Player1 aPlayer);
		::Dynamic projectilesVsPlayer_dyn();

		void playerVsGod( ::gameObjects::Player1 aPlayer, ::gameObjects::God aGod);
		::Dynamic playerVsGod_dyn();

		void destroy();

};

} // end namespace states

#endif /* INCLUDED_states_GameState */ 
