package;

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

	var vSkill1:FlxButtonAnimationSkill;
	var vSkill2:FlxButtonAnimationSkill;

	@:isVar public var vIdSkill(default,default):Int =-1;

	@:isVar public var vTraps(get, set):FlxGroup;

	@:isVar public var vProjectiles(get, set):FlxGroup;
	@:isVar public var vProjCount(default,default):Int = -1;

	@:isVar public var vActualTrap:Trap;

	public static inline var cIdSkill1 = 0;
	public static inline var cIdSkill2 = 1;

	public function new()
	{
	}

	public function intanceProjectiles()
	{
		vProjCount = 0;
	}

	public function createAndAddSkills():Void
	{
		var textSkill1FlxText:FlxText = new FlxText();
		vSkill1 = new FlxButtonAnimationSkill(AssetPaths.balaplacebo__png, 57, 64, onClickSkill1,onClickSkill1Active,onOverSkill1,3,cIdSkill1,textSkill1FlxText,"Dispara un proyectil en la dirección donde se haga click.    Cooldown: 3s");
		vSkill1.setOver([1]);
		vSkill1.setUp([0]);
		vSkill1.setDown([2]);
		vSkill1.setCooldown([3]);
		vSkill1.setDisabled([4]);
		vSkill1.setPosition(1740, 50);
		vSkills.add(vSkill1);
		vSkillsCountDownText.add(textSkill1FlxText);

		var textSkill2FlxText:FlxText = new FlxText();
		vSkill2 = new FlxButtonAnimationSkill(AssetPaths.balaplacebo__png, 57, 64, onClickSkill2,onClickSkill2Active,onOverSkill2,40,cIdSkill2,textSkill2FlxText,"Pone una trampa en una superficie que inmoviliza.    Cooldown: 40s");
		vSkill2.setOver([1]);
		vSkill2.setUp([0]);
		vSkill2.setDown([2]);
		vSkill2.setCooldown([3]);
		vSkill2.setDisabled([4]);
		vSkill2.setPosition(1825, 50);
		vSkills.add(vSkill2);
		vSkillsCountDownText.add(textSkill2FlxText);
	}

	public function onClickSkill1(aButton:FlxButtonAnimationSkill):Void
	{
		resetSkill(vIdSkill);
		for (i in 0...1)
		{
			vProjectiles.members[i].revive();
			vProjectiles.members[i].visible = false;
		}

		intanceProjectiles();
		vIdSkill = aButton.vId;

	}

	public function onClickSkill1Active(aButton:FlxButtonAnimationSkill):Void
	{
		resetSkill(vIdSkill);
	}

	public function onOverSkill1(aButton:FlxButtonAnimationSkill):Void
	{
		vTextSkillDescription.text = aButton.vTextDescription;
	}

	public function onClickSkill2(aButton:FlxButtonAnimationSkill):Void
	{
		resetSkill(vIdSkill);

		vIdSkill = aButton.vId;
		var trap = new Trap(FlxG.mouse.x, FlxG.mouse.y);
		vActualTrap = trap;
		setUINotPossiblePlaceToPutTrapFromSkill2();
		vTraps.add(trap);
	}

	public function onClickSkill2Active(aButton:FlxButtonAnimationSkill):Void
	{
		resetSkill(vIdSkill);
	}

	public function onOverSkill2(aButton:FlxButtonAnimationSkill):Void
	{
		vTextSkillDescription.text = aButton.vTextDescription;
	}

	public function thereAreSkillsTouching():Bool
	{
		return vSkill2.isTouchingButton() || vSkill1.isTouchingButton();
	}

	public function activateSkillWithId(aIdSkill:Int):Void
	{
		switch (aIdSkill)
		{
			case cIdSkill1:
				vIdSkill =-1;
				vSkill1.setActivation();
				var proj:ProjectilePlayer = cast(vProjectiles.members[0], ProjectilePlayer);
				proj.setPointToFollow(FlxG.mouse.x,FlxG.mouse.y);
				proj.shoot(GlobalGameData.vGod.x+(GlobalGameData.vGod.width/2), GlobalGameData.vGod.y+(GlobalGameData.vGod.height/2));

			case cIdSkill2:
				vIdSkill =-1;
				setUIPlacedTrapFromSkill2();
				vActualTrap.vCanCollide = true;
				vActualTrap = null;
				vSkill2.setActivation();
		}
	}

	function setUINotPossiblePlaceToPutTrapFromSkill2()
	{
		vActualTrap.setColorTransform(1, 0, 0, 0.8);
	}

	function setUIPossiblePlaceToPutTrapFromSkill2()
	{
		vActualTrap.setColorTransform(0, 1, 0, 0.8);
	}

	function setUIPlacedTrapFromSkill2()
	{
		vActualTrap.setColorTransform(1, 1, 1, 1);
	}

	public function runGodSkill(aX:Int,aY:Int,aIdSkill:Int):Void
	{
		if (!thereAreSkillsTouching())
		{
			switch (aIdSkill)
			{
				case cIdSkill1:
					activateSkillWithId(aIdSkill);
					vIdSkill =-1;
				case cIdSkill2:
					if (skill2ConditionToPutElement())
					{
						activateSkillWithId(aIdSkill);
						vIdSkill =-1;
					}
			}
		}
	}

	public function validateSkillsConditions()
	{
		if (vIdSkill == vSkill2.vId&&vActualTrap!=null)
		{
			vActualTrap.setPosition(FlxG.mouse.x-(vActualTrap.width/2), FlxG.mouse.y-(vActualTrap.height/2));

			if (skill2ConditionToPutElement())
			{
				setUIPossiblePlaceToPutTrapFromSkill2();
			}
			else
			{
				setUINotPossiblePlaceToPutTrapFromSkill2();
			}
		}
	}

	public function resetSkill(aIdSkill:Int):Void
	{
		switch (aIdSkill)
		{
			case cIdSkill1:
				for (i in 0...1)
				{
					vProjectiles.members[i].kill();
				}
				vSkill1.vActiveButton = false;
				vSkill1.animation.play("up");
				vIdSkill = -1;
			case cIdSkill2:
				vTraps.remove(vActualTrap, true);
				vActualTrap.destroy();
				vSkill2.vActiveButton = false;
				vSkill2.animation.play("up");
				vIdSkill = -1;
		}
	}

	public function skill2ConditionToPutElement():Bool
	{
		var thereIsAPlayer:Bool = GlobalGameData.thereIsPlayer((3 * vActualTrap.width) / 2, FlxG.mouse.x, FlxG.mouse.y);
		var isOnSurface:Bool = GlobalGameData.itsOnASurface(vActualTrap.width, FlxG.mouse.x, Std.int(FlxG.mouse.y - (vActualTrap.height / 2))) ;
		var thereIsACoin:Bool = GlobalGameData.thereIsACoinHere(FlxG.mouse.x, FlxG.mouse.y - vActualTrap.height / 2, GlobalGameData.vPlayer1.vCoins, (3 * vActualTrap.width) / 2);

		return (vActualTrap!= null &&  !thereIsAPlayer&& isOnSurface&& !thereIsACoin);
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