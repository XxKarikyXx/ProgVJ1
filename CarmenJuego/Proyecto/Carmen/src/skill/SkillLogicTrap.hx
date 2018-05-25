package skill;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import gameObjects.Trap;

/**
 * ...
 * @author ...
 */
class SkillLogicTrap implements ISkillLogic
{
	@:isVar public var vTraps(default, default):FlxGroup;
		public var vTextDescription:String;	
	public var vSkillButton:FlxButtonAnimationSkill;
	var vActualTrap:Trap;

	public function new(aTextDescription:String)
	{
		vTextDescription = aTextDescription;
	}

	public function preparationSkill():Void
	{
		var trap = new Trap(FlxG.mouse.x, FlxG.mouse.y);
		vActualTrap = trap;
		vActualTrap.setPosition(FlxG.mouse.x-(vActualTrap.width/2), FlxG.mouse.y-(vActualTrap.height/2));
		setUINotPossiblePlaceToPutTrapFromSkill2();
		vTraps.add(trap);
	}

	public function skillExecution():Bool
	{
		if (skill2ConditionToPutElement())
		{
			setUIPlacedTrapFromSkill2();
			vActualTrap.vCanCollide = true;
			vActualTrap = null;
			vSkillButton.setActivation();
			return true;
		}
		else
		{
			return false;
		}
	}

	public function skillReset():Void
	{
		vTraps.remove(vActualTrap, true);
		vActualTrap.destroy();
	}

	public function skillUpdateValidation():Void
	{
		if (vActualTrap!=null)
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

	function skill2ConditionToPutElement():Bool
	{
		var thereIsAPlayer:Bool = GlobalGameData.thereIsPlayer((3 * vActualTrap.width) / 2, FlxG.mouse.x, FlxG.mouse.y);
		var isOnSurface:Bool = GlobalGameData.itsOnASurface(vActualTrap.width, FlxG.mouse.x, Std.int(FlxG.mouse.y - (vActualTrap.height / 2))) ;
		var thereIsACoin:Bool = GlobalGameData.thereIsACoinHere(FlxG.mouse.x, FlxG.mouse.y - vActualTrap.height / 2, GlobalGameData.vPlayer1.vCoins, (3 * vActualTrap.width) / 2);

		return (vActualTrap!= null &&  !thereIsAPlayer&& isOnSurface&& !thereIsACoin);
	}
}