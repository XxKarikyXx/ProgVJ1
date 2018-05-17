package skill;
import flixel.group.FlxGroup;
import flixel.text.FlxText;

/**
 * ...
 * @author ...
 */
interface ISkillLogic
{
	public var vTextDescription:String;
	public var vSkillButton:FlxButtonAnimationSkill;

	public  function preparationSkill():Void;

	public function skillExecution():Bool;

	public  function skillReset():Void;

	public function skillUpdateValidation():Void;

}