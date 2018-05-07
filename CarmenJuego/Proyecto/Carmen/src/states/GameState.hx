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
import gameObjects.ProjectilePlayer;
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
	var coins:FlxGroup;
	var numberCoins:Int = 0;
	var resetPlaceCoin:Bool = false;
	var background:FlxSprite;
	var textGame:FlxText;
	var textSkill:FlxText; 
	var stunText:FlxText;

	var skill1:FlxButtonAnimationSkill;

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
		map.setTileProperties(16, FlxObject.NONE);
		map.setTileProperties(17, FlxObject.NONE);
		add(map);

		player = new Player1(80, 900, map);

		add(player);
		god = new God(1700, 950, map);
		GlobalGameData.player = god;
		add(god);

		projectilesPlayer = new FlxGroup();
		add(projectilesPlayer);
		for (i in 0...2)
		{
			var pro:ProjectilePlayer = new ProjectilePlayer(GlobalGameData.player,4);
			projectilesPlayer.add(pro);
			pro.kill();
		}

		player.set_projectiles(projectilesPlayer);
		GlobalGameData.player2 = player;

		projectilesGod = new FlxGroup();
		add(projectilesGod);
		for (i in 0...1)
		{
			var pro:ProjectilePlayer = new ProjectilePlayer(GlobalGameData.player2,0);
			projectilesGod.add(pro);
			pro.kill();
		}

		god.set_projectiles(projectilesGod);

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
		
		textSkill = new FlxText(1446, 50, 0, "", 10);
		add(textSkill);
		textSkill.textField.multiline = true;
		textSkill.textField.wordWrap = true;
		textSkill.textField.width = 150;
		

		skill1 = new FlxButtonAnimationSkill(AssetPaths.balaplacebo__png, 57, 64, onClickSkill1,onClickSkill1Active,onOverSkill1,onRollOutSkill1,  3);
		skill1.setOver([1]);
		skill1.setUp([0]);
		skill1.setDown([2]);
		skill1.setCooldown([3]);
		skill1.setDisabled([4]);
		skill1.setPosition(1820, 50);
		add(skill1);
		god.skill1 = skill1;
		
		stunText = new FlxText(50, 50, 0, "Stuneado!", 15);
		stunText.set_visible(false);
		add(stunText);
	}

	public function onClickSkill1(aButton:FlxButtonAnimation)
	{
			for (i in 0...1)
			{
				projectilesGod.members[i].revive();
				projectilesGod.members[i].set_visible(false);
			}

			god.intanceProjectiles();
			god.idSkill = 0;

	}
	
		public function onClickSkill1Active(aButton:FlxButtonAnimation)
	{
			god.idSkill = -1;
	}
	
		public function onOverSkill1(aButton:FlxButtonAnimation)
	{
			textSkill.text = "Dispara un proyectil en la dirección donde se haga click.      Cooldown: 4s";
	}
	
		public function onRollOutSkill1(aButton:FlxButtonAnimation)
	{
			textSkill.text = "";
	}

	public function setCoinXAndYRandom(otherCoins:FlxGroup,aCoin:Coin):Void
	{

		var coinCoordinates:Array<FlxPoint> = map.getTileCoords(16, true);

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
		FlxG.overlap(projectilesPlayer, god, projectilesVsGod);
		FlxG.overlap(projectilesGod, player, projectilesVsPlayer);
		FlxG.overlap(player, god, playerVsGod);

		if (playerCollectedAllCoins())
		{

			player.coins = 0;

			for (i in 0...2)
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
			trace("shuffle");
			player.projCount =-1;
			resetPlaceCoin = false;
			shuffleCoins();
			textGame.text="Objetos Jugador: " + player.coins + "/" + coins.length;
		}

		if (FlxG.keys.justPressed.ESCAPE)
		{

			FlxG.switchState(new MainMenu());
		}

		//EN GOD_
		if (FlxG.mouse.justPressed && god.idSkill !=-1)
		{
			switch (god.idSkill)
			{
				case 0:
					if (!skill1.isTouchingButton())
					{
						var someTarget = new FlxSprite();
						someTarget.makeGraphic(1, 1);
						someTarget.setPosition(FlxG.mouse.x, FlxG.mouse.y);
						someTarget.set_visible(false);
						add(someTarget);

						skill1.setActivation();
						var proj:ProjectilePlayer = cast(projectilesGod.members[0], ProjectilePlayer);
						proj.set_target(someTarget);
						proj.shoot(god.x, god.y);
						someTarget.destroy();
					}

			}

			god.idSkill =-1;

		}
		
		//OJITO
		if(god.stateDuration!=-1&&god.state=="Stunned")
		{
		stunText.set_visible(true);
		stunText.setPosition(god.x, god.y);
		}else{
			stunText.set_visible(false);
		}
	}

	function shuffleCoins()
	{

		for (i in 0...2)
		{
			coins.members[i].revive();
			var c:Coin =cast(coins.members[i],Coin);
		
			setCoinXAndYRandom(coins,c);

		}
	}

	function playerVsCoins(aPlayer:Player1, aCoin:Coin)
	{
		aPlayer.coins = aPlayer.coins + 1;
		textGame.text = "Objetos Jugador: " + player.coins + "/" + coins.length;
		aCoin.setPosition(0, 0);
		aCoin.kill();
	}
	function projectilesVsGod(aProjectile:ProjectilePlayer, aGod:God)
	{
		if (aProjectile.target==aGod)
		{
			FlxG.switchState(new GameWinPlayer());
		}

	}

	function projectilesVsPlayer(aProjectile:ProjectilePlayer, aPlayer:Player1)
	{
		if (aProjectile.target!=god)
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
