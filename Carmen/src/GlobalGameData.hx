package;
import gameObjects.God;


/**
 * ...
 * @author juako
 */

class GlobalGameData 
{
	public static var player:God;
	
	public static function clear():Void
	{
		player = null;
	}
	
}