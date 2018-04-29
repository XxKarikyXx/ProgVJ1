package;
import gameObjects.God;


/**
 * ...
 * @author 
 */

class GlobalGameData 
{
	public static var player:God;
	
	public static function clear():Void
	{
		player = null;
	}
	
}