package gameObjects;

import auxiliar.AssetPaths;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.system.FlxSound;
import flixel.tile.FlxTilemap;
import powerups.IState;

/**
 * ...
 * @author ...
 */
class Player1 extends FlxSprite
{
	var vJumpOnAirCount:Int = 0;
	@:isVar public var vCoinsCount(get, set):Int = 0;
	@:isVar public var vProjectiles(default,set):FlxGroup;
	@:isVar public var vProjectilesCount:Int = -1;
	public var vCoins:FlxGroup;

	@:isVar public var vState:String = CharacterStates.cNormalState; //Reemplazar
	@:isVar public var vStateDuration:Float = -1;
	@:isVar public var vCurrentState:IState;

	@:isVar public var vJumpSound:FlxSound;

	static inline var cAccelerationx:Int = 1500;
	static inline var cVelocityx:Int = 700;
	static inline var cVelocityy:Int = 800;

	public function new(aX:Float, aY:Float)
	{
		super(aX, aY);

		vJumpSound = FlxG.sound.load(AssetPaths.MarioJump__wav);

		loadGraphic(AssetPaths.ariosheet__png, true, 128, 128);
		animation.add("run", [20, 21, 22, 23, 24, 25, 26, 27, 28]);
		animation.add("idle", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18]);
		animation.add("jump", [1,2,3]);
		animation.add("fall", [1,2,3]);

		animation.play("idle");

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
		vProjectilesCount = 0;

	}

	public function setCoins(aCoins:FlxGroup)
	{

		vCoins = aCoins;
	}

	public function set_vProjectiles(aProjectiles:FlxGroup):FlxGroup
	{
		return vProjectiles = aProjectiles;
	}

	public function create():Void
	{

	}

	override public function update(aDt:Float):Void
	{
		acceleration.x = 0;
		velocity.x = 0;

		switch (vState)
		{
			case CharacterStates.cNormalState:
				normalPlayerMovement(aDt);
			case CharacterStates.cStunnedState:
				playerStunned(aDt);
		}

		if (isTouching(FlxObject.FLOOR))
		{
			vJumpOnAirCount = 0;

		}

		if (FlxG.keys.justPressed.SPACE)
		{
			if (vProjectiles != null && vProjectilesCount < vProjectiles.length && vProjectilesCount !=-1)
			{
				vProjectilesCount = vProjectilesCount + 1;
				var pro:ProjectilePlayer = cast(vProjectiles.members[vProjectilesCount-1], ProjectilePlayer);
				pro.shoot(this.x+(this.width/2), this.y+(this.height/2));
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

	function normalPlayerMovement(aDt:Float)
	{

		if (FlxG.keys.pressed.A)
		{
			acceleration.x =-cAccelerationx;
			velocity.x = -cVelocityx;

		}

		if (FlxG.keys.pressed.D)
		{
			acceleration.x = cAccelerationx;
			velocity.x = cVelocityx;

		}

		if (FlxG.keys.justPressed.W)
		{
			if (isTouching(FlxObject.FLOOR))
			{
				velocity.y = -cVelocityy;
				vJumpSound.play(true, 500);
			}
			else
			{
				if (vJumpOnAirCount == 0)
				{
					vJumpSound.play(true, 500);
					vJumpOnAirCount = vJumpOnAirCount + 1;
					velocity.y = -cVelocityy;

				}
				else
				{

				}

			}

		}
	}
	
	function playerStunned(aDt:Float)
	{

		if (vStateDuration <= 0)
		{
			vState = CharacterStates.cNormalState;
			vStateDuration = -1;
		}
		else
		{
			vStateDuration -= aDt;
		}
	}

	public function set_vCoinsCount(value:Int):Int
	{
		return vCoinsCount = value;
	}

	public function get_vCoinsCount():Int
	{
		return vCoinsCount;
	}
	
		override public function destroy():Void
	{
		super.destroy();
	}
}