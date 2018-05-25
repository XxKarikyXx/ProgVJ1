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

class ProjectilePlayer extends FlxSprite
{
	var vFollowBool:Bool = false;
	@:isVar public var vTarget(default,set):FlxSprite;
	var vFollowTime:Float = 0;

	public var vVelocityProjectile:Int = 600;
	var vFollowTimeTotal = 0;

	var vFollowPointBool = false;

	var vXPoint:Float = 0;
	var vYPoint:Float = 0;

	public function new(aTarget:FlxSprite,?aFollowTime:Int,?aVelocity:Int=600)
	{
		super();

		vTarget = aTarget;
		makeGraphic(10, 10);
		velocity.x =0;
		velocity.y = 0;

		vVelocityProjectile = aVelocity;
		vFollowTime = aFollowTime;
		vFollowTimeTotal = aFollowTime;
		var a = new FlxTimer();
	}

	public function set_vTarget(atarget:FlxSprite):FlxSprite
	{
		return vTarget = atarget;

	}

	override public function update(aDt:Float):Void
	{
		super.update(aDt);

		if (vFollowBool)
		{
			if (!vFollowPointBool)
			{
				followTarget();
			}
			else
			{
				followPoint();
			}

		}

		if (vFollowTime<=0 &&vFollowBool)
		{

			vFollowBool = false;
			vFollowTime = vFollowTimeTotal;
		}
		else
		{

			vFollowTime = vFollowTime-aDt;
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
		reset(ax, ay);
		vFollowTime = vFollowTimeTotal;
		vFollowBool = true;
		this.set_visible(true);
	}

	public function setPointToFollow(axTo:Float, ayTo:Float)
	{
		vXPoint = axTo;
		vYPoint=ayTo;
		vFollowPointBool = true;
	}

	private function followTarget()
	{
		if (vTarget!=null)
		{
			var target:FlxSprite = vTarget;
			var deltaX:Float = (vTarget.x+vTarget.width*0.5) - (x+width*0.5);
			var deltaY:Float = (vTarget.y + vTarget.height * 0.5) -(y + height * 0.5);
			setVelocityWithDeltas(deltaX, deltaY);
		}

	}

	private function followPoint()
	{
		var deltaX:Float = (vXPoint+0.5) - (x+0.5);
		var deltaY:Float = (vYPoint + 0.5) -(y + 0.5);
		setVelocityWithDeltas(deltaX, deltaY);

	}

	private function setVelocityWithDeltas(aDeltaX:Float,aDeltaY:Float)
	{
		var deltaX = aDeltaX;
		var deltaY =	aDeltaY;
		var length = Math.sqrt(deltaX * deltaX + deltaY * deltaY);
		deltaX /= length;
		deltaY /= length;
		velocity.x = deltaX * vVelocityProjectile;
		velocity.y = deltaY * vVelocityProjectile;
	}
	
		override public function destroy():Void
	{
		super.destroy();
	}
}