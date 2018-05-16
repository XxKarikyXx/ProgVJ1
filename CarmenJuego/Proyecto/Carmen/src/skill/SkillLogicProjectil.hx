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

class SkillLogicProjectil extends SkillLogic
{
	@:isVar public var vProjectiles(default, default):FlxGroup;

	public function new(aTextDescription:String)
	{
		super();
		vTextDescription = aTextDescription;
	}

	override public function preparationSkill():Void
	{
		for (i in 0...1)
		{
			vProjectiles.members[i].revive();
			vProjectiles.members[i].visible = false;
		}
	}

	override public function skillExecution():Bool
	{
		vSkillButton.setActivation();
		var proj:ProjectilePlayer = cast(vProjectiles.members[0], ProjectilePlayer);
		proj.setPointToFollow(FlxG.mouse.x,FlxG.mouse.y);
		proj.shoot(GlobalGameData.vGod.x + (GlobalGameData.vGod.width / 2), GlobalGameData.vGod.y + (GlobalGameData.vGod.height / 2));
		return true;
	}

	override public function skillReset():Void
	{
		for (i in 0...1)
		{
			vProjectiles.members[i].kill();
		}
	}

	override public function skillUpdateValidation():Void
	{
	}

}