package states;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;

/**
 * ...
 * @author juako
 */
class GameWin extends FlxState 
{

	public function new() 
	{
		super();
	}
	override public function create():Void 
	{
		add(new FlxText(1000, 1000, 900, "Buena papu"));
	}
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		if (FlxG.keys.justPressed.SPACE)
		{
			FlxG.switchState(new GameState());
		}
	}
}