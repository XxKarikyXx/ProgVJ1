package;

/**
 * ...
 * @author ...
 */
class ToolsForUse
{

	public static function IsInsideCircle(centeraX:Float,centeraY:Float,aX:Float, aY:Float, aRad:Float):Bool
	{
		//(x−a)2 + (y−b)2 = r2
		var ecuationA:Float = Math.pow(( centeraX - aX), 2) + Math.pow((centeraY - aY), 2);

		if (Math.sqrt(ecuationA) < aRad)
		{
			return true;

		}

		return false;
	}
}