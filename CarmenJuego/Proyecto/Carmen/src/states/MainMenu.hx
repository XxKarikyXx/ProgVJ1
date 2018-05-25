package states;

import auxiliar.AssetPaths;
import auxiliar.FlxButtonAnimation;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import openfl.system.System;

/**
 * ...
 * @author
 */
class MainMenu extends FlxState
{

	var vPlayButton:FlxButtonAnimation;
	var vInstructionsButton:FlxButtonAnimation;
	var vExitButton:FlxButtonAnimation;
	var vMaxIndexForButtons:Int = 2;

	private var vIndex:Int = 0;

	public function new()
	{
		super();
	}
	override public function create():Void
	{
		var spacerY:Float = 50;
		var spacerYTitle:Float = 150;

		var mp:FlxText = new FlxText(0, 100, 0, "Menú Principal", 70);
		mp.screenCenter(X);
		add(mp);

		vPlayButton = new FlxButtonAnimation(AssetPaths.button__png, 80, 20, onClickPlay);
		vPlayButton.setSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		vPlayButton.setOver([1]);
		vPlayButton.setUp([0]);
		vPlayButton.setDown([2]);
		vPlayButton.setPosition((FlxG.width / 2)-(vPlayButton.width/2), mp.height+spacerYTitle+(vPlayButton.height/2));
		vPlayButton.setGraphicSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		add(vPlayButton);
		vPlayButton.updateHitbox();

		var labelPlayButton:FlxText = new FlxText();
		labelPlayButton.text = "Jugar";
		labelPlayButton.allowCollisions = FlxObject.NONE;
		labelPlayButton.setFormat(65, FlxColor.BLACK, FlxTextAlign.CENTER);
		labelPlayButton.y =(mp.height+spacerYTitle)+(vPlayButton.height/2)+(labelPlayButton.height/4);
		labelPlayButton.x = (FlxG.width / 2)-(labelPlayButton.width/2);
		add(labelPlayButton);

		vInstructionsButton= new FlxButtonAnimation(AssetPaths.button__png, 80, 20, onClickInstructions);//la animacion de chivito boy
		vInstructionsButton.setSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		vInstructionsButton.setOver([1]);
		vInstructionsButton.setUp([0]);
		vInstructionsButton.setDown([2]);
		vInstructionsButton.setPosition((FlxG.width / 2)-(vInstructionsButton.width/2), mp.height+spacerYTitle+(vInstructionsButton.height/2)+spacerY+Std.int(FlxG.height / 9));
		vInstructionsButton.setGraphicSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		add(vInstructionsButton);
		vInstructionsButton.updateHitbox();

		var labelInstructionsButton:FlxText = new FlxText();
		labelInstructionsButton.text = "Instrucciones";
		labelInstructionsButton.allowCollisions = FlxObject.NONE;
		labelInstructionsButton.setFormat(65, FlxColor.BLACK, FlxTextAlign.CENTER);
		labelInstructionsButton.y =(mp.height+spacerYTitle)+(vInstructionsButton.height/2)+(labelInstructionsButton.height/4)+spacerY+Std.int(FlxG.height / 9);
		labelInstructionsButton.x = (FlxG.width / 2)-(labelInstructionsButton.width/2);
		add(labelInstructionsButton);

		vExitButton= new FlxButtonAnimation(AssetPaths.button__png, 80, 20, onClickExit);
		vExitButton.setSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		vExitButton.setOver([1]);
		vExitButton.setUp([0]);
		vExitButton.setDown([2]);
		vExitButton.setPosition((FlxG.width / 2)-(vExitButton.width/2), mp.height+spacerYTitle+(vExitButton.height/2)+(spacerY*2)+Std.int(FlxG.height / 9)*2);
		vExitButton.setGraphicSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		add(vExitButton);
		vExitButton.updateHitbox();

		var labelExitButton:FlxText = new FlxText();
		labelExitButton.text = "Salir";
		labelExitButton.allowCollisions = FlxObject.NONE;
		labelExitButton.setFormat(65, FlxColor.BLACK, FlxTextAlign.CENTER);
		labelExitButton.y =(mp.height+spacerYTitle)+(vExitButton.height/2)+(labelExitButton.height/4)+(spacerY*2)+Std.int(FlxG.height / 9)*2;
		labelExitButton.x = (FlxG.width / 2)-(labelExitButton.width/2);
		add(labelExitButton);

		#if html5
		vExitButton.visible = false;
		vMaxIndexForButtons = 1;
		#end

		vPlayButton.animation.play("over");
	}

	override public function update(aDt:Float):Void
	{
		super.update(aDt);

		if (FlxG.keys.justPressed.DOWN && vIndex<vMaxIndexForButtons )
		{
			vIndex = vIndex + 1;

		}

		if (FlxG.keys.justPressed.UP && vIndex>0 )
		{
			vIndex = vIndex - 1;

		}

		if (FlxG.keys.justPressed.DOWN ||FlxG.keys.justPressed.UP)
		{
			vPlayButton.animation.play("up");
			vInstructionsButton.animation.play("up");
			vExitButton.animation.play("up");
			switch (vIndex)
			{
				case 0:
					vPlayButton.animation.play("over");

				case 1:
					vInstructionsButton.animation.play("over");

				case 2:
					vExitButton.animation.play("over");

			}
		}

		if (FlxG.keys.justPressed.ENTER)
		{
			vPlayButton.animation.play("up");
			vInstructionsButton.animation.play("up");
			vExitButton.animation.play("up");
			switch (vIndex)
			{
				case 0:
					vPlayButton.animation.play("down");
					onClickPlay(vPlayButton);

				case 1:
					vInstructionsButton.animation.play("down");
					onClickInstructions(vInstructionsButton);

				case 2:
					vExitButton.animation.play("down");
					onClickExit(vExitButton);

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
		vExitButton.animation.play("up");
	}

	override public function destroy():Void
	{
		super.destroy();
	}
}