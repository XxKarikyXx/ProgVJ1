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
	public static var vGod:God;
	public static var vPlayer1:Player1;
	public static var vMap:FlxTilemap;

	public static inline var  cTileIndexCoins = 2;
	public static inline var  cTileIndexNonCollision = 0;
	public static inline var  cTileIndexNonCollisionBlack = 1;

	public static inline var cTileSize = 32;

	public static function clear():Void
	{
		vGod = null;
		vPlayer1 = null;
		vMap = null;
	}

	public static function thereIsPlayer(aSizeOfSurface:Float,aX:Int,aY:Int):Bool
	{
		return auxiliar.ToolsForUse.IsInsideCircle(aX,aY,vPlayer1.x+(vPlayer1.width/2), vPlayer1.y+(vPlayer1.height/2),aSizeOfSurface);
	}

	public static function itsOnASurface(aSizeOfSurface:Float,aX:Int,aY:Int):Bool
	{
		var midSize:Int = Std.int(aSizeOfSurface / 2);
		var midSize2:Int = Std.int(midSize / 2);

		if (vMap.getTile(Std.int(aX/cTileSize), Std.int(aY/cTileSize))==cTileIndexNonCollision||vMap.getTile(Std.int(aX/cTileSize), Std.int(aY/cTileSize))==cTileIndexCoins) //fijarte si donde toco es 0
		{
			if (vMap.getTile(Std.int((aX + midSize2)/cTileSize), Std.int(aY/cTileSize)) == cTileIndexNonCollision || vMap.getTile(Std.int((aX + midSize2)/cTileSize), Std.int(aY/cTileSize)) == cTileIndexCoins)
			{
				if (vMap.getTile(Std.int(aX/cTileSize),Std.int(((midSize/2)+aY)/cTileSize))!=cTileIndexNonCollision&&vMap.getTile(Std.int(aX/cTileSize), Std.int(((midSize/2)+aY)/cTileSize))!= cTileIndexCoins) //fijarte si es superficie
				{
					if (vMap.getTile(Std.int((aX + midSize2)/cTileSize), Std.int(((midSize/2)+aY)/cTileSize)) != cTileIndexNonCollision && vMap.getTile(Std.int((aX + midSize2)/cTileSize), Std.int(((midSize/2)+aY)/cTileSize)) != cTileIndexCoins &&vMap.getTile(Std.int((aX + midSize2)/cTileSize), Std.int(((midSize/2)+aY)/cTileSize)) != cTileIndexNonCollisionBlack)
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
		var rad = aRad;

		for (aCoin in otherCoins)
		{

			var coin1:Coin = cast (aCoin, Coin);

			if (auxiliar.ToolsForUse.IsInsideCircle(anX,anY,coin1.x, coin1.y, rad))
			{
				return true;
			}

		}
		return false;
	}

}