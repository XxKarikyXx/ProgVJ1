package gameObjects;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
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

maxVelocity.x = 550;
maxVelocity.y = 550;
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
	

}