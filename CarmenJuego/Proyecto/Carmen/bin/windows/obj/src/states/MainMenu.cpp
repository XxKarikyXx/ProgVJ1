// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_auxiliar_FlxButtonAnimation
#include <auxiliar/FlxButtonAnimation.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_states_GameState
#include <states/GameState.h>
#endif
#ifndef INCLUDED_states_MainMenu
#include <states/MainMenu.h>
#endif
#ifndef INCLUDED_states_MainMenuInstructions
#include <states/MainMenuInstructions.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_df78254130e21335_16_new,"states.MainMenu","new",0x6f3ad636,"states.MainMenu.new","states/MainMenu.hx",16,0x09fecf99)
HX_LOCAL_STACK_FRAME(_hx_pos_df78254130e21335_31_create,"states.MainMenu","create",0xf30d2ae6,"states.MainMenu.create","states/MainMenu.hx",31,0x09fecf99)
static const int _hx_array_data_f7624344_2[] = {
	(int)1,
};
static const int _hx_array_data_f7624344_3[] = {
	(int)0,
};
static const int _hx_array_data_f7624344_4[] = {
	(int)2,
};
static const int _hx_array_data_f7624344_5[] = {
	(int)1,
};
static const int _hx_array_data_f7624344_6[] = {
	(int)0,
};
static const int _hx_array_data_f7624344_7[] = {
	(int)2,
};
static const int _hx_array_data_f7624344_8[] = {
	(int)1,
};
static const int _hx_array_data_f7624344_9[] = {
	(int)0,
};
static const int _hx_array_data_f7624344_10[] = {
	(int)2,
};
HX_LOCAL_STACK_FRAME(_hx_pos_df78254130e21335_102_update,"states.MainMenu","update",0xfe0349f3,"states.MainMenu.update","states/MainMenu.hx",102,0x09fecf99)
HX_LOCAL_STACK_FRAME(_hx_pos_df78254130e21335_161_onClickPlay,"states.MainMenu","onClickPlay",0x865e4913,"states.MainMenu.onClickPlay","states/MainMenu.hx",161,0x09fecf99)
HX_LOCAL_STACK_FRAME(_hx_pos_df78254130e21335_166_onClickInstructions,"states.MainMenu","onClickInstructions",0x4e9268c4,"states.MainMenu.onClickInstructions","states/MainMenu.hx",166,0x09fecf99)
HX_LOCAL_STACK_FRAME(_hx_pos_df78254130e21335_170_onClickExit,"states.MainMenu","onClickExit",0x7f22123d,"states.MainMenu.onClickExit","states/MainMenu.hx",170,0x09fecf99)
HX_LOCAL_STACK_FRAME(_hx_pos_df78254130e21335_177_destroy,"states.MainMenu","destroy",0xcb93d5d0,"states.MainMenu.destroy","states/MainMenu.hx",177,0x09fecf99)
namespace states{

void MainMenu_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_df78254130e21335_16_new)
HXLINE(  24)		this->vIndex = (int)0;
HXLINE(  22)		this->vMaxIndexForButtons = (int)2;
HXLINE(  28)		super::__construct(null());
            	}

Dynamic MainMenu_obj::__CreateEmpty() { return new MainMenu_obj; }

void *MainMenu_obj::_hx_vtable = 0;

Dynamic MainMenu_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MainMenu_obj > _hx_result = new MainMenu_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2335d9a7) {
		if (inClassId<=(int)0x061b291a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x061b291a;
		} else {
			return inClassId==(int)0x2335d9a7;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x3634c52c;
	}
}

void MainMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_df78254130e21335_31_create)
HXLINE(  32)		Float spacerY = (int)50;
HXLINE(  33)		Float spacerYTitle = (int)150;
HXLINE(  35)		 ::flixel::text::FlxText mp =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(int)0,(int)100,(int)0,HX_("Men\xc3""\xba"" Principal",bb,76,5f,0a),(int)70,null());
HXLINE(  36)		mp->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  37)		this->add(mp);
HXLINE(  39)		this->vPlayButton =  ::auxiliar::FlxButtonAnimation_obj::__alloc( HX_CTX ,HX_("assets/img/button.png",45,f5,86,c9),(int)80,(int)20,this->onClickPlay_dyn(),null());
HXLINE(  40)		 ::auxiliar::FlxButtonAnimation _hx_tmp = this->vPlayButton;
HXDLIN(  40)		int _hx_tmp1 = ::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::width / (Float)(int)3));
HXDLIN(  40)		_hx_tmp->setSize(_hx_tmp1,::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::height / (Float)(int)9)));
HXLINE(  41)		this->vPlayButton->setOver(::Array_obj< int >::fromData( _hx_array_data_f7624344_2,1),null(),null());
HXLINE(  42)		this->vPlayButton->setUp(::Array_obj< int >::fromData( _hx_array_data_f7624344_3,1),null(),null());
HXLINE(  43)		this->vPlayButton->setDown(::Array_obj< int >::fromData( _hx_array_data_f7624344_4,1),null(),null());
HXLINE(  44)		 ::auxiliar::FlxButtonAnimation _hx_tmp2 = this->vPlayButton;
HXDLIN(  44)		Float _hx_tmp3 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  44)		Float _hx_tmp4 = (_hx_tmp3 - ((Float)this->vPlayButton->get_width() / (Float)(int)2));
HXDLIN(  44)		Float _hx_tmp5 = (mp->get_height() + spacerYTitle);
HXDLIN(  44)		_hx_tmp2->setPosition(_hx_tmp4,(_hx_tmp5 + ((Float)this->vPlayButton->get_height() / (Float)(int)2)));
HXLINE(  45)		 ::auxiliar::FlxButtonAnimation _hx_tmp6 = this->vPlayButton;
HXDLIN(  45)		int _hx_tmp7 = ::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::width / (Float)(int)3));
HXDLIN(  45)		_hx_tmp6->setGraphicSize(_hx_tmp7,::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::height / (Float)(int)9)));
HXLINE(  46)		this->add(this->vPlayButton);
HXLINE(  47)		this->vPlayButton->updateHitbox();
HXLINE(  49)		 ::flixel::text::FlxText labelPlayButton =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  50)		labelPlayButton->set_text(HX_("Jugar",0d,61,4b,e9));
HXLINE(  51)		labelPlayButton->set_allowCollisions((int)0);
HXLINE(  52)		labelPlayButton->setFormat(null(),(int)65,(int)-16777216,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  53)		Float _hx_tmp8 = (mp->get_height() + spacerYTitle);
HXDLIN(  53)		Float _hx_tmp9 = (_hx_tmp8 + ((Float)this->vPlayButton->get_height() / (Float)(int)2));
HXDLIN(  53)		labelPlayButton->set_y((_hx_tmp9 + ((Float)labelPlayButton->get_height() / (Float)(int)4)));
HXLINE(  54)		Float _hx_tmp10 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  54)		labelPlayButton->set_x((_hx_tmp10 - ((Float)labelPlayButton->get_width() / (Float)(int)2)));
HXLINE(  55)		this->add(labelPlayButton);
HXLINE(  57)		this->vInstructionsButton =  ::auxiliar::FlxButtonAnimation_obj::__alloc( HX_CTX ,HX_("assets/img/button.png",45,f5,86,c9),(int)80,(int)20,this->onClickInstructions_dyn(),null());
HXLINE(  58)		 ::auxiliar::FlxButtonAnimation _hx_tmp11 = this->vInstructionsButton;
HXDLIN(  58)		int _hx_tmp12 = ::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::width / (Float)(int)3));
HXDLIN(  58)		_hx_tmp11->setSize(_hx_tmp12,::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::height / (Float)(int)9)));
HXLINE(  59)		this->vInstructionsButton->setOver(::Array_obj< int >::fromData( _hx_array_data_f7624344_5,1),null(),null());
HXLINE(  60)		this->vInstructionsButton->setUp(::Array_obj< int >::fromData( _hx_array_data_f7624344_6,1),null(),null());
HXLINE(  61)		this->vInstructionsButton->setDown(::Array_obj< int >::fromData( _hx_array_data_f7624344_7,1),null(),null());
HXLINE(  62)		 ::auxiliar::FlxButtonAnimation _hx_tmp13 = this->vInstructionsButton;
HXDLIN(  62)		Float _hx_tmp14 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  62)		Float _hx_tmp15 = (_hx_tmp14 - ((Float)this->vInstructionsButton->get_width() / (Float)(int)2));
HXDLIN(  62)		Float _hx_tmp16 = (mp->get_height() + spacerYTitle);
HXDLIN(  62)		Float _hx_tmp17 = ((_hx_tmp16 + ((Float)this->vInstructionsButton->get_height() / (Float)(int)2)) + spacerY);
HXDLIN(  62)		_hx_tmp13->setPosition(_hx_tmp15,(_hx_tmp17 + ::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::height / (Float)(int)9))));
HXLINE(  63)		 ::auxiliar::FlxButtonAnimation _hx_tmp18 = this->vInstructionsButton;
HXDLIN(  63)		int _hx_tmp19 = ::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::width / (Float)(int)3));
HXDLIN(  63)		_hx_tmp18->setGraphicSize(_hx_tmp19,::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::height / (Float)(int)9)));
HXLINE(  64)		this->add(this->vInstructionsButton);
HXLINE(  65)		this->vInstructionsButton->updateHitbox();
HXLINE(  67)		 ::flixel::text::FlxText labelInstructionsButton =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  68)		labelInstructionsButton->set_text(HX_("Instrucciones",8d,5b,43,a6));
HXLINE(  69)		labelInstructionsButton->set_allowCollisions((int)0);
HXLINE(  70)		labelInstructionsButton->setFormat(null(),(int)65,(int)-16777216,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  71)		Float _hx_tmp20 = (mp->get_height() + spacerYTitle);
HXDLIN(  71)		Float _hx_tmp21 = (_hx_tmp20 + ((Float)this->vInstructionsButton->get_height() / (Float)(int)2));
HXDLIN(  71)		Float _hx_tmp22 = ((_hx_tmp21 + ((Float)labelInstructionsButton->get_height() / (Float)(int)4)) + spacerY);
HXDLIN(  71)		labelInstructionsButton->set_y((_hx_tmp22 + ::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::height / (Float)(int)9))));
HXLINE(  72)		Float _hx_tmp23 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  72)		labelInstructionsButton->set_x((_hx_tmp23 - ((Float)labelInstructionsButton->get_width() / (Float)(int)2)));
HXLINE(  73)		this->add(labelInstructionsButton);
HXLINE(  75)		this->vExitButton =  ::auxiliar::FlxButtonAnimation_obj::__alloc( HX_CTX ,HX_("assets/img/button.png",45,f5,86,c9),(int)80,(int)20,this->onClickExit_dyn(),null());
HXLINE(  76)		 ::auxiliar::FlxButtonAnimation _hx_tmp24 = this->vExitButton;
HXDLIN(  76)		int _hx_tmp25 = ::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::width / (Float)(int)3));
HXDLIN(  76)		_hx_tmp24->setSize(_hx_tmp25,::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::height / (Float)(int)9)));
HXLINE(  77)		this->vExitButton->setOver(::Array_obj< int >::fromData( _hx_array_data_f7624344_8,1),null(),null());
HXLINE(  78)		this->vExitButton->setUp(::Array_obj< int >::fromData( _hx_array_data_f7624344_9,1),null(),null());
HXLINE(  79)		this->vExitButton->setDown(::Array_obj< int >::fromData( _hx_array_data_f7624344_10,1),null(),null());
HXLINE(  80)		 ::auxiliar::FlxButtonAnimation _hx_tmp26 = this->vExitButton;
HXDLIN(  80)		Float _hx_tmp27 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  80)		Float _hx_tmp28 = (_hx_tmp27 - ((Float)this->vExitButton->get_width() / (Float)(int)2));
HXDLIN(  80)		Float _hx_tmp29 = (mp->get_height() + spacerYTitle);
HXDLIN(  80)		Float _hx_tmp30 = (_hx_tmp29 + ((Float)this->vExitButton->get_height() / (Float)(int)2));
HXDLIN(  80)		Float _hx_tmp31 = (_hx_tmp30 + (spacerY * (int)2));
HXDLIN(  80)		_hx_tmp26->setPosition(_hx_tmp28,(_hx_tmp31 + (::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::height / (Float)(int)9)) * (int)2)));
HXLINE(  81)		 ::auxiliar::FlxButtonAnimation _hx_tmp32 = this->vExitButton;
HXDLIN(  81)		int _hx_tmp33 = ::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::width / (Float)(int)3));
HXDLIN(  81)		_hx_tmp32->setGraphicSize(_hx_tmp33,::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::height / (Float)(int)9)));
HXLINE(  82)		this->add(this->vExitButton);
HXLINE(  83)		this->vExitButton->updateHitbox();
HXLINE(  85)		 ::flixel::text::FlxText labelExitButton =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  86)		labelExitButton->set_text(HX_("Salir",67,27,b2,0a));
HXLINE(  87)		labelExitButton->set_allowCollisions((int)0);
HXLINE(  88)		labelExitButton->setFormat(null(),(int)65,(int)-16777216,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  89)		Float _hx_tmp34 = (mp->get_height() + spacerYTitle);
HXDLIN(  89)		Float _hx_tmp35 = (_hx_tmp34 + ((Float)this->vExitButton->get_height() / (Float)(int)2));
HXDLIN(  89)		Float _hx_tmp36 = (_hx_tmp35 + ((Float)labelExitButton->get_height() / (Float)(int)4));
HXDLIN(  89)		Float _hx_tmp37 = (_hx_tmp36 + (spacerY * (int)2));
HXDLIN(  89)		labelExitButton->set_y((_hx_tmp37 + (::Std_obj::_hx_int(((Float)::flixel::FlxG_obj::height / (Float)(int)9)) * (int)2)));
HXLINE(  90)		Float _hx_tmp38 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  90)		labelExitButton->set_x((_hx_tmp38 - ((Float)labelExitButton->get_width() / (Float)(int)2)));
HXLINE(  91)		this->add(labelExitButton);
HXLINE(  98)		this->vPlayButton->animation->play(HX_("over",54,91,b8,49),null(),null(),null());
            	}


void MainMenu_obj::update(Float aDt){
            	HX_STACKFRAME(&_hx_pos_df78254130e21335_102_update)
HXLINE( 103)		this->super::update(aDt);
HXLINE( 105)		bool _hx_tmp;
HXDLIN( 105)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 105)		if (_this->keyManager->checkStatus((int)40,_this->status)) {
HXLINE( 105)			_hx_tmp = (this->vIndex < this->vMaxIndexForButtons);
            		}
            		else {
HXLINE( 105)			_hx_tmp = false;
            		}
HXDLIN( 105)		if (_hx_tmp) {
HXLINE( 107)			this->vIndex = (this->vIndex + (int)1);
            		}
HXLINE( 111)		bool _hx_tmp1;
HXDLIN( 111)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 111)		if (_this1->keyManager->checkStatus((int)38,_this1->status)) {
HXLINE( 111)			_hx_tmp1 = (this->vIndex > (int)0);
            		}
            		else {
HXLINE( 111)			_hx_tmp1 = false;
            		}
HXDLIN( 111)		if (_hx_tmp1) {
HXLINE( 113)			this->vIndex = (this->vIndex - (int)1);
            		}
HXLINE( 117)		bool _hx_tmp2;
HXDLIN( 117)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 117)		if (!(_this2->keyManager->checkStatus((int)40,_this2->status))) {
HXLINE( 117)			 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 117)			_hx_tmp2 = _this3->keyManager->checkStatus((int)38,_this3->status);
            		}
            		else {
HXLINE( 117)			_hx_tmp2 = true;
            		}
HXDLIN( 117)		if (_hx_tmp2) {
HXLINE( 119)			this->vPlayButton->animation->play(HX_("up",5b,66,00,00),null(),null(),null());
HXLINE( 120)			this->vInstructionsButton->animation->play(HX_("up",5b,66,00,00),null(),null(),null());
HXLINE( 121)			this->vExitButton->animation->play(HX_("up",5b,66,00,00),null(),null(),null());
HXLINE( 122)			{
HXLINE( 122)				int _g = this->vIndex;
HXDLIN( 122)				switch((int)(_g)){
            					case (int)0: {
HXLINE( 125)						this->vPlayButton->animation->play(HX_("over",54,91,b8,49),null(),null(),null());
            					}
            					break;
            					case (int)1: {
HXLINE( 128)						this->vInstructionsButton->animation->play(HX_("over",54,91,b8,49),null(),null(),null());
            					}
            					break;
            					case (int)2: {
HXLINE( 131)						this->vExitButton->animation->play(HX_("over",54,91,b8,49),null(),null(),null());
            					}
            					break;
            				}
            			}
            		}
HXLINE( 136)		 ::flixel::input::keyboard::FlxKeyList _this4 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 136)		if (_this4->keyManager->checkStatus((int)13,_this4->status)) {
HXLINE( 138)			this->vPlayButton->animation->play(HX_("up",5b,66,00,00),null(),null(),null());
HXLINE( 139)			this->vInstructionsButton->animation->play(HX_("up",5b,66,00,00),null(),null(),null());
HXLINE( 140)			this->vExitButton->animation->play(HX_("up",5b,66,00,00),null(),null(),null());
HXLINE( 141)			{
HXLINE( 141)				int _g1 = this->vIndex;
HXDLIN( 141)				switch((int)(_g1)){
            					case (int)0: {
HXLINE( 144)						this->vPlayButton->animation->play(HX_("down",62,f8,6d,42),null(),null(),null());
HXLINE( 145)						this->onClickPlay(this->vPlayButton);
            					}
            					break;
            					case (int)1: {
HXLINE( 148)						this->vInstructionsButton->animation->play(HX_("down",62,f8,6d,42),null(),null(),null());
HXLINE( 149)						this->onClickInstructions(this->vInstructionsButton);
            					}
            					break;
            					case (int)2: {
HXLINE( 152)						this->vExitButton->animation->play(HX_("down",62,f8,6d,42),null(),null(),null());
HXLINE( 153)						this->onClickExit(this->vExitButton);
            					}
            					break;
            				}
            			}
            		}
            	}


void MainMenu_obj::onClickPlay( ::auxiliar::FlxButtonAnimation aButton){
            	HX_GC_STACKFRAME(&_hx_pos_df78254130e21335_161_onClickPlay)
HXDLIN( 161)		 ::flixel::FlxState nextState =  ::states::GameState_obj::__alloc( HX_CTX );
HXDLIN( 161)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN( 161)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,onClickPlay,(void))

void MainMenu_obj::onClickInstructions( ::auxiliar::FlxButtonAnimation aButton){
            	HX_GC_STACKFRAME(&_hx_pos_df78254130e21335_166_onClickInstructions)
HXDLIN( 166)		 ::flixel::FlxState nextState =  ::states::MainMenuInstructions_obj::__alloc( HX_CTX );
HXDLIN( 166)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN( 166)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,onClickInstructions,(void))

void MainMenu_obj::onClickExit( ::auxiliar::FlxButtonAnimation aButton){
            	HX_STACKFRAME(&_hx_pos_df78254130e21335_170_onClickExit)
HXLINE( 171)		::openfl::_hx_system::System_obj::exit((int)0);
HXLINE( 172)		this->vExitButton->animation->play(HX_("up",5b,66,00,00),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenu_obj,onClickExit,(void))

void MainMenu_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_df78254130e21335_177_destroy)
HXDLIN( 177)		this->super::destroy();
            	}



hx::ObjectPtr< MainMenu_obj > MainMenu_obj::__new() {
	hx::ObjectPtr< MainMenu_obj > __this = new MainMenu_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< MainMenu_obj > MainMenu_obj::__alloc(hx::Ctx *_hx_ctx) {
	MainMenu_obj *__this = (MainMenu_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MainMenu_obj), true, "states.MainMenu"));
	*(void **)__this = MainMenu_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MainMenu_obj::MainMenu_obj()
{
}

void MainMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenu);
	HX_MARK_MEMBER_NAME(vPlayButton,"vPlayButton");
	HX_MARK_MEMBER_NAME(vInstructionsButton,"vInstructionsButton");
	HX_MARK_MEMBER_NAME(vExitButton,"vExitButton");
	HX_MARK_MEMBER_NAME(vMaxIndexForButtons,"vMaxIndexForButtons");
	HX_MARK_MEMBER_NAME(vIndex,"vIndex");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vPlayButton,"vPlayButton");
	HX_VISIT_MEMBER_NAME(vInstructionsButton,"vInstructionsButton");
	HX_VISIT_MEMBER_NAME(vExitButton,"vExitButton");
	HX_VISIT_MEMBER_NAME(vMaxIndexForButtons,"vMaxIndexForButtons");
	HX_VISIT_MEMBER_NAME(vIndex,"vIndex");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MainMenu_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vIndex") ) { return hx::Val( vIndex ); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vPlayButton") ) { return hx::Val( vPlayButton ); }
		if (HX_FIELD_EQ(inName,"vExitButton") ) { return hx::Val( vExitButton ); }
		if (HX_FIELD_EQ(inName,"onClickPlay") ) { return hx::Val( onClickPlay_dyn() ); }
		if (HX_FIELD_EQ(inName,"onClickExit") ) { return hx::Val( onClickExit_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"vInstructionsButton") ) { return hx::Val( vInstructionsButton ); }
		if (HX_FIELD_EQ(inName,"vMaxIndexForButtons") ) { return hx::Val( vMaxIndexForButtons ); }
		if (HX_FIELD_EQ(inName,"onClickInstructions") ) { return hx::Val( onClickInstructions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MainMenu_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vIndex") ) { vIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vPlayButton") ) { vPlayButton=inValue.Cast<  ::auxiliar::FlxButtonAnimation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vExitButton") ) { vExitButton=inValue.Cast<  ::auxiliar::FlxButtonAnimation >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"vInstructionsButton") ) { vInstructionsButton=inValue.Cast<  ::auxiliar::FlxButtonAnimation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vMaxIndexForButtons") ) { vMaxIndexForButtons=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("vPlayButton","\x1c","\x67","\xda","\xdd"));
	outFields->push(HX_HCSTRING("vInstructionsButton","\x8d","\xf0","\x67","\xdd"));
	outFields->push(HX_HCSTRING("vExitButton","\xc6","\x6b","\xa0","\x77"));
	outFields->push(HX_HCSTRING("vMaxIndexForButtons","\xbc","\x8f","\x86","\xae"));
	outFields->push(HX_HCSTRING("vIndex","\xbc","\x9e","\x5e","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MainMenu_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::auxiliar::FlxButtonAnimation*/ ,(int)offsetof(MainMenu_obj,vPlayButton),HX_HCSTRING("vPlayButton","\x1c","\x67","\xda","\xdd")},
	{hx::fsObject /*::auxiliar::FlxButtonAnimation*/ ,(int)offsetof(MainMenu_obj,vInstructionsButton),HX_HCSTRING("vInstructionsButton","\x8d","\xf0","\x67","\xdd")},
	{hx::fsObject /*::auxiliar::FlxButtonAnimation*/ ,(int)offsetof(MainMenu_obj,vExitButton),HX_HCSTRING("vExitButton","\xc6","\x6b","\xa0","\x77")},
	{hx::fsInt,(int)offsetof(MainMenu_obj,vMaxIndexForButtons),HX_HCSTRING("vMaxIndexForButtons","\xbc","\x8f","\x86","\xae")},
	{hx::fsInt,(int)offsetof(MainMenu_obj,vIndex),HX_HCSTRING("vIndex","\xbc","\x9e","\x5e","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MainMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String MainMenu_obj_sMemberFields[] = {
	HX_HCSTRING("vPlayButton","\x1c","\x67","\xda","\xdd"),
	HX_HCSTRING("vInstructionsButton","\x8d","\xf0","\x67","\xdd"),
	HX_HCSTRING("vExitButton","\xc6","\x6b","\xa0","\x77"),
	HX_HCSTRING("vMaxIndexForButtons","\xbc","\x8f","\x86","\xae"),
	HX_HCSTRING("vIndex","\xbc","\x9e","\x5e","\x7f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onClickPlay","\x3d","\x7d","\x9c","\x4b"),
	HX_HCSTRING("onClickInstructions","\xee","\xd6","\xbf","\x26"),
	HX_HCSTRING("onClickExit","\x67","\x46","\x60","\x44"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void MainMenu_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainMenu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainMenu_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainMenu_obj::__mClass,"__mClass");
};

#endif

hx::Class MainMenu_obj::__mClass;

void MainMenu_obj::__register()
{
	hx::Object *dummy = new MainMenu_obj;
	MainMenu_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("states.MainMenu","\x44","\x43","\x62","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MainMenu_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MainMenu_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MainMenu_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainMenu_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenu_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states