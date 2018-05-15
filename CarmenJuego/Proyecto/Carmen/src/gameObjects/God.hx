package gameObjects;

import SkillsController;
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
class God extends FlxSprite
{
	@:isVar public var vState(default,default):String = CharacterStates.cNormalState;
	@:isVar public var vStateDuration(default,default):Float = -1;
	@:isVar public var vSkillsController(default, default):SkillsController;

	static inline var cAccelerationy:Int = 1100;
	static inline var cAccelerationx:Int = 1100;
	static inline var cVelocityx:Int = 540;
	static inline var cVelocityy:Int = 540;

	public function new(aX:Float, aY:Float)
	{
		super(aX, aY);
		loadGraphic(AssetPaths.fantasmaDiosSheet__png, true, 80, 80);
		animation.add("run", [0, 1, 2, 3, 4, 5, 6, 7,8,9,10,11,12,13,14,15], 30);
		animation.add("idle", [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15], 30);
		set_alpha(0.5);

		animation.play("idle");

		offset.y = 15;
		offset.x =12;
		width = 57;
		height =57;

		maxVelocity.x = 540;
		maxVelocity.y = 540;
	}

	public function create():Void
	{

	}


	override public function update(aDt:Float):Void
	{
		acceleration.x = 0;
		velocity.x = 0;
		acceleration.y = 0;
		velocity.y = 0;

		switch (vState)
		{
			case CharacterStates.cNormalState:
				normalGodMovement(aDt);
			case CharacterStates.cStunnedState:
				godStunned(aDt);
		}

		if (FlxG.mouse.justPressed && vSkillsController.vIdSkill !=-1)
		{
			vSkillsController.runGodSkill(FlxG.mouse.x, FlxG.mouse.y, vSkillsController.vIdSkill);
		}

		vSkillsController.validateSkillsConditions();

		if (velocity.x == 0 && velocity.y == 0)
		{
			animation.play("idle");
		}
		else
		{
			if (velocity.y != 0)
			{

			}
			else
			{
				if (velocity.x != 0)
				{
					animation.play("run");
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

	function normalGodMovement(aDt:Float):Void
	{
		if (FlxG.keys.pressed.LEFT)
		{
			acceleration.x =-cAccelerationx;
			velocity.x = -cVelocityx;

		}

		if (FlxG.keys.pressed.RIGHT)
		{
			acceleration.x = cAccelerationx;
			velocity.x = cVelocityx;

		}

		if (FlxG.keys.pressed.UP)
		{
			acceleration.y = -cAccelerationy;
			velocity.y = -cVelocityy;

		}

		if (FlxG.keys.pressed.DOWN)
		{
			acceleration.y = cAccelerationy;
			velocity.y = cVelocityy;

		}
	}

	function godStunned(aDt:Float):Void
	{
		if (vStateDuration <= 0)
		{
			vState = CharacterStates.cNormalState;
			vStateDuration = -1;
		}
		else{
			trace(vStateDuration);
			vStateDuration -= aDt;
		}

	}

}