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
    var projectiles:FlxGroup;
	@:isVar public var projCount = -1;
	
	public function new(X:Float, Y:Float, aMap:FlxTilemap) 
	{
		super(X, Y);
		map = aMap;
			loadGraphic(AssetPaths.hero__png, true, 45, 60);
animation.add("run", [2, 3, 4, 5, 6, 7, 8, 9], 30);
animation.add("idle", [10]);
animation.add("jump", [1]);
animation.add("fall", [0]);
animation.add("wallHang", [11]);

animation.play("idle");

offset.y = 20;
width = 40;
height = 41;
maxVelocity.x = 700;

//drag.x = 500; //no se aplica a la aceleracion

acceleration.y = 3500;
	}
	
	public function intanceProjectiles(aprojectiles:FlxGroup)
	{
		projCount = 0;
		projectiles=aprojectiles;

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
			if(isTouching(FlxObject.FLOOR)){
			velocity.y = -800;
			}else
			{
				if (jumpOnAirCount == 0)
				{
					jumpOnAirCount = jumpOnAirCount + 1;
						velocity.y = -800;
					
				}else
				{
					
					
				}

			}
			
		}
		
		
		
		if(isTouching(FlxObject.FLOOR))
		{
			jumpOnAirCount = 0;
			
		}
		
		if (FlxG.keys.justPressed.SPACE)
		{
		   trace("holaaa");
			if (projectiles != null && projectiles.length > 0 && projCount < projectiles.length && projCount !=-1){
				trace("entre");
			var pro:Projectile = cast(projectiles.getRandom(), Projectile);
			pro.set_visible(true);
			projCount = projCount + 1;
			pro.shoot(this.x,this.y);	
			//projectiles.remove(pro);
			}

			
		}
		
		if (velocity.x == 0 && velocity.y == 0)
		{
			animation.play("idle");
		}else
		{
			if (velocity.y != 0)
			{
				if (velocity.y > 0)
				{
					animation.play("fall");
					
				}else
				{
					
				animation.play("jump");	
				}
			}else
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
			flipX = true;		
		}
		
		if (acceleration.x < 0)
		{
			flipX = false;		
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