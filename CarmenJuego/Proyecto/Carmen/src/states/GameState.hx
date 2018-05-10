package states ;
import flash.geom.ColorTransform;
import flixel.FlxBasic;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;
import gameObjects.Player1;
import gameObjects.God;
import gameObjects.Coin;
import gameObjects.ProjectilePlayer;
import gameObjects.SkillsController;
import gameObjects.Trap;
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
	var projectilesPlayer:FlxGroup;
	var projectilesGod:FlxGroup;

	var traps:FlxGroup;

	var coins:FlxGroup;
	var numberCoins:Int = 0;
	var resetPlaceCoin:Bool = false;
	var background:FlxSprite;
	var textGame:FlxText;
	var textSkill:FlxText;

	var stunText:FlxText;
	var stunTextPlayer:FlxText;

	static inline var numberProjectilesPlayer:Int = 2;
	static inline var numberTotalCoins:Int = 2;

	var skillsGod:FlxGroup;
	var skillsGodText:FlxGroup;
	var skillsController:SkillsController;

	var skill1:FlxButtonAnimationSkill;
	var skill2:FlxButtonAnimationSkill;

	public function new()
	{
		super();
	}

	override public function create():Void
	{
		background=new FlxSprite();
		background.loadGraphic(AssetPaths.fondo_azul__png,false, 1920, 1080);
		add(background);
		map = new FlxTilemap();
		map.loadMapFromCSV(AssetPaths.cosahermosa__csv, AssetPaths.tile_ladrillos__png, 32, 32);
		map.setTileProperties(GlobalGameData.tileIndexCoins, FlxObject.NONE);
		map.setTileProperties(GlobalGameData.tileIndexNonCollisionBlack, FlxObject.NONE);
		add(map);

		player = new Player1(80, 900, map);
		god = new God(1700, 950, map);

		add(player);
		add(god);
		GlobalGameData.player = god;
		GlobalGameData.player2 = player;
		GlobalGameData.map = map;

		textSkill = new FlxText(1446, 35, 0, "", 15);
		add(textSkill);
		textSkill.textField.multiline = true;
		textSkill.textField.wordWrap = true;
		textSkill.textField.width = 150;

		traps = new FlxGroup();
		add(traps);

		skillsGod = new FlxGroup();
		add(skillsGod);

		skillsGodText = new FlxGroup();
		add(skillsGodText);
		skillsController = new SkillsController(skillsGod, textSkill, traps, skillsGodText);
		
		setPlayerData();
		setGodData();

		FlxG.camera.setScrollBoundsRect(0, 0, map.width, map.height);
		FlxG.worldBounds.set(0, 0, map.width, map.height);

		setCoinsData();
		player.setCoins(coins);

		textGame = new FlxText(50, 50, 0, "Objetos Jugador: " + player.coinsCount + "/" + coins.length, 20);
		add(textGame);

		stunText = new FlxText(50, 50, 0, "Inmovilizado", 10);
		stunText.set_visible(false);
		add(stunText);

		stunTextPlayer = new FlxText(50, 50, 0, "Inmovilizado", 10);
		stunTextPlayer.set_visible(false);
		add(stunTextPlayer);
	}

	public function setCoinsData()
	{
		coins = new FlxGroup();
		add(coins);
		for (i in 0...numberTotalCoins)
		{
			var c:Coin = new Coin(0, 0);
			setCoinXAndYRandom(coins, c);
			coins.add(c);
			numberCoins = numberCoins + 1;
		}

	}
	

	public function setPlayerData()
	{

		projectilesPlayer = new FlxGroup();
		add(projectilesPlayer);
		for (i in 0...numberProjectilesPlayer)
		{
			var pro:ProjectilePlayer = new ProjectilePlayer(GlobalGameData.player,4,550);
			projectilesPlayer.add(pro);
			pro.kill();
		}

		player.set_projectiles(projectilesPlayer);
		GlobalGameData.player2 = player;
	}

	public function setGodData()
	{

		projectilesGod = new FlxGroup();
		add(projectilesGod);
		for (i in 0...1)
		{
			var pro:ProjectilePlayer = new ProjectilePlayer(GlobalGameData.player2,0);
			projectilesGod.add(pro);
			pro.kill();
		}

		god.set_projectiles(projectilesGod);
		god.skillsController = this.skillsController;
	}

	public function setCoinXAndYRandom(otherCoins:FlxGroup,aCoin:Coin):Void
	{

		var coinCoordinates:Array<FlxPoint> = map.getTileCoords(GlobalGameData.tileIndexCoins, true);

		var rand:Float = Math.random();
		var index:Int = Math.round(coinCoordinates.length * rand)-1;

		var anX:Float = coinCoordinates[index].x-(aCoin.width/2);
		var anY:Float = coinCoordinates[index].y-(aCoin.height/2);

		if (otherCoins == null || otherCoins.length == 0)
		{

		}
		else
		{

			while (GlobalGameData.thereIsACoinHere(anX, anY,otherCoins,aCoin.width * 6))
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

	public function playerCollectedAllCoins():Bool
	{

		return player.coinsCount == numberCoins;
	}
	override public function update(aDt:Float):Void
	{

		super.update(aDt);
		FlxG.collide(map, player);
		FlxG.collide(map, god);

		FlxG.overlap(player, coins, playerVsCoins);
		FlxG.overlap(projectilesPlayer, god, projectilesVsGod);
		FlxG.overlap(projectilesGod, player, projectilesVsPlayer);
		FlxG.overlap(player, god, playerVsGod);
		FlxG.overlap(player, traps, trapsVsPlayer);

		if (playerCollectedAllCoins())
		{

			player.coinsCount = 0;

			for (i in 0...numberProjectilesPlayer)
			{
				projectilesPlayer.members[i].revive();
				projectilesPlayer.members[i].set_visible(false);
			}

			player.intanceProjectiles();
			resetPlaceCoin = true;
		}

		if (player.projCount !=-1)
		{
			textGame.text="¡Jugador puede matar a Dios (Espacio)! - Tiros: " + (projectilesPlayer.length-player.projCount) + "/" + projectilesPlayer.length;

		}

		if (projectilesPlayer!=null&&projectilesPlayer.countDead()==2&&god.exists&&resetPlaceCoin)
		{
			player.projCount =-1;
			resetPlaceCoin = false;
			shuffleCoins();
			textGame.text="Objetos Jugador: " + player.coinsCount + "/" + coins.length;
		}

		if (FlxG.keys.justPressed.ESCAPE)
		{

			FlxG.switchState(new MainMenu());
		}


		//OJITO
		if (god.stateDuration!=-1&&god.state=="Stunned")
		{
			stunText.set_visible(true);
			stunText.setPosition(god.x+(god.width/2)-(stunText.width/2), god.y);
		}
		else{
			stunText.set_visible(false);
		}

		//OJITO
		if (player.stateDuration!=-1&&player.state=="Stunned")
		{
			stunTextPlayer.set_visible(true);
			stunTextPlayer.setPosition(player.x+(player.width/2)-(stunTextPlayer.width/2), player.y);
		}
		else{
			stunTextPlayer.set_visible(false);
		}
	}

	function shuffleCoins()
	{

		for (i in 0...numberTotalCoins)
		{
			coins.members[i].revive();
			var c:Coin =cast(coins.members[i],Coin);

			setCoinXAndYRandom(coins,c);

		}
	}

	function playerVsCoins(aPlayer:Player1, aCoin:Coin)
	{
		aPlayer.coinsCount = aPlayer.coinsCount + 1;
		textGame.text = "Objetos Jugador: " + player.coinsCount + "/" + coins.length;
		aCoin.setPosition(0, 0);
		aCoin.kill();

	}

	function trapsVsPlayer(aPlayer:Player1, aTrap:Trap)
	{
		if (aTrap.canCollide)
		{
			aPlayer.state = "Stunned";
			aPlayer.stateDuration = 2;
			traps.remove(aTrap, true);
			aTrap.destroy();
		}
	}
	function projectilesVsGod(aProjectile:ProjectilePlayer, aGod:God)
	{
		if (aProjectile.target!=null&&aProjectile.target==aGod)
		{
			FlxG.switchState(new GameWinPlayer());
		}

	}

	function projectilesVsPlayer(aProjectile:ProjectilePlayer, aPlayer:Player1)
	{
		if (aProjectile.target!=null&&aProjectile.target!=god)
		{
			FlxG.switchState(new GameOverPlayer());
		}
	}

	function playerVsGod(aPlayer:Player1, aGod:God)
	{
		aGod.state = "Stunned";
		aGod.stateDuration = 3;
	}

	override public function destroy():Void
	{
		super.destroy();
	}

}

