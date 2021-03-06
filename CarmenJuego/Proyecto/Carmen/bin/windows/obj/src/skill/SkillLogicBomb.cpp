// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_GlobalGameData
#include <GlobalGameData.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_gameObjects_Bomb
#include <gameObjects/Bomb.h>
#endif
#ifndef INCLUDED_gameObjects_God
#include <gameObjects/God.h>
#endif
#ifndef INCLUDED_gameObjects_Player1
#include <gameObjects/Player1.h>
#endif
#ifndef INCLUDED_skill_FlxButtonAnimationSkill
#include <skill/FlxButtonAnimationSkill.h>
#endif
#ifndef INCLUDED_skill_ISkillLogic
#include <skill/ISkillLogic.h>
#endif
#ifndef INCLUDED_skill_SkillLogicBomb
#include <skill/SkillLogicBomb.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3a52b566ccb7fd10_9_new,"skill.SkillLogicBomb","new",0xd264845e,"skill.SkillLogicBomb.new","skill/SkillLogicBomb.hx",9,0x1b5e9fb1)
HX_LOCAL_STACK_FRAME(_hx_pos_3a52b566ccb7fd10_26_preparationSkill,"skill.SkillLogicBomb","preparationSkill",0x9528627c,"skill.SkillLogicBomb.preparationSkill","skill/SkillLogicBomb.hx",26,0x1b5e9fb1)
HX_LOCAL_STACK_FRAME(_hx_pos_3a52b566ccb7fd10_32_skillExecution,"skill.SkillLogicBomb","skillExecution",0xc07bac89,"skill.SkillLogicBomb.skillExecution","skill/SkillLogicBomb.hx",32,0x1b5e9fb1)
HX_LOCAL_STACK_FRAME(_hx_pos_3a52b566ccb7fd10_48_skillReset,"skill.SkillLogicBomb","skillReset",0xcb633e40,"skill.SkillLogicBomb.skillReset","skill/SkillLogicBomb.hx",48,0x1b5e9fb1)
HX_LOCAL_STACK_FRAME(_hx_pos_3a52b566ccb7fd10_53_skillUpdateValidation,"skill.SkillLogicBomb","skillUpdateValidation",0x3379cad1,"skill.SkillLogicBomb.skillUpdateValidation","skill/SkillLogicBomb.hx",53,0x1b5e9fb1)
HX_LOCAL_STACK_FRAME(_hx_pos_3a52b566ccb7fd10_65_setUINotPossibleToDropBomb,"skill.SkillLogicBomb","setUINotPossibleToDropBomb",0x2632cbfc,"skill.SkillLogicBomb.setUINotPossibleToDropBomb","skill/SkillLogicBomb.hx",65,0x1b5e9fb1)
HX_LOCAL_STACK_FRAME(_hx_pos_3a52b566ccb7fd10_70_setUIPossibleToDropBomb,"skill.SkillLogicBomb","setUIPossibleToDropBomb",0x35bacfb1,"skill.SkillLogicBomb.setUIPossibleToDropBomb","skill/SkillLogicBomb.hx",70,0x1b5e9fb1)
HX_LOCAL_STACK_FRAME(_hx_pos_3a52b566ccb7fd10_75_resetGodColor,"skill.SkillLogicBomb","resetGodColor",0x7cb028f4,"skill.SkillLogicBomb.resetGodColor","skill/SkillLogicBomb.hx",75,0x1b5e9fb1)
HX_LOCAL_STACK_FRAME(_hx_pos_3a52b566ccb7fd10_79_skillConditionToDropBomb,"skill.SkillLogicBomb","skillConditionToDropBomb",0xb52f5478,"skill.SkillLogicBomb.skillConditionToDropBomb","skill/SkillLogicBomb.hx",79,0x1b5e9fb1)
namespace skill{

void SkillLogicBomb_obj::__construct(::String aTextDescription){
            	HX_STACKFRAME(&_hx_pos_3a52b566ccb7fd10_9_new)
HXLINE(  16)		this->vActualBomb = null();
HXLINE(  15)		this->bombRadius = (int)21;
HXLINE(  22)		this->vTextDescription = aTextDescription;
            	}

Dynamic SkillLogicBomb_obj::__CreateEmpty() { return new SkillLogicBomb_obj; }

void *SkillLogicBomb_obj::_hx_vtable = 0;

Dynamic SkillLogicBomb_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SkillLogicBomb_obj > _hx_result = new SkillLogicBomb_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SkillLogicBomb_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b8ebd80;
}

static ::skill::ISkillLogic_obj _hx_skill_SkillLogicBomb__hx_skill_ISkillLogic= {
	( void (hx::Object::*)())&::skill::SkillLogicBomb_obj::preparationSkill,
	( bool (hx::Object::*)())&::skill::SkillLogicBomb_obj::skillExecution,
	( void (hx::Object::*)())&::skill::SkillLogicBomb_obj::skillReset,
	( void (hx::Object::*)())&::skill::SkillLogicBomb_obj::skillUpdateValidation,
};

void *SkillLogicBomb_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xddb348c5: return &_hx_skill_SkillLogicBomb__hx_skill_ISkillLogic;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void SkillLogicBomb_obj::preparationSkill(){
            	HX_STACKFRAME(&_hx_pos_3a52b566ccb7fd10_26_preparationSkill)
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkillLogicBomb_obj,preparationSkill,(void))

bool SkillLogicBomb_obj::skillExecution(){
            	HX_GC_STACKFRAME(&_hx_pos_3a52b566ccb7fd10_32_skillExecution)
HXDLIN(  32)		if (this->skillConditionToDropBomb()) {
HXLINE(  34)			this->resetGodColor();
HXLINE(  35)			int _hx_tmp = (this->godCenterX - this->bombRadius);
HXDLIN(  35)			this->vActualBomb =  ::gameObjects::Bomb_obj::__alloc( HX_CTX ,_hx_tmp,(this->godCenterY - this->bombRadius),this->bombRadius);
HXLINE(  36)			this->vSkillButton->setActivation();
HXLINE(  37)			this->vBombs->add(this->vActualBomb).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  38)			return true;
            		}
            		else {
HXLINE(  42)			return false;
            		}
HXLINE(  32)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkillLogicBomb_obj,skillExecution,return )

void SkillLogicBomb_obj::skillReset(){
            	HX_STACKFRAME(&_hx_pos_3a52b566ccb7fd10_48_skillReset)
HXDLIN(  48)		this->resetGodColor();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkillLogicBomb_obj,skillReset,(void))

void SkillLogicBomb_obj::skillUpdateValidation(){
            	HX_STACKFRAME(&_hx_pos_3a52b566ccb7fd10_53_skillUpdateValidation)
HXDLIN(  53)		if (this->skillConditionToDropBomb()) {
HXLINE(  55)			this->setUIPossibleToDropBomb();
            		}
            		else {
HXLINE(  59)			this->setUINotPossibleToDropBomb();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkillLogicBomb_obj,skillUpdateValidation,(void))

void SkillLogicBomb_obj::setUINotPossibleToDropBomb(){
            	HX_STACKFRAME(&_hx_pos_3a52b566ccb7fd10_65_setUINotPossibleToDropBomb)
HXDLIN(  65)		::GlobalGameData_obj::vGod->setColorTransform((int)1,(int)0,(int)0,((Float)0.5),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkillLogicBomb_obj,setUINotPossibleToDropBomb,(void))

void SkillLogicBomb_obj::setUIPossibleToDropBomb(){
            	HX_STACKFRAME(&_hx_pos_3a52b566ccb7fd10_70_setUIPossibleToDropBomb)
HXDLIN(  70)		::GlobalGameData_obj::vGod->setColorTransform((int)0,(int)1,(int)0,((Float)0.5),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkillLogicBomb_obj,setUIPossibleToDropBomb,(void))

void SkillLogicBomb_obj::resetGodColor(){
            	HX_STACKFRAME(&_hx_pos_3a52b566ccb7fd10_75_resetGodColor)
HXDLIN(  75)		::GlobalGameData_obj::vGod->setColorTransform((int)1,(int)1,(int)1,((Float)0.5),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkillLogicBomb_obj,resetGodColor,(void))

bool SkillLogicBomb_obj::skillConditionToDropBomb(){
            	HX_STACKFRAME(&_hx_pos_3a52b566ccb7fd10_79_skillConditionToDropBomb)
HXLINE(  80)		Float _hx_tmp = ::GlobalGameData_obj::vGod->x;
HXDLIN(  80)		this->godCenterX = ::Std_obj::_hx_int((_hx_tmp + ((Float)::GlobalGameData_obj::vGod->get_width() / (Float)(int)2)));
HXLINE(  81)		Float _hx_tmp1 = ::GlobalGameData_obj::vGod->y;
HXDLIN(  81)		this->godCenterY = ::Std_obj::_hx_int((_hx_tmp1 + ((Float)::GlobalGameData_obj::vGod->get_height() / (Float)(int)2)));
HXLINE(  82)		Float thereIsAPlayer = (::GlobalGameData_obj::vPlayer1->get_height() * (int)2);
HXDLIN(  82)		bool thereIsAPlayer1 = ::GlobalGameData_obj::thereIsPlayer(thereIsAPlayer,this->godCenterX,this->godCenterY);
HXLINE(  84)		return !(thereIsAPlayer1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkillLogicBomb_obj,skillConditionToDropBomb,return )


hx::ObjectPtr< SkillLogicBomb_obj > SkillLogicBomb_obj::__new(::String aTextDescription) {
	hx::ObjectPtr< SkillLogicBomb_obj > __this = new SkillLogicBomb_obj();
	__this->__construct(aTextDescription);
	return __this;
}

hx::ObjectPtr< SkillLogicBomb_obj > SkillLogicBomb_obj::__alloc(hx::Ctx *_hx_ctx,::String aTextDescription) {
	SkillLogicBomb_obj *__this = (SkillLogicBomb_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SkillLogicBomb_obj), true, "skill.SkillLogicBomb"));
	*(void **)__this = SkillLogicBomb_obj::_hx_vtable;
	__this->__construct(aTextDescription);
	return __this;
}

SkillLogicBomb_obj::SkillLogicBomb_obj()
{
}

void SkillLogicBomb_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkillLogicBomb);
	HX_MARK_MEMBER_NAME(vBombs,"vBombs");
	HX_MARK_MEMBER_NAME(godCenterX,"godCenterX");
	HX_MARK_MEMBER_NAME(godCenterY,"godCenterY");
	HX_MARK_MEMBER_NAME(bombRadius,"bombRadius");
	HX_MARK_MEMBER_NAME(vActualBomb,"vActualBomb");
	HX_MARK_MEMBER_NAME(vTextDescription,"vTextDescription");
	HX_MARK_MEMBER_NAME(vSkillButton,"vSkillButton");
	HX_MARK_END_CLASS();
}

void SkillLogicBomb_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vBombs,"vBombs");
	HX_VISIT_MEMBER_NAME(godCenterX,"godCenterX");
	HX_VISIT_MEMBER_NAME(godCenterY,"godCenterY");
	HX_VISIT_MEMBER_NAME(bombRadius,"bombRadius");
	HX_VISIT_MEMBER_NAME(vActualBomb,"vActualBomb");
	HX_VISIT_MEMBER_NAME(vTextDescription,"vTextDescription");
	HX_VISIT_MEMBER_NAME(vSkillButton,"vSkillButton");
}

hx::Val SkillLogicBomb_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vBombs") ) { return hx::Val( vBombs ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"godCenterX") ) { return hx::Val( godCenterX ); }
		if (HX_FIELD_EQ(inName,"godCenterY") ) { return hx::Val( godCenterY ); }
		if (HX_FIELD_EQ(inName,"bombRadius") ) { return hx::Val( bombRadius ); }
		if (HX_FIELD_EQ(inName,"skillReset") ) { return hx::Val( skillReset_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vActualBomb") ) { return hx::Val( vActualBomb ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vSkillButton") ) { return hx::Val( vSkillButton ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resetGodColor") ) { return hx::Val( resetGodColor_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"skillExecution") ) { return hx::Val( skillExecution_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"vTextDescription") ) { return hx::Val( vTextDescription ); }
		if (HX_FIELD_EQ(inName,"preparationSkill") ) { return hx::Val( preparationSkill_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"skillUpdateValidation") ) { return hx::Val( skillUpdateValidation_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setUIPossibleToDropBomb") ) { return hx::Val( setUIPossibleToDropBomb_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"skillConditionToDropBomb") ) { return hx::Val( skillConditionToDropBomb_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"setUINotPossibleToDropBomb") ) { return hx::Val( setUINotPossibleToDropBomb_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SkillLogicBomb_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vBombs") ) { vBombs=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"godCenterX") ) { godCenterX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"godCenterY") ) { godCenterY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bombRadius") ) { bombRadius=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vActualBomb") ) { vActualBomb=inValue.Cast<  ::gameObjects::Bomb >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vSkillButton") ) { vSkillButton=inValue.Cast<  ::skill::FlxButtonAnimationSkill >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"vTextDescription") ) { vTextDescription=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkillLogicBomb_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("vBombs","\x7b","\x97","\x40","\x78"));
	outFields->push(HX_HCSTRING("godCenterX","\x07","\x73","\x8e","\x13"));
	outFields->push(HX_HCSTRING("godCenterY","\x08","\x73","\x8e","\x13"));
	outFields->push(HX_HCSTRING("bombRadius","\x54","\xbc","\x6b","\x3e"));
	outFields->push(HX_HCSTRING("vActualBomb","\x26","\xcc","\xcd","\xdc"));
	outFields->push(HX_HCSTRING("vTextDescription","\x79","\x65","\x6d","\x41"));
	outFields->push(HX_HCSTRING("vSkillButton","\x8d","\x8d","\x48","\xb5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SkillLogicBomb_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(SkillLogicBomb_obj,vBombs),HX_HCSTRING("vBombs","\x7b","\x97","\x40","\x78")},
	{hx::fsInt,(int)offsetof(SkillLogicBomb_obj,godCenterX),HX_HCSTRING("godCenterX","\x07","\x73","\x8e","\x13")},
	{hx::fsInt,(int)offsetof(SkillLogicBomb_obj,godCenterY),HX_HCSTRING("godCenterY","\x08","\x73","\x8e","\x13")},
	{hx::fsInt,(int)offsetof(SkillLogicBomb_obj,bombRadius),HX_HCSTRING("bombRadius","\x54","\xbc","\x6b","\x3e")},
	{hx::fsObject /*::gameObjects::Bomb*/ ,(int)offsetof(SkillLogicBomb_obj,vActualBomb),HX_HCSTRING("vActualBomb","\x26","\xcc","\xcd","\xdc")},
	{hx::fsString,(int)offsetof(SkillLogicBomb_obj,vTextDescription),HX_HCSTRING("vTextDescription","\x79","\x65","\x6d","\x41")},
	{hx::fsObject /*::skill::FlxButtonAnimationSkill*/ ,(int)offsetof(SkillLogicBomb_obj,vSkillButton),HX_HCSTRING("vSkillButton","\x8d","\x8d","\x48","\xb5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SkillLogicBomb_obj_sStaticStorageInfo = 0;
#endif

static ::String SkillLogicBomb_obj_sMemberFields[] = {
	HX_HCSTRING("vBombs","\x7b","\x97","\x40","\x78"),
	HX_HCSTRING("godCenterX","\x07","\x73","\x8e","\x13"),
	HX_HCSTRING("godCenterY","\x08","\x73","\x8e","\x13"),
	HX_HCSTRING("bombRadius","\x54","\xbc","\x6b","\x3e"),
	HX_HCSTRING("vActualBomb","\x26","\xcc","\xcd","\xdc"),
	HX_HCSTRING("vTextDescription","\x79","\x65","\x6d","\x41"),
	HX_HCSTRING("vSkillButton","\x8d","\x8d","\x48","\xb5"),
	HX_HCSTRING("preparationSkill","\x3a","\x3d","\xf4","\x17"),
	HX_HCSTRING("skillExecution","\xc7","\xbb","\xf6","\x62"),
	HX_HCSTRING("skillReset","\x7e","\x56","\x9a","\x35"),
	HX_HCSTRING("skillUpdateValidation","\x53","\x3f","\x46","\x75"),
	HX_HCSTRING("setUINotPossibleToDropBomb","\x3a","\xc0","\x26","\x41"),
	HX_HCSTRING("setUIPossibleToDropBomb","\xb3","\xe8","\xee","\xda"),
	HX_HCSTRING("resetGodColor","\x76","\x4b","\xf3","\x14"),
	HX_HCSTRING("skillConditionToDropBomb","\x36","\x1d","\x91","\x9d"),
	::String(null()) };

static void SkillLogicBomb_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkillLogicBomb_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SkillLogicBomb_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkillLogicBomb_obj::__mClass,"__mClass");
};

#endif

hx::Class SkillLogicBomb_obj::__mClass;

void SkillLogicBomb_obj::__register()
{
	hx::Object *dummy = new SkillLogicBomb_obj;
	SkillLogicBomb_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("skill.SkillLogicBomb","\x6c","\xbd","\x3f","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SkillLogicBomb_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SkillLogicBomb_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SkillLogicBomb_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SkillLogicBomb_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SkillLogicBomb_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SkillLogicBomb_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace skill
