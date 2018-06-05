package gameObjects;
import flixel.FlxSprite;
import flixel.util.FlxColor;
using flixel.util.FlxSpriteUtil;

/**
 * ...
 * @author 
 */
class PowerUp extends FlxSprite
{
	public var vPowerType:String;
	
	public function new(?aX:Float = 0, ?aY:Float = 0, ?aRad:Int = 0, ?aColor:FlxColor ) 
	{
		super(aX, aY);
		makeGraphic(aRad*2, aRad*2, FlxColor.TRANSPARENT, true);
		FlxSpriteUtil.drawCircle(this, aRad, aRad, aRad, aColor);
		
		
	}
	
	override public function update(aDt:Float):Void 
	{
		super.update(aDt);
	}

		override public function destroy():Void
	{
		super.destroy();
	}
	
}