package gameObjects;
import flixel.FlxSprite;

/**
 * ...
 * @author TuMadre
 */
class Trap extends FlxSprite
{
	@:isVar public var canCollide:Bool = false;
	
	public function new(?X:Float=0, ?Y:Float=0) 
	{
		super(X, Y);
		loadGraphic(AssetPaths.ohno__jpg, true, 64, 32);
		width = 64;
		height = 32;

	}
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
	}

}