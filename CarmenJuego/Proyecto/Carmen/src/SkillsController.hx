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

	var vSkills:FlxGroup;
	var vSkillsCountDownText:FlxGroup;
	var vTextSkillDescription:FlxText;

	var vSkill1:FlxButtonAnimationSkill;
	var vSkill2:FlxButtonAnimationSkill;

	public var vIdSkill(default,default):Int =-1;

	var vTraps:FlxGroup;
	@:isVar public var vActualTrap:Trap;

	public function new(aSkills:FlxGroup,aText:FlxText,atraps:FlxGroup,aTexts:FlxGroup)
	{
		vSkills = aSkills;
		vTextSkillDescription = aText;
		vTraps = atraps;
		vSkillsCountDownText = aTexts;
		createAndAddSkills();
	}

	public function createAndAddSkills():Void
	{
		var textSkill1FlxText:FlxText = new FlxText();
		vSkill1 = new FlxButtonAnimationSkill(AssetPaths.balaplacebo__png, 57, 64, onClickSkill1,onClickSkill1Active,onOverSkill1,onRollOutSkill1,  3,0,textSkill1FlxText);
		vSkill1.setOver([1]);
		vSkill1.setUp([0]);
		vSkill1.setDown([2]);
		vSkill1.setCooldown([3]);
		vSkill1.setDisabled([4]);
		vSkill1.setPosition(1740, 50);
		vSkills.add(vSkill1);
		vSkillsCountDownText.add(textSkill1FlxText);

		var textSkill2FlxText:FlxText = new FlxText();
		vSkill2 = new FlxButtonAnimationSkill(AssetPaths.balaplacebo__png, 57, 64, onClickSkill2,onClickSkill2Active,onOverSkill2,onRollOutSkill2,  40,1,textSkill2FlxText);
		vSkill2.setOver([1]);
		vSkill2.setUp([0]);
		vSkill2.setDown([2]);
		vSkill2.setCooldown([3]);
		vSkill2.setDisabled([4]);
		vSkill2.setPosition(1825, 50);
		vSkills.add(vSkill2);
		vSkillsCountDownText.add(textSkill2FlxText);

	}

	public function onClickSkill1(aButton:FlxButtonAnimation):Void
	{
		resetSkill(vIdSkill);
			trace(vIdSkill+"active skillllll");
		for (i in 0...1)
		{
			GlobalGameData.vGod.vProjectiles.members[i].revive();
			GlobalGameData.vGod.vProjectiles.members[i].visible = false;
		}

		GlobalGameData.vGod.intanceProjectiles();
		vIdSkill = vSkill1.vId;

	}

	public function onClickSkill1Active(aButton:FlxButtonAnimation):Void
	{
			trace("active skill 1");
		resetSkill(vIdSkill);
	}

	public function onOverSkill1(aButton:FlxButtonAnimation):Void
	{
		vTextSkillDescription.text = "Dispara un proyectil en la dirección donde se haga click.    Cooldown: "+vSkill1.vCoolDown+"s";
	}

	public function onRollOutSkill1(aButton:FlxButtonAnimation):Void
	{
	
	}

	public function onClickSkill2(aButton:FlxButtonAnimation):Void
	{
		resetSkill(vIdSkill);
		
		vIdSkill = vSkill2.vId;
		var trap = new Trap(FlxG.mouse.x, FlxG.mouse.y);
		vActualTrap = trap;
		setUINotPossiblePlaceToPutTrapFromSkill2();
		vTraps.add(trap);
	}

	public function onClickSkill2Active(aButton:FlxButtonAnimation):Void
	{
		trace("active skill 2");
		resetSkill(vIdSkill);
	}

	public function onOverSkill2(aButton:FlxButtonAnimation):Void
	{
		vTextSkillDescription.text = "Pone una trampa en una superficie que inmoviliza.    Cooldown: "+vSkill2.vCoolDown+"s";
	}

	public function onRollOutSkill2(aButton:FlxButtonAnimation):Void
	{
		
	}

	public function thereAreSkillsTouching():Bool
	{
		return vSkill2.isTouchingButton() || vSkill1.isTouchingButton();
	}

	public function activateSkillWithId(aIdSkill:Int):Void
	{
			trace(aIdSkill+"skillllll to reset");
		switch (aIdSkill)
		{
			case 0:
				vSkill1.setActivation();
				var proj:ProjectilePlayer = cast(GlobalGameData.vGod.vProjectiles.members[0], ProjectilePlayer);
				proj.setPointToFollow(FlxG.mouse.x,FlxG.mouse.y);
				proj.shoot(GlobalGameData.vGod.x+(GlobalGameData.vGod.width/2), GlobalGameData.vGod.y+(GlobalGameData.vGod.height/2));
				aIdSkill =-1;

			case 1:
				aIdSkill =-1;
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
				case 0:
					activateSkillWithId(aIdSkill);
					vIdSkill =-1;
				case 1:
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
		trace("skill to reset" + aIdSkill);
		switch (aIdSkill)
		{
			case 0:
				for (i in 0...1)
				{
					GlobalGameData.vGod.vProjectiles.members[i].kill();
				}
				vSkill1.vActiveButton = false;
				vSkill1.animation.play("up");
				vIdSkill = -1;
			case 1:
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

}