package gameObjects;
import auxiliar.AssetPaths;
import flixel.FlxSprite;

/**
 * ...
 * @author ...
 */
class Trap extends FlxSprite
{
	@:isVar public var vCanCollide:Bool = false;
	
	public function new(?aX:Float=0, ?aY:Float=0) 
	{
		super(aX, aY);
		loadGraphic(AssetPaths.ohno__jpg, true, 64, 32);
		width = 64;
		height = 32;
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