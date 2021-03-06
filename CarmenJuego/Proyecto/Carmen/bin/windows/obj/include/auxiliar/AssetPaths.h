// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_auxiliar_AssetPaths
#define INCLUDED_auxiliar_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(auxiliar,AssetPaths)

namespace auxiliar{


class HXCPP_CLASS_ATTRIBUTES AssetPaths_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();

	public:
		enum { _hx_ClassId = 0x467d52f5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="auxiliar.AssetPaths")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"auxiliar.AssetPaths"); }

		hx::ObjectPtr< AssetPaths_obj > __new() {
			hx::ObjectPtr< AssetPaths_obj > __this = new AssetPaths_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AssetPaths_obj > __alloc(hx::Ctx *_hx_ctx) {
			AssetPaths_obj *__this = (AssetPaths_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetPaths_obj), false, "auxiliar.AssetPaths"));
			*(void **)__this = AssetPaths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60"); }

		static void __boot();
		static ::String button__png;
		static ::String julia__png;
		static ::String ohno__jpg;
		static ::String ariosheet__png;
		static ::String fantasmaDiosSheet__png;
		static ::String IdleSheet__png;
		static ::String moneda__png;
		static ::String monedagiro__png;
		static ::String RunningSheet__png;
		static ::String SheetCaida__png;
		static ::String SheetSalto__png;
		static ::String balaplacebo__png;
		static ::String cosahermosa__csv;
		static ::String fondo_azul__png;
		static ::String mapCSV_map2_specials__csv;
		static ::String mapCSV_map2_tiles__csv;
		static ::String tile_ladrillos__png;
		static ::String LaMulanaOSV__wav;
		static ::String MarioJump__wav;
};

} // end namespace auxiliar

#endif /* INCLUDED_auxiliar_AssetPaths */ 
