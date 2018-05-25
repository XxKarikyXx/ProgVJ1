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

	public function new(?aX:Float=0, ?aY:Float=0)
	{
		super(aX, aY);
		frames = FlxAtlasFrames.fromSparrow("img/Sheets/moneda.png", "img/Sheets/moneda.xml");
		animation.addByPrefix("giro", "monedagiro_", 12);

		animation.play("giro");
		width = 32;
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