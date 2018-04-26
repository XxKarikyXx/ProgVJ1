package states ;
import flixel.FlxBasic;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.math.FlxPoint;
import flixel.tile.FlxTilemap;
import gameObjects.Player1;
import gameObjects.God;
import gameObjects.Coin;
import gameObjects.Projectile;
import openfl.Assets;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.group.FlxGroup;
import states.GameWin;

	
	/**
	 * ...
	 * @author joaquin
	 */
class GameState extends FlxState
{
	var map:FlxTilemap;
	var player:Player1;
	var god:God;
	var projectiles:FlxGroup;
   var coins:FlxGroup;
	var numberCoins:Int = 0;
	var resetPlaceCoin:Bool = true;
	
	public function new() 
	{
		super();
	}
	
	override public function create():Void 
	{
	map = new FlxTilemap();
	map.loadMapFromCSV(AssetPaths.cosahermosa__csv, AssetPaths.tiles__png, 32, 32);
	map.setTileProperties(12, FlxObject.NONE);
	add(map);
	
	projectiles = new FlxGroup();
	add(projectiles);
	        for (i in 0...2){
			var pro:Projectile = new Projectile();
			pro.set_visible(false);
		projectiles.add(pro);

		}
	player = new Player1(80, 900, map);

	add(player);
	god = new God(1000, 900, map);
		GlobalGameData.player = god;
add(god);



FlxG.camera.setScrollBoundsRect(0, 0, map.width, map.height);
FlxG.worldBounds.set(0, 0, map.width, map.height);

	coins = new FlxGroup();
	add(coins);
		for (i in 0...2){
			var c:Coin = new Coin(0, 0);
		coins.add(c);
		setCoinXAndYRandom(coins,c);
		numberCoins = numberCoins + 1;
		}
		


	}
	
		public function setCoinXAndYRandom(otherCoins:FlxGroup,aCoin:Coin):Void
	{
 
		var coinCoordinates:Array<FlxPoint> = map.getTileCoords(12, true);
		
		 var rand:Float = Math.random();
		  trace(rand);
		   trace(coinCoordinates.length);
		   rand = coinCoordinates.length * rand;
		    trace(rand);
		   rand = Math.round(rand);
		    trace(rand);
		 var index:Int = Std.int(rand)-1;

		 
		 trace(index);
		 
		var anX:Float = coinCoordinates[index].x;
		var anY:Float = coinCoordinates[index].y;
		 trace(anX);
		  trace(anY);
		
		if (otherCoins == null || otherCoins.length == 0)
		{

		}else
		{
		
		
			while (thereIsACoinHere(anX, anY,otherCoins))
			{
				
			rand= Math.random();
		 index = Math.round(coinCoordinates.length * rand)-1;
		 
		anX = coinCoordinates[index].x;
		anY = coinCoordinates[index].y;
			 
			}
	
		}
		trace(anX - aCoin.width);
		trace(anY - aCoin.height);
		aCoin.x = anX-aCoin.width;
		aCoin.y = anY-aCoin.height;
	}
	
	public function thereIsACoinHere(anX:Float, anY:Float,otherCoins:FlxGroup):Bool
	{
		//(x−a)2 + (y−b)2 = r2
		var ecuationA:Float = 0;
		var rad = (32 * 6);
		
		var cont = 0;

		 for (aCoin in otherCoins)
        {
		 var coin1:Coin = cast (aCoin, Coin);
         ecuationA = Math.pow(( coin1.x - anX), 2) + Math.pow((coin1.y - anY), 2);
		 
		 
		 if (Math.sqrt(ecuationA) < rad)
		 {
			 return true;
			 
		 }
		
		 cont = cont + 1;
        }
		return false;
	}
	
	public function playerCollectedAllCoins():Bool
	{
		
	return player.coins == numberCoins;
	}
	override public function update(aDt:Float):Void 
	{

		super.update(aDt);
		FlxG.collide(map, player);
		FlxG.collide(map, god);
		
	FlxG.overlap(player, coins, playerVsCoins);
		
if (playerCollectedAllCoins())
{	
	player.coins = 0;
	

	player.intanceProjectiles(projectiles);			
		}
		
		trace(projectiles.countLiving()+"PROYECTILES");
		if (projectiles!=null&&(projectiles.countLiving()==0||projectiles.countLiving()==-1)&&god.exists&&resetPlaceCoin)
		{
			resetPlaceCoin = false;
			shuffleCoins();
			
		}

	}
	//FlxG.switchState(new GameWin());

	function shuffleCoins()
	{
	/*	trace("shuffle");
		   for (i in 0...coins.length){
			var c:Coin=  cast coins.recycle(Coin);
		setCoinXAndYRandom(coins,c);
		}*/ //NO ANDA ESTO
		
		
	coins = new FlxGroup();
		add(coins);
		   for (i in 0...2){
			var c:Coin = new Coin(0,0);
			coins.add(c);
		setCoinXAndYRandom(coins,c);
		}
		}
		

	function playerVsCoins(aPlayer:Player1, aCoin:Coin)
	{
		aPlayer.coins = aPlayer.coins + 1;
		aCoin.destroy();
	}
	
	override public function destroy():Void 
	{
		super.destroy();
	}
	
}

