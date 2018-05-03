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
class ProjectilePlayer extends FlxSprite
{
	var followBool:Bool = false;
	@:isVar public var target(default,set):FlxSprite;
	var followTime:Float = 0;	
	var velocityProj:Int = 600;
	var followNumber = 0;
	

	public function new(atarget:FlxSprite,?aFollowTime:Int,?aVelocity:Int=600)
	{
		super();
		target = atarget;
		makeGraphic(10, 10);
		velocity.x =0;
		velocity.y = 0;
		
		velocityProj = aVelocity;
		followTime = aFollowTime;
		followNumber = aFollowTime;
		var a = new FlxTimer();
		
		//a.start(1, function(_) { trace('hola'); }, 0);
	}
	public function set_target(atarget:FlxSprite):FlxSprite
	{
		return target = atarget;
		
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		
		if (followBool)
		{
			followTarget();
			
		}

		if (followTime<0 &&followBool)
		{

			followBool = false;
			followTime = followNumber;
		}else
		{
			
			followTime = followTime-elapsed;
		}

		if (x<0 || x>FlxG.width||y<0||y>FlxG.height)
		{
			this.set_visible(false);
			reset(0,0);
			kill();
		}
	}

	public function shoot(ax:Float, ay:Float)
	{

		this.x = ax;
		this.y=ay;
		followBool = true;
		this.set_visible(true);
	}

	private function followTarget()
	{
		var target:FlxSprite = target;
		var deltaX:Float = (target.x+target.width*0.5) - (x+width*0.5);
		var deltaY:Float = (target.y + target.height * 0.5) -(y + height * 0.5);

		var length = Math.sqrt(deltaX * deltaX + deltaY * deltaY);
		deltaX /= length;
		deltaY /= length;
		velocity.x = deltaX * velocityProj;
		velocity.y = deltaY * velocityProj;

	}
}