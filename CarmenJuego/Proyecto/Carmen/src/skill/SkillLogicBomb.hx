package skill;
import flixel.group.FlxGroup;
import gameObjects.Bomb;

/**
 * ...
 * @author TuMadre
 */
class SkillLogicBomb extends SkillLogic
{

	@:isVar public var vBombs(default, default):FlxGroup;
	var godCenterX:Int;
	var godCenterY:Int;
	var bombRadius:Int=21;
	var vActualBomb = null;

	public function new(aTextDescription:String)
	{
		super();
		vTextDescription = aTextDescription;
	}

	override public function preparationSkill():Void
	{				
		setUINotPossibleToDropBomb();
	}

	override public function skillExecution():Bool
	{
		if (skillConditionToDropBomb())
		{
			resetGodColor();
			vActualBomb = new Bomb(godCenterX-bombRadius, godCenterY-bombRadius, bombRadius);
			vSkillButton.setActivation();
			vBombs.add(vActualBomb);
			return true;
		}
		else
		{
			return false;
		}
	}

	override	public function skillReset():Void
	{
		resetGodColor();
	}

	override	public function skillUpdateValidation():Void
	{
			if (skillConditionToDropBomb())
			{
				setUIPossibleToDropBomb();
			}
			else
			{
				setUINotPossibleToDropBomb();
			}
	}

	function setUINotPossibleToDropBomb()
	{
		GlobalGameData.vGod.setColorTransform(1, 0, 0, 0.5);
	}

	function setUIPossibleToDropBomb()
	{
		GlobalGameData.vGod.setColorTransform(0, 1, 0, 0.5);
	}

	function resetGodColor()
	{
		GlobalGameData.vGod.setColorTransform(1, 1, 1, 0.5);
	}

	function skillConditionToDropBomb():Bool
	{
					godCenterX = Std.int(GlobalGameData.vGod.x +  (GlobalGameData.vGod.width / 2));
			godCenterY = Std.int(GlobalGameData.vGod.y + (GlobalGameData.vGod.height / 2));
		var thereIsAPlayer:Bool = GlobalGameData.thereIsPlayer((GlobalGameData.vPlayer1.height*2), godCenterX, godCenterY);

		return (!thereIsAPlayer);
	}
}