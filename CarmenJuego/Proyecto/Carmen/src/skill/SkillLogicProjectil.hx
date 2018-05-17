package skill;
import skill.SkillLogic;
import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import gameObjects.ProjectilePlayer;

/**
 * ...
 * @author ...
 */

class SkillLogicProjectil implements SkillLogic
{
	@:isVar public var vProjectiles(default, default):FlxGroup;
		public var vTextDescription:String;	
	public var vSkillButton:FlxButtonAnimationSkill;

	public function new(aTextDescription:String)
	{
		vTextDescription = aTextDescription;
	}

	 public function preparationSkill():Void
	{
		for (i in 0...1)
		{
			vProjectiles.members[i].revive();
			vProjectiles.members[i].visible = false;
		}
	}

	public function skillExecution():Bool
	{
		vSkillButton.setActivation();
		var proj:ProjectilePlayer = cast(vProjectiles.members[0], ProjectilePlayer);
		proj.setPointToFollow(FlxG.mouse.x,FlxG.mouse.y);
		proj.shoot(GlobalGameData.vGod.x + (GlobalGameData.vGod.width / 2), GlobalGameData.vGod.y + (GlobalGameData.vGod.height / 2));
		return true;
	}

	 public function skillReset():Void
	{
		for (i in 0...1)
		{
			vProjectiles.members[i].kill();
		}
	}

	public function skillUpdateValidation():Void
	{
	}

}