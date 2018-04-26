package gameObjects;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxTimer;
import openfl.Lib;
import openfl.geom.Point;
import flixel.FlxG;
/**
 * ...
 * @author ...
 */

 //
class Projectile extends FlxSprite 
{
	var followBool:Bool = false;
	var timeStartToBeAlive:Int = 0;
	var shooteable:Bool = true;

	public function new() 
	{
		super();
		makeGraphic(10, 10);
		velocity.x =0;
		velocity.y = 0;
		var a = new FlxTimer();
		//a.start(1, function(_) { trace('hola'); }, 0);
	}
	
	
	
		override public function update(elapsed:Float):Void 
	{
	super.update(elapsed);
	
	if ((Lib.getTimer()/1000) - (timeStartToBeAlive/1000) >= 4 &&timeStartToBeAlive>0)
	{

		followBool = false;
		timeStartToBeAlive = 0;
	}
	
	if(followBool){
		followGod();
	}
		
		if (x<0 || x>FlxG.width||y<0||y>FlxG.height){
		kill();
	}
		}
	
	
	public function shoot(ax:Float, ay:Float)
	{

		reset(ax, ay);
		followBool = true;
		timeStartToBeAlive = Lib.getTimer();
	}
	
	
		private function followGod() {
	        var target:FlxSprite = GlobalGameData.player;
			var deltaX:Float = (target.x+target.width*0.5) - (x+width*0.5);
			var deltaY:Float = (target.y + target.height * 0.5) -(y + height * 0.5);
			trace(deltaX);
			trace(deltaY);
			trace(velocity);
			
			
			var length = Math.sqrt(deltaX * deltaX + deltaY * deltaY);
			deltaX /= length;
			deltaY /= length;
			velocity.x = deltaX * 400;
			velocity.y = deltaY * 400;
			
	}
}