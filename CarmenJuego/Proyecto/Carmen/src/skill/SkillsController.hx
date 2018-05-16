package skill;

import skill.SkillLogic;
import skill.SkillLogicProjectil;
import skill.SkillLogicTrap;
import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import gameObjects.ProjectilePlayer;
import gameObjects.Trap;
import openfl.geom.ColorTransform;

/**
 * ...
 * @author ...
 */

class SkillsController
{

	@:isVar public var vSkills(get, set):FlxGroup;
	@:isVar public var vSkillsCountDownText(get, set):FlxGroup;
	@:isVar public var vTextSkillDescription(get, set):FlxText;

	var vSkill1:SkillLogic;
	var vSkill2:SkillLogic;

	@:isVar public var vActiveSkill(default,default):SkillLogic;

	@:isVar public var vTraps(get, set):FlxGroup;

	@:isVar public var vProjectiles(get, set):FlxGroup;

	public function new()
	{
	}

	public function createAndAddSkills():Void
	{
		var textSkill1FlxText:FlxText = new FlxText();
		var skill1:FlxButtonAnimationSkill = new FlxButtonAnimationSkill(AssetPaths.balaplacebo__png, 57, 64, onClickSkill1,onClickSkillActive,onOverSkill1,3,textSkill1FlxText);
		skill1.setOver([1]);
		skill1.setUp([0]);
		skill1.setDown([2]);
		skill1.setCooldown([3]);
		skill1.setDisabled([4]);
		skill1.setPosition(1740, 50);
		vSkills.add(skill1);
		vSkillsCountDownText.add(textSkill1FlxText);

		var skillProjectil:SkillLogicProjectil=new SkillLogicProjectil("Dispara un proyectil en la dirección donde se haga click.    Cooldown: 3s");
		skillProjectil.vSkillButton = skill1;
		skillProjectil.vProjectiles = vProjectiles;
		vSkill1 = skillProjectil;

		var textSkill2FlxText:FlxText = new FlxText();
		var skill2:FlxButtonAnimationSkill = new FlxButtonAnimationSkill(AssetPaths.balaplacebo__png, 57, 64, onClickSkill2,onClickSkillActive,onOverSkill2,40,textSkill2FlxText);
		skill2.setOver([1]);
		skill2.setUp([0]);
		skill2.setDown([2]);
		skill2.setCooldown([3]);
		skill2.setDisabled([4]);
		skill2.setPosition(1825, 50);
		vSkills.add(skill2);
		vSkillsCountDownText.add(textSkill2FlxText);

		var skillTrap:SkillLogicTrap= new SkillLogicTrap("Pone una trampa en una superficie que inmoviliza.    Cooldown: 40s");
		skillTrap.vSkillButton = skill2;
		skillTrap.vTraps = vTraps;
		vSkill2 = skillTrap;
	}

	public function onClickSkill1(aButton:FlxButtonAnimationSkill):Void
	{
		onClickSkillActive(aButton);
		vSkill1.preparationSkill();
		vActiveSkill = vSkill1;
	}

	public function onClickSkillActive(aButton:FlxButtonAnimationSkill):Void
	{
		if (vActiveSkill!=null)
		{
			vActiveSkill.skillReset();
			vActiveSkill.vSkillButton.vActiveButton = false;
			vActiveSkill.vSkillButton.animation.play("up");
			vActiveSkill = null;
		}
	}

	public function onOverSkill1(aButton:FlxButtonAnimationSkill):Void
	{
		vTextSkillDescription.text = vSkill1.vTextDescription;
	}

	public function onClickSkill2(aButton:FlxButtonAnimationSkill):Void
	{
		onClickSkillActive(aButton);
		vSkill2.preparationSkill();
		vActiveSkill = vSkill2;
	}

	public function onOverSkill2(aButton:FlxButtonAnimationSkill):Void
	{
		vTextSkillDescription.text = vSkill2.vTextDescription;
	}

	public function thereAreSkillsTouching():Bool
	{
		return vSkill2.vSkillButton.isTouchingButton() || vSkill1.vSkillButton.isTouchingButton();
	}

	public function runGodSkill(aX:Int,aY:Int):Void
	{
		if (!thereAreSkillsTouching())
		{
			var reset:Bool = vActiveSkill.skillExecution();

			if (reset)
			{
				vActiveSkill = null;
			}
		}
	}

	public function validateSkillsConditions()
	{
		if (vActiveSkill!=null)
		{
			vActiveSkill.skillUpdateValidation();
		}
	}

	public function get_vTraps():FlxGroup
	{
		return vTraps;
	}

	public function set_vTraps(value:FlxGroup):FlxGroup
	{
		return vTraps = value;
	}

	public function get_vProjectiles():FlxGroup
	{
		return vProjectiles;
	}

	public function set_vProjectiles(value:FlxGroup):FlxGroup
	{
		return vProjectiles = value;
	}

	public function get_vSkills():FlxGroup
	{
		return vSkills;
	}

	public function set_vSkills(value:FlxGroup):FlxGroup
	{
		return vSkills = value;
	}

	public function get_vTextSkillDescription():FlxText
	{
		return vTextSkillDescription;
	}

	public function set_vTextSkillDescription(value:FlxText):FlxText
	{
		return vTextSkillDescription = value;
	}

	public function get_vSkillsCountDownText():FlxGroup
	{
		return vSkillsCountDownText;
	}

	public function set_vSkillsCountDownText(value:FlxGroup):FlxGroup
	{
		return vSkillsCountDownText = value;
	}

}