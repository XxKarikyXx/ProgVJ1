// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_gameObjects_ProjectilePlayer
#define INCLUDED_gameObjects_ProjectilePlayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(gameObjects,ProjectilePlayer)

namespace gameObjects{


class HXCPP_CLASS_ATTRIBUTES ProjectilePlayer_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef ProjectilePlayer_obj OBJ_;
		ProjectilePlayer_obj();

	public:
		enum { _hx_ClassId = 0x15b4108c };

		void __construct( ::flixel::FlxSprite aTarget, ::Dynamic aFollowTime, ::Dynamic __o_aVelocity);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="gameObjects.ProjectilePlayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"gameObjects.ProjectilePlayer"); }
		static hx::ObjectPtr< ProjectilePlayer_obj > __new( ::flixel::FlxSprite aTarget, ::Dynamic aFollowTime, ::Dynamic __o_aVelocity);
		static hx::ObjectPtr< ProjectilePlayer_obj > __alloc(hx::Ctx *_hx_ctx, ::flixel::FlxSprite aTarget, ::Dynamic aFollowTime, ::Dynamic __o_aVelocity);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProjectilePlayer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ProjectilePlayer","\x4a","\x96","\xce","\x44"); }

		bool vFollowBool;
		 ::flixel::FlxSprite vTarget;
		Float vFollowTime;
		int vVelocityProjectile;
		int vFollowTimeTotal;
		bool vFollowPointBool;
		Float vXPoint;
		Float vYPoint;
		 ::flixel::FlxSprite set_vTarget( ::flixel::FlxSprite atarget);
		::Dynamic set_vTarget_dyn();

		void update(Float aDt);

		void shoot(Float ax,Float ay);
		::Dynamic shoot_dyn();

		void setPointToFollow(Float axTo,Float ayTo);
		::Dynamic setPointToFollow_dyn();

		void followTarget();
		::Dynamic followTarget_dyn();

		void followPoint();
		::Dynamic followPoint_dyn();

		void setVelocityWithDeltas(Float aDeltaX,Float aDeltaY);
		::Dynamic setVelocityWithDeltas_dyn();

		void destroy();

};

} // end namespace gameObjects

#endif /* INCLUDED_gameObjects_ProjectilePlayer */ 
