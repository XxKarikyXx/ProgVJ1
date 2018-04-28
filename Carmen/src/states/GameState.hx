package states ;
import flixel.FlxBasic;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
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
import states.GameWinPlayer;

/**
 * ...
 * @author 
 */
class GameState extends FlxState
{
	var map:FlxTilemap;
	var player:Player1;
	var god:God;
	var projectiles:FlxGroup;
	var coins:FlxGroup;
	var numberCoins:Int = 0;
	var resetPlaceCoin:Bool = false;
	var background:FlxSprite;
    var textGame:FlxText;
	
	public function new()
	{
		super();
	}

	override public function create():Void
	{
		background=new FlxSprite();
		background.loadGraphic(AssetPaths.backgroundGame__png,false, 1920, 1080);
        add(background);
		map = new FlxTilemap();
		map.loadMapFromCSV(AssetPaths.cosahermosa__csv, AssetPaths.tiles__png, 32, 32);
		map.setTileProperties(12, FlxObject.NONE);
		add(map);
     
		projectiles = new FlxGroup();
		add(projectiles);
		for (i in 0...2)
		{
			var pro:Projectile = new Projectile();
			projectiles.add(pro);
			pro.kill();
		}
		player = new Player1(80, 900, map,projectiles);

		add(player);
		god = new God(1700, 900, map);
		GlobalGameData.player = god;
		add(god);

		FlxG.camera.setScrollBoundsRect(0, 0, map.width, map.height);
		FlxG.worldBounds.set(0, 0, map.width, map.height);

		coins = new FlxGroup();
		add(coins);
		for (i in 0...2)
		{
			var c:Coin = new Coin(0, 0);
			setCoinXAndYRandom(coins, c);
			coins.add(c);
			numberCoins = numberCoins + 1;
		}

		textGame = new FlxText(50, 50, 0, "Objetos Jugador: " + player.coins + "/" + coins.length, 20);
		add(textGame);

	}

	public function setCoinXAndYRandom(otherCoins:FlxGroup,aCoin:Coin):Void
	{

		var coinCoordinates:Array<FlxPoint> = map.getTileCoords(12, true);

		var rand:Float = Math.random();
		var index:Int = Math.round(coinCoordinates.length * rand)-1;

		var anX:Float = coinCoordinates[index].x-(aCoin.width/2);
		var anY:Float = coinCoordinates[index].y-(aCoin.height/2);

		if (otherCoins == null || otherCoins.length == 0)
		{

		}
		else
		{

			while (thereIsACoinHere(anX, anY,otherCoins))
			{

				rand= Math.random();
				index = Math.round(coinCoordinates.length * rand)-1;

				anX =  coinCoordinates[index].x-(aCoin.width/2);
				anY =  coinCoordinates[index].y-(aCoin.height/2);

			}

		}

		aCoin.x = anX;
		aCoin.y = anY;
	}

	public function thereIsACoinHere(anX:Float, anY:Float,otherCoins:FlxGroup):Bool
	{
		//(x−a)2 + (y−b)2 = r2
		var rad = (32 * 6);

		var cont = 0;
		for (aCoin in otherCoins)
		{
			var coin1:Coin = cast (aCoin, Coin);
			if (ToolsForUse.IsInsideCircle(anX,anY,coin1.x, coin1.y, rad))
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
		FlxG.overlap(projectiles, god, projectilesVsGod);
		FlxG.overlap(player,god, playerVsGod);

		if (playerCollectedAllCoins())
		{
			
			player.coins = 0;

			for (i in 0...2)
			{
				projectiles.members[i].revive();
				projectiles.members[i].set_visible(false);
			}

			resetPlaceCoin = true;
			player.intanceProjectiles();
			
		}
		
		if (player.projCount !=-1)
		{
			textGame.text="¡Jugador puede matar a Dios (Espacio)! - Tiros: " + (projectiles.length-player.projCount) + "/" + projectiles.length;
			
		}

		if (projectiles!=null&&projectiles.countDead()==2&&god.exists&&resetPlaceCoin)
		{
			player.projCount =-1;
			resetPlaceCoin = false;
			shuffleCoins();
			textGame.text="Objetos Jugador: " + player.coins + "/" + coins.length;
		}

	}

	function shuffleCoins()
	{
		coins.destroy();
		coins = new FlxGroup();
		add(coins);
		for (i in 0...2)
		{
			var c:Coin = new Coin(0,0);
			setCoinXAndYRandom(coins,c);
		coins.add(c);
			
		}
	}

	function playerVsCoins(aPlayer:Player1, aCoin:Coin)
	{
		aPlayer.coins = aPlayer.coins + 1;
		textGame.text="Objetos Jugador: " + player.coins + "/" + coins.length;
		aCoin.destroy();
	}
	function projectilesVsGod(aProjectile:Projectile, aGod:God)
	{
		FlxG.switchState(new GameWinPlayer());
	}

	function playerVsGod(aPlayer:Player1, aGod:God)
	{
		FlxG.switchState(new GameOverPlayer());
	}

	override public function destroy():Void
	{
		super.destroy();
	}

}

