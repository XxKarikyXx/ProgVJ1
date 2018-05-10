package gameObjects;
import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import openfl.geom.ColorTransform;

/**
 * ...
 * @author TuMadre
 */
class SkillsController
{

	var skills:FlxGroup;
	var skillsText:FlxGroup;
	var text:FlxText;

	var mskill1:FlxButtonAnimationSkill;
	var mskill2:FlxButtonAnimationSkill;
	
	public var idSkill(default,default):Int =-1;

	var traps:FlxGroup;
	@:isVar public var actualTrap:Trap;
	var originalColor:ColorTransform = new ColorTransform();

	public function new(aSkills:FlxGroup,aText:FlxText,atraps:FlxGroup,aTexts:FlxGroup)
	{
		skills = aSkills;
		text = aText;
		traps = atraps;
		skillsText=aTexts;
		createAndAddSkills();
	}

	public function createAndAddSkills()
	{
		var textSkill1FlxText:FlxText = new FlxText();
		mskill1 = new FlxButtonAnimationSkill(AssetPaths.balaplacebo__png, 57, 64, onClickSkill1,onClickSkill1Active,onOverSkill1,onRollOutSkill1,  3,0,textSkill1FlxText);
		mskill1.setOver([1]);
		mskill1.setUp([0]);
		mskill1.setDown([2]);
		mskill1.setCooldown([3]);
		mskill1.setDisabled([4]);
		mskill1.setPosition(1740, 50);
		skills.add(mskill1);
		skillsText.add(textSkill1FlxText);


		var textSkill2FlxText:FlxText = new FlxText();
		mskill2 = new FlxButtonAnimationSkill(AssetPaths.balaplacebo__png, 57, 64, onClickSkill2,onClickSkill2Active,onOverSkill2,onRollOutSkill2,  40,1,textSkill2FlxText);
		mskill2.setOver([1]);
		mskill2.setUp([0]);
		mskill2.setDown([2]);
		mskill2.setCooldown([3]);
		mskill2.setDisabled([4]);
		mskill2.setPosition(1825, 50);
		skills.add(mskill2);
		skillsText.add(textSkill2FlxText);

	}

	public function onClickSkill1(aButton:FlxButtonAnimation)
	{
		resetSkill(idSkill);
		for (i in 0...1)
		{
			GlobalGameData.player.projectiles.members[i].revive();
			GlobalGameData.player.projectiles.members[i].visible = false;
		}

		GlobalGameData.player.intanceProjectiles();
		idSkill = mskill1.id;

	}

	public function onClickSkill1Active(aButton:FlxButtonAnimation)
	{
		resetSkill(idSkill);
	}

	public function onOverSkill1(aButton:FlxButtonAnimation)
	{
		text.text = "Dispara un proyectil en la dirección donde se haga click.    Cooldown: "+mskill1.coolDown+"s";
	}

	public function onRollOutSkill1(aButton:FlxButtonAnimation)
	{
		//textSkill.text = "";
	}

	public function onClickSkill2(aButton:FlxButtonAnimation)
	{
		resetSkill(idSkill);
		idSkill = mskill2.id;
		var trap = new Trap(FlxG.mouse.x, FlxG.mouse.y);
		actualTrap = trap;
		traps.add(trap);
	}

	public function onClickSkill2Active(aButton:FlxButtonAnimation)
	{
		resetSkill(idSkill);
	}

	public function onOverSkill2(aButton:FlxButtonAnimation)
	{
		text.text = "Pone una trampa en una superficie que inmoviliza.    Cooldown: "+mskill2.coolDown+"s";
	}

	public function onRollOutSkill2(aButton:FlxButtonAnimation)
	{
		//textSkill.text = "";
	}

	public function getSkillWithId(idSkill:Int)
	{
		switch (idSkill)
		{
			case 0:
				return skills.members[0];

			case 1:
				return skills.members[1];

		}
		return null;
	}

	public function thereAreSkillsTouching()
	{
		return mskill2.isTouchingButton() || mskill1.isTouchingButton();
	}

	public function activateSkillWithId(idSkill:Int)
	{
		switch (idSkill)
		{
			case 0:
				mskill1.setActivation();
				var proj:ProjectilePlayer = cast(GlobalGameData.player.projectiles.members[0], ProjectilePlayer);
				proj.setPointToFollow(FlxG.mouse.x,FlxG.mouse.y);
				proj.shoot(GlobalGameData.player.x+(GlobalGameData.player.width/2), GlobalGameData.player.y+(GlobalGameData.player.height/2));
				idSkill =-1;

			case 1:
				idSkill =-1;
				actualTrap.setColorTransform(1, 1, 1, 1);
				actualTrap.canCollide = true;

				actualTrap = null;
				mskill2.setActivation();

		}
		return null;
	}

	public function runGodSkill(aX:Int,aY:Int,aIdSkill:Int)
	{
		if (!thereAreSkillsTouching())
		{
			switch (aIdSkill)
			{
				case 0:
					activateSkillWithId(aIdSkill);

				case 1:
					if (skill2ConditionToPutElement())
					{
						activateSkillWithId(aIdSkill);
					}
			}
		}
	}

	public function resetSkill(idSkill:Int)
	{
		switch (idSkill)
		{
			case 0:
				for (i in 0...1)
				{
					GlobalGameData.player.projectiles.members[i].kill();
				}
				mskill1.activeButton = false;
				mskill1.animation.play("up");
			case 1:
				traps.remove(actualTrap, true);
				actualTrap.destroy();
				mskill2.activeButton = false;
				mskill2.animation.play("up");

		}

		idSkill = -1;
	}
	
	public function skill2ConditionToPutElement():Bool
	{
		
		return actualTrap.width != null && !GlobalGameData.thereIsPlayer(actualTrap.width * 2, FlxG.mouse.x, FlxG.mouse.y) && GlobalGameData.itsOnASurface(actualTrap.width, FlxG.mouse.x, Std.int(FlxG.mouse.y - (actualTrap.height / 2))) && !GlobalGameData.thereIsACoinHere(FlxG.mouse.x, FlxG.mouse.y - actualTrap.height / 2, GlobalGameData.player2.coins, actualTrap.width * 2);
	}

}