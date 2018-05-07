package gameObjects;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.tile.FlxTilemap;

/**
 * ...
 * @author ...
 */
class Player1 extends FlxSprite
{
	var map:FlxTilemap;
	var jumpOnAirCount:Int = 0;
	@:isVar public var coins(get, set):Int = 0;
	@:isVar public var projectiles(default,set):FlxGroup;
	@:isVar public var projCount = -1;

	public function new(X:Float, Y:Float, aMap:FlxTilemap)
	{
		super(X, Y);
		map = aMap;
		//projectiles = aProjectiles;
		loadGraphic(AssetPaths.ariosheet__png, true, 128, 128);
		animation.add("run", [20, 21, 22, 23, 24, 25, 26, 27, 28]);
		animation.add("idle", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18]);
		animation.add("jump", [1,2,3]);
		animation.add("fall", [1,2,3]);
		//animation.add("wallHang", [11]);
//setColorTransform(0.9, 0.5, 0.2);
		animation.play("idle");
//offset.x =-20;

offset.y = 10;
		offset.x = 37;
		width = 55;
		height = 120;
		maxVelocity.x = 800;

//drag.x = 500; //no se aplica a la aceleracion

		acceleration.y = 3500;
	}

	public function intanceProjectiles()
	{
		projCount = 0;

	}
	
	
	public function set_projectiles(aProjectiles:FlxGroup):FlxGroup
	{
		return projectiles = aProjectiles;
	}


	public function create():Void
	{

	}

	override public function update(aDt:Float):Void
	{
		acceleration.x = 0;
		velocity.x = 0;

		if (FlxG.keys.pressed.A)
		{
			acceleration.x =-1500;
			velocity.x = -700;

		}

		if (FlxG.keys.pressed.D)
		{
			acceleration.x = 1500;
			velocity.x = 700;

		}

		if (FlxG.keys.justPressed.W)
		{
			if (isTouching(FlxObject.FLOOR))
			{
				velocity.y = -800;
			}
			else
			{
				if (jumpOnAirCount == 0)
				{
					jumpOnAirCount = jumpOnAirCount + 1;
					velocity.y = -800;

				}
				else
				{

				}

			}

		}

		if (isTouching(FlxObject.FLOOR))
		{
			jumpOnAirCount = 0;

		}

		if (FlxG.keys.justPressed.SPACE)
		{
			if (projectiles != null && projCount < projectiles.length && projCount !=-1)
			{
				projCount = projCount + 1;
				var pro:ProjectilePlayer = cast(projectiles.members[projCount-1], ProjectilePlayer);
				pro.shoot(this.x, this.y);
				pro.set_visible(true);
			}

		}

		if (velocity.x == 0 && velocity.y == 0)
		{
			animation.play("idle");
		}
		else
		{
			if (velocity.y != 0)
			{
				if (velocity.y > 0)
				{
					animation.play("fall");

				}
				else
				{

					animation.play("jump");
				}
			}
			else
			{
				if (velocity.x != 0)
				{
					animation.play("run");
					if (acceleration.x == 0)
					{

						animation.play("fall");
					}
					if (velocity.x * acceleration.x < 0)
					{
						animation.play("fall");

					}
				}

			}

		}

		if (acceleration.x > 0)
		{
			flipX = false;
		}

		if (acceleration.x < 0)
		{
			flipX = true;
		}
		super.update(aDt);

	}

	function isWallHang():Int
	{
		var leftX:Float = x - 3;
		var leftY:Float = y + (height/2);
		if (map.getTile(Std.int(leftX / 32), Std.int(leftY / 32)) > 0)
		{
			return FlxObject.LEFT;
		}

		var rightX:Float = x +width + 3;
		var rightY:Float = y + (height/2);
		if (map.getTile(Std.int(rightX / 32), Std.int(rightY / 32)) > 0)
		{
			return FlxObject.RIGHT;
		}

		return FlxObject.NONE;
	}

	public function set_coins(value:Int):Int
	{
		return coins = value;
	}

	public function get_coins():Int
	{
		return coins;
	}
}