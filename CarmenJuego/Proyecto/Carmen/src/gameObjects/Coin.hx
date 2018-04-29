package gameObjects;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.math.FlxPoint;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.tile.FlxTilemap;

/**
 * ...
 * @author 
 */
class Coin extends FlxSprite
{
	
	public function new(?X:Float=0, ?Y:Float=0) 
	{
		super(0, 0);
		frames = FlxAtlasFrames.fromSparrow("img/moneda.png", "img/moneda.xml");
		animation.addByPrefix("giro", "monedagiro_", 12);

		animation.play("giro");
		width = 32;
		height = 32;
		//offset.set(11, 7);
	}
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
	}

}