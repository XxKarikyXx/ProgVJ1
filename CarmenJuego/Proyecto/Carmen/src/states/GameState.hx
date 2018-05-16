package states ;
import flash.geom.ColorTransform;
import flixel.FlxBasic;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxSoundAsset;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;
import gameObjects.Player1;
import gameObjects.God;
import gameObjects.Coin;
import gameObjects.ProjectilePlayer;
import skill.SkillsController;
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
	var vMap:FlxTilemap;
	var vPlayer:Player1;
	var vGod:God;
	var vProjectilesPlayer:FlxGroup;
	var vProjectilesGod:FlxGroup;

	var vTrapsGod:FlxGroup;

	var vBackgroundSound:FlxSound;

	var vCoinsPlayer:FlxGroup;
	var vResetPlaceCoin:Bool = false;
	var vBackgroundSprite:FlxSprite;
	var vTextGame:FlxText;
	var vTextSkill:FlxText;

	var vStunTextGod:FlxText;
	var vStunTextPlayer:FlxText;

	static inline var cNumberProjectilesPlayer:Int = 2;
	static inline var cNumberTotalCoins:Int = 2;

	var vSkillsGod:FlxGroup;
	var vSkillsGodText:FlxGroup;
	var vSkillsController:skill.SkillsController;

	public function new()
	{
		super();
	}

	override public function create():Void
	{
		vBackgroundSprite=new FlxSprite();
		vBackgroundSprite.loadGraphic(AssetPaths.fondo_azul__png,false, 1920, 1080);
		add(vBackgroundSprite);
		vMap = new FlxTilemap();
		vMap.loadMapFromCSV(AssetPaths.cosahermosa__csv, AssetPaths.tile_ladrillos__png, 32, 32);
		vMap.setTileProperties(GlobalGameData.cTileIndexCoins, FlxObject.NONE);
		vMap.setTileProperties(GlobalGameData.cTileIndexNonCollisionBlack, FlxObject.NONE);
		add(vMap);

		vBackgroundSound=FlxG.sound.load(AssetPaths.LaMulanaOSV__wav);
		add(vBackgroundSound);
		vBackgroundSound.looped = true;
		vBackgroundSound.play(true, 0);

		vPlayer = new Player1(80, 900);
		vGod = new God(1700, 950);

		add(vPlayer);
		add(vGod);
		GlobalGameData.vGod = vGod;
		GlobalGameData.vPlayer1 = vPlayer;
		GlobalGameData.vMap = vMap;

		vTextSkill = new FlxText(1446, 35, 0, "", 15);
		add(vTextSkill);
		vTextSkill.textField.multiline = true;
		vTextSkill.textField.wordWrap = true;
		vTextSkill.textField.width = 150;

		vTrapsGod = new FlxGroup();


		vSkillsGod = new FlxGroup();
		add(vSkillsGod);
		
				add(vTrapsGod);

		vSkillsGodText = new FlxGroup();
		add(vSkillsGodText);
		vSkillsController = new skill.SkillsController();
		
		setPlayerData();
		setSkillsControllerData();
		setGodData();

		FlxG.camera.setScrollBoundsRect(0, 0, vMap.width, vMap.height);
		FlxG.worldBounds.set(0, 0, vMap.width, vMap.height);

		setCoinsData();
		vPlayer.setCoins(vCoinsPlayer);

		vTextGame = new FlxText(50, 50, 0, "Objetos Jugador: " + vPlayer.vCoinsCount + "/" + vCoinsPlayer.length, 20);
		add(vTextGame);

		vStunTextGod = new FlxText(50, 50, 0, "Inmovilizado", 10);
		vStunTextGod.set_visible(false);
		add(vStunTextGod);

		vStunTextPlayer = new FlxText(50, 50, 0, "Inmovilizado", 10);
		vStunTextPlayer.set_visible(false);
		add(vStunTextPlayer);
	}

	public function setCoinsData()
	{
		vCoinsPlayer = new FlxGroup();
		add(vCoinsPlayer);
		for (i in 0...cNumberTotalCoins)
		{
			var c:Coin = new Coin(0, 0);
			setCoinXAndYRandom(vCoinsPlayer, c);
			vCoinsPlayer.add(c);
		}

	}

	public function setSkillsControllerData()
	{
vSkillsController.set_vSkills(vSkillsGod);
vSkillsController.set_vTextSkillDescription(vTextSkill);
vSkillsController.set_vTraps(vTrapsGod);
vSkillsController.set_vSkillsCountDownText(vSkillsGodText);

		vProjectilesGod = new FlxGroup();
		add(vProjectilesGod);
		for (i in 0...1)
		{
			var pro:ProjectilePlayer = new ProjectilePlayer(GlobalGameData.vPlayer1,0);
			vProjectilesGod.add(pro);
			pro.kill();
		}

		vSkillsController.set_vProjectiles(vProjectilesGod);
		
		vSkillsController.createAndAddSkills();
	}
	public function setPlayerData()
	{

		vProjectilesPlayer = new FlxGroup();
		add(vProjectilesPlayer);
		for (i in 0...cNumberProjectilesPlayer)
		{
			var pro:ProjectilePlayer = new ProjectilePlayer(GlobalGameData.vGod,4,550);
			vProjectilesPlayer.add(pro);
			pro.kill();
		}

		vPlayer.set_vProjectiles(vProjectilesPlayer);
		add(vPlayer.vJumpSound);
		GlobalGameData.vPlayer1 = vPlayer;
	}

	public function setGodData()
	{
		vGod.vSkillsController = this.vSkillsController;
	}

	public function setCoinXAndYRandom(otherCoins:FlxGroup,aCoin:Coin):Void
	{

		var coinCoordinates:Array<FlxPoint> = vMap.getTileCoords(GlobalGameData.cTileIndexCoins, true);

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

		return vPlayer.vCoinsCount == cNumberTotalCoins;
	}
	override public function update(aDt:Float):Void
	{

		super.update(aDt);

		FlxG.collide(vMap, vPlayer);
		FlxG.collide(vMap, vGod);

		FlxG.overlap(vPlayer, vCoinsPlayer, playerVsCoins);
		FlxG.overlap(vProjectilesPlayer, vGod, projectilesVsGod);
		FlxG.overlap(vProjectilesGod, vPlayer, projectilesVsPlayer);
		FlxG.overlap(vPlayer, vGod, playerVsGod);
		FlxG.overlap(vPlayer, vTrapsGod, trapsVsPlayer);

		if (playerCollectedAllCoins())
		{

			vPlayer.vCoinsCount = 0;

			for (i in 0...cNumberProjectilesPlayer)
			{
				vProjectilesPlayer.members[i].revive();
				vProjectilesPlayer.members[i].set_visible(false);
			}

			vPlayer.intanceProjectiles();
			vResetPlaceCoin = true;
		}

		if (vPlayer.vProjectilesCount !=-1)
		{
			vTextGame.text="¡Jugador puede matar a Dios (Espacio)! - Tiros: " + (vProjectilesPlayer.length-vPlayer.vProjectilesCount) + "/" + vProjectilesPlayer.length;

		}

		if (vProjectilesPlayer!=null&&vProjectilesPlayer.countDead()==2&&vGod.exists&&vResetPlaceCoin)
		{
			vPlayer.vProjectilesCount =-1;
			vResetPlaceCoin = false;
			shuffleCoins();
			vTextGame.text="Objetos Jugador: " + vPlayer.vCoinsCount + "/" + vCoinsPlayer.length;
		}

		if (FlxG.keys.justPressed.ESCAPE)
		{

			FlxG.switchState(new MainMenu());
		}

		if (vGod.vStateDuration!=-1&&vGod.vState==CharacterStates.cStunnedState)
		{
			vStunTextGod.set_visible(true);
			vStunTextGod.setPosition(vGod.x+(vGod.width/2)-(vStunTextGod.width/2), vGod.y);
		}
		else{
			vStunTextGod.set_visible(false);
		}


		if (vPlayer.vStateDuration!=-1&&vPlayer.vState==CharacterStates.cStunnedState)
		{
			vStunTextPlayer.set_visible(true);
			vStunTextPlayer.setPosition(vPlayer.x+(vPlayer.width/2)-(vStunTextPlayer.width/2), vPlayer.y);
		}
		else{
			vStunTextPlayer.set_visible(false);
		}
	}

	function shuffleCoins()
	{

		for (i in 0...cNumberTotalCoins)
		{
			vCoinsPlayer.members[i].revive();
			var c:Coin =cast(vCoinsPlayer.members[i],Coin);

			setCoinXAndYRandom(vCoinsPlayer,c);

		}
	}

	function playerVsCoins(aPlayer:Player1, aCoin:Coin)
	{
		aPlayer.vCoinsCount = aPlayer.vCoinsCount + 1;
		vTextGame.text = "Objetos Jugador: " + vPlayer.vCoinsCount + "/" + vCoinsPlayer.length;
		aCoin.setPosition(0, 0);
		aCoin.kill();

	}

	function trapsVsPlayer(aPlayer:Player1, aTrap:Trap)
	{
		if (aTrap.vCanCollide)
		{
			aPlayer.vState = "Stunned";
			aPlayer.vStateDuration = 2;
			vTrapsGod.remove(aTrap, true);
			aTrap.destroy();
		}
	}
	function projectilesVsGod(aProjectile:ProjectilePlayer, aGod:God)
	{
		if (aProjectile.vTarget!=null&&aProjectile.vTarget==aGod)
		{
			FlxG.switchState(new GameWinPlayer());
		}

	}

	function projectilesVsPlayer(aProjectile:ProjectilePlayer, aPlayer:Player1)
	{
		if (aProjectile.vTarget!=null&&aProjectile.vTarget!=vGod)
		{
			FlxG.switchState(new GameOverPlayer());
		}
	}

	function playerVsGod(aPlayer:Player1, aGod:God)
	{
		aGod.vState = "Stunned";
		aGod.vStateDuration = 3;
	}

	override public function destroy():Void
	{
		super.destroy();
	}

}

