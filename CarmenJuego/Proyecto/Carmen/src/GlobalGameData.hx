package;
import flixel.group.FlxGroup;
import flixel.tile.FlxTilemap;
import gameObjects.Coin;
import gameObjects.God;
import gameObjects.Player1;
import openfl.display.Tilemap;


/**
 * ...
 * @author 
 */

class GlobalGameData 
{
	public static var player:God;
	public static var player2:Player1;
	public static var map:FlxTilemap;
	
	
	public static inline var  tileIndexCoins = 2;
	public static inline var  tileIndexNonCollision = 0; 
   public static inline var  tileIndexNonCollisionBlack = 1; 
	
   public static inline var tileSize = 32;
	
	
	public static function clear():Void
	{
		player = null;
		player2 = null;
		map = null;
	}
	
	
	public static function thereIsPlayer(aSizeOfSurface:Float,aX:Int,aY:Int):Bool
	{
		return ToolsForUse.IsInsideCircle(aX,aY,player2.x+(player2.width/2), player2.y+(player2.height/2),aSizeOfSurface+(aSizeOfSurface/2));
	}

	
	public static function itsOnASurface(aSizeOfSurface:Float,aX:Int,aY:Int):Bool
	{
		var midSize:Int = Std.int(aSizeOfSurface / 2);
		var midSize2:Int = Std.int(midSize / 2);

		if (map.getTile(Std.int(aX/tileSize), Std.int(aY/tileSize))==tileIndexNonCollision||map.getTile(Std.int(aX/tileSize), Std.int(aY/tileSize))==tileIndexCoins) //fijarte si donde toco es 0
		{
			if (map.getTile(Std.int((aX + midSize2)/tileSize), Std.int(aY/tileSize)) == tileIndexNonCollision || map.getTile(Std.int((aX + midSize2)/tileSize), Std.int(aY/tileSize)) == tileIndexCoins)
			{
				if (map.getTile(Std.int(aX/tileSize),Std.int(((midSize/2)+aY)/tileSize))!=tileIndexNonCollision&&map.getTile(Std.int(aX/tileSize), Std.int(((midSize/2)+aY)/tileSize))!= tileIndexCoins) //fijarte si es superficie
				{
					if (map.getTile(Std.int((aX + midSize2)/tileSize), Std.int(((midSize/2)+aY)/tileSize)) != tileIndexNonCollision && map.getTile(Std.int((aX + midSize2)/tileSize), Std.int(((midSize/2)+aY)/tileSize)) != tileIndexCoins &&map.getTile(Std.int((aX + midSize2)/tileSize), Std.int(((midSize/2)+aY)/tileSize)) != tileIndexNonCollisionBlack)
					{
						return true;
						
					}

				}

			}

		}
		return false;
	}
	
	
	public static function thereIsACoinHere(anX:Float, anY:Float,otherCoins:FlxGroup,aRad:Float):Bool
	{
		//(x−a)2 + (y−b)2 = r2
		var rad = aRad;

		for (aCoin in otherCoins)
		{

			var coin1:Coin = cast (aCoin, Coin);

			if (ToolsForUse.IsInsideCircle(anX,anY,coin1.x, coin1.y, rad))
			{
				return true;
			}

		}
		return false;
	}
	
}