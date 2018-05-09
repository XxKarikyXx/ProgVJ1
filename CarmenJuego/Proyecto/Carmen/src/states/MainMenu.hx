package states;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import openfl.geom.Rectangle;
import openfl.system.System;
import openfl.text.TextFieldAutoSize;
import states.MainMenuInstructions;

/**
 * ...
 * @author
 */
class MainMenu extends FlxState
{

	var playButton:FlxButtonAnimation;
	var instructionsButton:FlxButtonAnimation;
	var exitButton:FlxButtonAnimation;
	
	private var index = 0;

	public function new()
	{
		super();
	}
	override public function create():Void
	{
		//"assets/fonts/grapple.ttf"
		//Std.int(FlxG.width / 4), Std.int(FlxG.height / 6)
		
		var spacerY:Float = 50;
		var spacerYTitle:Float = 150;
		
		var mp:FlxText = new FlxText(0, 100, 0, "Menú Principal", 70);
		mp.screenCenter(X);
		add(mp);

		 playButton = new FlxButtonAnimation(AssetPaths.button__png, 80, 20, onClickPlay);//la animacion de chivito boy
		playButton.setSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		playButton.setOver([1]);
		playButton.setUp([0]);
		playButton.setDown([2]);
		playButton.setPosition((FlxG.width / 2)-(playButton.width/2), mp.height+spacerYTitle+(playButton.height/2));
		playButton.setGraphicSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		add(playButton);
		playButton.updateHitbox();

		var labelPlayButton:FlxText = new FlxText();
		labelPlayButton.text = "Jugar";
		labelPlayButton.allowCollisions = FlxObject.NONE;
		labelPlayButton.setFormat(65, FlxColor.BLACK, FlxTextAlign.CENTER);
		labelPlayButton.y =(mp.height+spacerYTitle)+(playButton.height/2)+(labelPlayButton.height/4);
		labelPlayButton.x = (FlxG.width / 2)-(labelPlayButton.width/2);
		add(labelPlayButton);
		
		
		
		
		 instructionsButton= new FlxButtonAnimation(AssetPaths.button__png, 80, 20, onClickInstructions);//la animacion de chivito boy
		instructionsButton.setSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		instructionsButton.setOver([1]);
		instructionsButton.setUp([0]);
		instructionsButton.setDown([2]);
		instructionsButton.setPosition((FlxG.width / 2)-(instructionsButton.width/2), mp.height+spacerYTitle+(instructionsButton.height/2)+spacerY+Std.int(FlxG.height / 9));
		instructionsButton.setGraphicSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		add(instructionsButton);
		instructionsButton.updateHitbox();

		var labelInstructionsButton:FlxText = new FlxText();
		labelInstructionsButton.text = "Instrucciones";
		labelInstructionsButton.allowCollisions = FlxObject.NONE;
		labelInstructionsButton.setFormat(65, FlxColor.BLACK, FlxTextAlign.CENTER);
		labelInstructionsButton.y =(mp.height+spacerYTitle)+(instructionsButton.height/2)+(labelInstructionsButton.height/4)+spacerY+Std.int(FlxG.height / 9);
		labelInstructionsButton.x = (FlxG.width / 2)-(labelInstructionsButton.width/2);
		add(labelInstructionsButton);


	 exitButton= new FlxButtonAnimation(AssetPaths.button__png, 80, 20, onClickExit);//la animacion de chivito boy
		exitButton.setSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		exitButton.setOver([1]);
		exitButton.setUp([0]);
		exitButton.setDown([2]);
		exitButton.setPosition((FlxG.width / 2)-(exitButton.width/2), mp.height+spacerYTitle+(exitButton.height/2)+(spacerY*2)+Std.int(FlxG.height / 9)*2);
		exitButton.setGraphicSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		add(exitButton);
		exitButton.updateHitbox();

		var labelExitButton:FlxText = new FlxText();
		labelExitButton.text = "Salir";
		labelExitButton.allowCollisions = FlxObject.NONE;
		labelExitButton.setFormat(65, FlxColor.BLACK, FlxTextAlign.CENTER);
		labelExitButton.y =(mp.height+spacerYTitle)+(exitButton.height/2)+(labelExitButton.height/4)+(spacerY*2)+Std.int(FlxG.height / 9)*2;
		labelExitButton.x = (FlxG.width / 2)-(labelExitButton.width/2);
		add(labelExitButton);
		
		
		playButton.animation.play("over");
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
			if (FlxG.keys.justPressed.DOWN && index<2 )
			{
				index = index + 1;

			}

			if (FlxG.keys.justPressed.UP && index>0 )
			{
				index = index - 1;

			}

			if (FlxG.keys.justPressed.DOWN ||FlxG.keys.justPressed.UP)
			{
			playButton.animation.play("up");
						instructionsButton.animation.play("up");
						exitButton.animation.play("up");
				switch (index)
				{
					case 0:
						playButton.animation.play("over");

					case 1:
						instructionsButton.animation.play("over");

					case 2:
						exitButton.animation.play("over");

				}
			}

			if (FlxG.keys.justPressed.ENTER)
			{
			playButton.animation.play("up");
						instructionsButton.animation.play("up");
						exitButton.animation.play("up");
				switch (index)
				{
					case 0:
						playButton.animation.play("down");
						onClickPlay(playButton);

					case 1:
						instructionsButton.animation.play("down");
						onClickInstructions(instructionsButton);

					case 2:
						exitButton.animation.play("down");
						onClickExit(exitButton);

				}
			}
	}

	private function onClickPlay(aButton:FlxButtonAnimation):Void
	{
		FlxG.switchState(new GameState());
	}


	private function onClickInstructions(aButton:FlxButtonAnimation):Void
	{
		FlxG.switchState(new MainMenuInstructions());
	}

	private function onClickExit(aButton:FlxButtonAnimation):Void
	{
		System.exit(0);
		exitButton.animation.play("up");
	}

}