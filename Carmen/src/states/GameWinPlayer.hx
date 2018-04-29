package states;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;

/**
 * ...
 * @author 
 */
class GameWinPlayer extends FlxState 
{

	public function new() 
	{
		super();
	}
	override public function create():Void 
	{
		add(new FlxText(500, 500, 0, "Gana Jugador", 100));
		add(new FlxText(600, 650, 0, "Presione ENTER para re iniciar", 20));
	}
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		if (FlxG.keys.justPressed.ENTER)
		{
			FlxG.switchState(new GameState());
		}
		
		if (FlxG.keys.justPressed.ESCAPE)
		{
			
			FlxG.switchState(new MainMenu());
		}
	}
}