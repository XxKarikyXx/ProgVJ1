// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_states_MainMenu
#define INCLUDED_states_MainMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(auxiliar,FlxButtonAnimation)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,MainMenu)

namespace states{


class HXCPP_CLASS_ATTRIBUTES MainMenu_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef MainMenu_obj OBJ_;
		MainMenu_obj();

	public:
		enum { _hx_ClassId = 0x061b291a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.MainMenu")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"states.MainMenu"); }
		static hx::ObjectPtr< MainMenu_obj > __new();
		static hx::ObjectPtr< MainMenu_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MainMenu_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MainMenu","\x98","\x76","\x8d","\x7a"); }

		 ::auxiliar::FlxButtonAnimation vPlayButton;
		 ::auxiliar::FlxButtonAnimation vInstructionsButton;
		 ::auxiliar::FlxButtonAnimation vExitButton;
		int vMaxIndexForButtons;
		int vIndex;
		void create();

		void update(Float aDt);

		void onClickPlay( ::auxiliar::FlxButtonAnimation aButton);
		::Dynamic onClickPlay_dyn();

		void onClickInstructions( ::auxiliar::FlxButtonAnimation aButton);
		::Dynamic onClickInstructions_dyn();

		void onClickExit( ::auxiliar::FlxButtonAnimation aButton);
		::Dynamic onClickExit_dyn();

		void destroy();

};

} // end namespace states

#endif /* INCLUDED_states_MainMenu */ 
