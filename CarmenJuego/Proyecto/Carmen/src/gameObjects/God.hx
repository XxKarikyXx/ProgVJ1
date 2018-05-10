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
class God extends FlxSprite
{
	var map:FlxTilemap;
	@:isVar public var projectiles(default,set):FlxGroup;
	@:isVar public var projCount = -1;

	@:isVar public var state:String = "Normal";
	@:isVar public var stateDuration:Float = -1;
	public var skillsController(default,default):SkillsController;

	public function new(X:Float, Y:Float, aMap:FlxTilemap)
	{
		super(X, Y);
		map = aMap;
		//projectiles = aProjectiles;
		loadGraphic(AssetPaths.fantasmaDiosSheet__png, true, 80, 80);
		animation.add("run", [0, 1, 2, 3, 4, 5, 6, 7,8,9,10,11,12,13,14,15], 30);
		animation.add("idle", [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15], 30);
		set_alpha(0.5);
		//animation.add("jump", [1]);
		//animation.add("fall", [0]);
		//animation.add("wallHang", [11]);

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
	
		public function intanceProjectiles(){
		projCount = 0;

	}
	
		public function set_projectiles(aProjectiles:FlxGroup):FlxGroup
	{
		return projectiles = aProjectiles;
	}
	

	override public function update(aDt:Float):Void
	{
		acceleration.x = 0;
		velocity.x = 0;
		acceleration.y = 0;
		velocity.y = 0;
		
		switch(state){
			case "Normal":
				normalGodMovement(aDt);
			case "Stunned":
				godIsStunned(aDt);
		}


		if (FlxG.mouse.justPressed && skillsController.idSkill !=-1)
		{
			skillsController.runGodSkill(FlxG.mouse.x, FlxG.mouse.y, skillsController.idSkill);
			skillsController.idSkill =-1;
		}

		//PREGUNTAR
		if (skillsController.idSkill == 1&&skillsController.actualTrap!=null)
		{

			skillsController.actualTrap.setPosition(FlxG.mouse.x-(skillsController.actualTrap.width/2), FlxG.mouse.y-(skillsController.actualTrap.height/2));

			if (skillsController.skill2ConditionToPutElement())
			{
				skillsController.actualTrap.setColorTransform(0, 1, 0, 0.8);

			}
			else
			{
				skillsController.actualTrap.setColorTransform(1, 0, 0, 0.8);
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
					//animation.play("fall");

				}
				else
				{

				//	animation.play("jump");
				}
			}
			else
			{
				if (velocity.x != 0)
				{
					animation.play("run");
					if (acceleration.x == 0)
					{

					//	animation.play("fall");
					}
					if (velocity.x * acceleration.x < 0)
					{
						//animation.play("fall");

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
	
	function normalGodMovement(aDt:Float):Void
	{
		if (FlxG.keys.pressed.LEFT)
		{
			acceleration.x =-1100;
			velocity.x = -550;

		}

		if (FlxG.keys.pressed.RIGHT)
		{
			acceleration.x = 1100;
			velocity.x = 550;

		}

		if (FlxG.keys.pressed.UP)
		{
			acceleration.y = -1100;
			velocity.y = -550;

		}

		if (FlxG.keys.pressed.DOWN)
		{
			acceleration.y = 1100;
			velocity.y = 550;

		}
	}
	
	function godIsStunned(aDt:Float):Void
	{
		if (stateDuration <= 0) {
			state = "Normal";
			stateDuration = -1;
		} else{
			trace(stateDuration);
			stateDuration -= aDt;
		}
		
	}

}