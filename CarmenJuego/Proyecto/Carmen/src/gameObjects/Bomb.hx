package gameObjects;
import flixel.FlxSprite;
import flixel.util.FlxColor;
using flixel.util.FlxSpriteUtil;

/**
 * ...
 * @author TuMadre
 */
class Bomb extends FlxSprite
{
	@:isVar public var vCanCollide:Bool = true;

	public function new(?aX:Float=0, ?aY:Float=0, ?aRad:Int=0) 
	{
		super(aX, aY);
		makeGraphic(aRad*2, aRad*2, FlxColor.TRANSPARENT, true);
		FlxSpriteUtil.drawCircle(this, aRad, aRad, aRad, FlxColor.RED);
		velocity.y = 800;
		
	}
	
	
	override public function update(aDt:Float):Void 
	{
		super.update(aDt);
	}

	
}