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
import gameObjects.Player1;
import gameObjects.God;
import gameObjects.Coin;
import gameObjects.ProjectilePlayer;
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
	var actualTrap:Trap;
	var originalColor:ColorTransform = new ColorTransform();

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

	var skill1:FlxButtonAnimationSkill;
	var skill2:FlxButtonAnimationSkill;
	
	static inline var  tileIndexCoins = 2;
	static inline var  tileIndexNonCollision = 0; 
    static inline var  tileIndexNonCollisionBlack = 1; 
	
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
		map.setTileProperties(tileIndexCoins, FlxObject.NONE);
		map.setTileProperties(tileIndexNonCollisionBlack, FlxObject.NONE);
		add(map);

		player = new Player1(80, 900, map);
		god = new God(1700, 950, map);

		add(player);
		add(god);
		GlobalGameData.player = god;
		GlobalGameData.player2 = player;

		setPlayerData();
		setGodData();

		FlxG.camera.setScrollBoundsRect(0, 0, map.width, map.height);
		FlxG.worldBounds.set(0, 0, map.width, map.height);

		setCoinsData();

		textGame = new FlxText(50, 50, 0, "Objetos Jugador: " + player.coins + "/" + coins.length, 20);
		add(textGame);

		textSkill = new FlxText(1446, 50, 0, "", 10);
		add(textSkill);
		textSkill.textField.multiline = true;
		textSkill.textField.wordWrap = true;
		textSkill.textField.width = 150;

		setGodSkillsInMap();

		traps = new FlxGroup();
		add(traps);

		stunText = new FlxText(50, 50, 0, "Inmovilizado", 15);
		stunText.set_visible(false);
		add(stunText);
		
		stunTextPlayer = new FlxText(50, 50, 0, "Inmovilizado", 15);
		stunTextPlayer.set_visible(false);
		add(stunTextPlayer);
	}

	public function setGodSkillsInMap()
	{
		skill1 = new FlxButtonAnimationSkill(AssetPaths.balaplacebo__png, 57, 64, onClickSkill1,onClickSkill1Active,onOverSkill1,onRollOutSkill1,  3,0);
		skill1.setOver([1]);
		skill1.setUp([0]);
		skill1.setDown([2]);
		skill1.setCooldown([3]);
		skill1.setDisabled([4]);
		skill1.setPosition(1740, 50);
		add(skill1);
		//god.skill1 = skill1;

		skill2 = new FlxButtonAnimationSkill(AssetPaths.balaplacebo__png, 57, 64, onClickSkill2,onClickSkill2Active,onOverSkill2,onRollOutSkill2,  40,1);
		skill2.setOver([1]);
		skill2.setUp([0]);
		skill2.setDown([2]);
		skill2.setCooldown([3]);
		skill2.setDisabled([4]);
		skill2.setPosition(1825, 50);
		add(skill2);
		//god.skill1 = skill1;
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
	}

	public function onClickSkill1(aButton:FlxButtonAnimation)
	{
		resetSkill();
		for (i in 0...1)
		{
			projectilesGod.members[i].revive();
			projectilesGod.members[i].set_visible(false);
		}

		god.intanceProjectiles();
		god.idSkill = skill1.id;

	}

	public function onClickSkill1Active(aButton:FlxButtonAnimation)
	{
		resetSkill();
	}

	public function onOverSkill1(aButton:FlxButtonAnimation)
	{
		textSkill.text = "Dispara un proyectil en la dirección donde se haga click.      Cooldown: 4s";
	}

	public function onRollOutSkill1(aButton:FlxButtonAnimation)
	{
		//textSkill.text = "";
	}

	public function onClickSkill2(aButton:FlxButtonAnimation)
	{
		resetSkill();
		god.idSkill = skill2.id;
		var trap = new Trap(FlxG.mouse.x, FlxG.mouse.y);
		actualTrap = trap;
		traps.add(trap);
	}

	public function resetSkill()
	{
		switch (god.idSkill)
		{
			case 0:
				for (i in 0...1)
				{
					projectilesGod.members[i].kill();
				}
		skill1.activeButton = false;
		skill1.animation.play("up");
			case 1:
				traps.remove(actualTrap, true);
				actualTrap.destroy();
						skill2.activeButton = false;
						skill2.animation.play("up");

		}

		god.idSkill = -1;
	}

	public function onClickSkill2Active(aButton:FlxButtonAnimation)
	{
		resetSkill();
	}

	public function onOverSkill2(aButton:FlxButtonAnimation)
	{
		textSkill.text = "Pone una trampa en una superficie que inmoviliza.      Cooldown: 40s";
	}

	public function onRollOutSkill2(aButton:FlxButtonAnimation)
	{
		//textSkill.text = "";
	}

	public function setCoinXAndYRandom(otherCoins:FlxGroup,aCoin:Coin):Void
	{

		var coinCoordinates:Array<FlxPoint> = map.getTileCoords(tileIndexCoins, true);

		var rand:Float = Math.random();
		var index:Int = Math.round(coinCoordinates.length * rand)-1;

		var anX:Float = coinCoordinates[index].x-(aCoin.width/2);
		var anY:Float = coinCoordinates[index].y-(aCoin.height/2);

		if (otherCoins == null || otherCoins.length == 0)
		{

		}
		else
		{

			while (thereIsACoinHere(anX, anY,otherCoins,32 * 6))
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

	public function thereIsACoinHere(anX:Float, anY:Float,otherCoins:FlxGroup,aRad:Float):Bool
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
		FlxG.overlap(player, traps, trapsVsPlayer);

		if (playerCollectedAllCoins())
		{

			player.coins = 0;

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
			textGame.text="Objetos Jugador: " + player.coins + "/" + coins.length;
		}

		if (FlxG.keys.justPressed.ESCAPE)
		{

			FlxG.switchState(new MainMenu());
		}

		//EN GOD_
		if (FlxG.mouse.justPressed && god.idSkill !=-1)
		{
			runGodSkill();
		}
		
		if (god.idSkill == skill2.id&&actualTrap!=null)
		{

			actualTrap.setPosition(FlxG.mouse.x-32, FlxG.mouse.y-16);

			if (!thereIsPlayer(64, FlxG.mouse.x, FlxG.mouse.y) && itsOnASurface(64, FlxG.mouse.x, FlxG.mouse.y-16)&&!thereIsACoinHere(FlxG.mouse.x,FlxG.mouse.y-16,coins,32 * 2))
			{
                
				actualTrap.setColorTransform(0, 1, 0, 0.8);

			}
			else
			{
				actualTrap.setColorTransform(1, 0, 0, 0.8);
			}

		}

		//OJITO
		if (god.stateDuration!=-1&&god.state=="Stunned")
		{
			stunText.set_visible(true);
			stunText.setPosition(god.x, god.y);
		}
		else{
			stunText.set_visible(false);
		}
		
			//OJITO
		if (player.stateDuration!=-1&&player.state=="Stunned")
		{
			stunTextPlayer.set_visible(true);
			stunTextPlayer.setPosition(player.x, player.y);
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
	function runGodSkill()
	{
		if (!skill2.isTouchingButton()&&!skill1.isTouchingButton())
		{
			switch (god.idSkill)
			{
				case 0:
					skill1.setActivation();
					var proj:ProjectilePlayer = cast(projectilesGod.members[0], ProjectilePlayer);
					proj.setPointToFollow(FlxG.mouse.x, FlxG.mouse.y);
					proj.shoot(god.x+(god.width/2), god.y+(god.height/2));
					god.idSkill =-1;

				case 1:
					if (!thereIsPlayer(64, FlxG.mouse.x, FlxG.mouse.y) && itsOnASurface(64, FlxG.mouse.x, FlxG.mouse.y-16)&&!thereIsACoinHere(FlxG.mouse.x,FlxG.mouse.y-16,coins,32 * 2))
					{
						god.idSkill =-1;
						actualTrap.setColorTransform(1,1,1,1);
						actualTrap.canCollide = true;
						
						actualTrap = null;
						skill2.setActivation();
					}
			}
		}
	}

	function thereIsPlayer(aSizeOfSurface:Float,aX:Int,aY:Int):Bool
	{
		return ToolsForUse.IsInsideCircle(aX,aY,player.x+(player.width/2), player.y+(player.height/2),aSizeOfSurface+(aSizeOfSurface/2));
	}

	function itsOnASurface(aSizeOfSurface:Float,aX:Int,aY:Int):Bool
	{
		var midSize:Int = Std.int(aSizeOfSurface / 2);
		var midSize2:Int = Std.int(midSize / 2);

		if (map.getTile(Std.int(aX/32), Std.int(aY/32))==tileIndexNonCollision||map.getTile(Std.int(aX/32), Std.int(aY/32))==tileIndexCoins) //fijarte si donde toco es 0
		{
			//trace("no surface bb1");
			if (map.getTile(Std.int((aX + midSize2)/32), Std.int(aY/32)) == tileIndexNonCollision || map.getTile(Std.int((aX + midSize2)/32), Std.int(aY/32)) == tileIndexCoins)
			{

				if (map.getTile(Std.int(aX/32),Std.int(((midSize/2)+aY)/32))!=tileIndexNonCollision&&map.getTile(Std.int(aX/32), Std.int(((midSize/2)+aY)/32))!= tileIndexCoins) //fijarte si es superficie
				{
					if (map.getTile(Std.int((aX + midSize2)/32), Std.int(((midSize/2)+aY)/32)) != tileIndexNonCollision && map.getTile(Std.int((aX + midSize2)/32), Std.int(((midSize/2)+aY)/32)) != tileIndexCoins &&map.getTile(Std.int((aX + midSize2)/32), Std.int(((midSize/2)+aY)/32)) != tileIndexNonCollisionBlack)
					{
						return true;
						
					}

				}

			}

		}

		//trace("no surface bb");
		return false;
	}

	function playerVsCoins(aPlayer:Player1, aCoin:Coin)
	{
		aPlayer.coins = aPlayer.coins + 1;
		textGame.text = "Objetos Jugador: " + player.coins + "/" + coins.length;
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

