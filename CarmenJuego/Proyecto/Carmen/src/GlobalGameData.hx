package;
import gameObjects.God;
import gameObjects.Player1;


/**
 * ...
 * @author 
 */

class GlobalGameData 
{
	public static var player:God;
	public static var player2:Player1;
	
	public static function clear():Void
	{
		player = null;
		player2 = null;
	}
	
}