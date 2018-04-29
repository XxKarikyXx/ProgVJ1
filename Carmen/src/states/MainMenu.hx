package states;

import flixel.FlxG;
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
	private var startGame:FlxButton;
	private var instructions:FlxButton;
	private var exit:FlxButton;
	private var index = 0;

	public function new()
	{
		super();
	}
	override public function create():Void
	{
		//"assets/fonts/grapple.ttf"
		//Std.int(FlxG.width / 4), Std.int(FlxG.height / 6)
		var mp:FlxText = new FlxText(0, 100, 0, "Menú Principal", 70);
		mp.screenCenter(X);
		add(mp);
		
		

		startGame = new FlxButton(0,mp.height+250, "Jugar", clickPlay);
		startGame.setSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		startGame.setGraphicSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		startGame.screenCenter(X);
		startGame.updateHitbox();
		startGame.label.setFormat(65, FlxColor.BLACK,FlxTextAlign.CENTER);
		startGame.label.textField.width =Std.int( FlxG.width / 3);
		startGame.label.textField.height = Std.int(FlxG.height / 9);
		startGame.onOver.callback = overPlay;
        add(startGame);


		instructions = new FlxButton(0, mp.height+Std.int(FlxG.height / 9)+300, "Instrucciones", clickInstructions);
		instructions.setSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		instructions.setGraphicSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		instructions.screenCenter(X);
		instructions.updateHitbox();
		instructions.label.setFormat(65, FlxColor.BLACK,FlxTextAlign.CENTER);
		instructions.label.textField.width =Std.int( FlxG.width / 3);
		instructions.label.textField.height = Std.int(FlxG.height / 9);
		instructions.onOver.callback = overInstructions;
		add(instructions);

		trace(Std.int(FlxG.height / 9));
		
		exit = new FlxButton(0, mp.height+(Std.int(FlxG.height / 9)*2)+350, "Salir", clickExit);
		exit.setSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		exit.setGraphicSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		exit.screenCenter(X);
		exit.updateHitbox();
		exit.label.setFormat(65, FlxColor.BLACK,FlxTextAlign.CENTER);
		exit.label.textField.width =Std.int( FlxG.width / 3);
		exit.label.textField.height = Std.int(FlxG.height / 9);
		exit.onOver.callback = overExit;
				add(exit);

	}
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	/*	if (FlxG.keys.justPressed.DOWN && index<2 )
		{
			index = index + 1;

		}

		if (FlxG.keys.justPressed.UP && index>0 )
		{
			index = index - 1;

		}

		if (FlxG.keys.justPressed.DOWN ||FlxG.keys.justPressed.UP)
		{
		startGame.status=FlxButton.NORMAL;
					instructions.status=FlxButton.NORMAL;
					exit.status=FlxButton.NORMAL;
			switch (index)
			{
				case 0:
					startGame.status=FlxButton.HIGHLIGHT;

				case 1:
					instructions.status=FlxButton.HIGHLIGHT;

				case 2:
					exit.status=FlxButton.HIGHLIGHT;

			}
		}

		if (FlxG.keys.justPressed.ENTER)
		{
			startGame.status=FlxButton.NORMAL;
					instructions.status=FlxButton.NORMAL;
					exit.status=FlxButton.NORMAL;
			switch (index)
			{
				case 0:
					clickPlay();
					startGame.status=FlxButton.PRESSED;

				case 1:
					clickInstructions();
					instructions.status=FlxButton.PRESSED;

				case 2:
					clickExit();
					exit.status=FlxButton.PRESSED;

			}
		}*/
	}

	private function clickPlay():Void
	{
		FlxG.switchState(new GameState());
	}

	private function clickInstructions():Void
	{
		FlxG.switchState(new MainMenuInstructions());
	}

	private function clickExit():Void
	{
		System.exit(0);
	}

	private function overPlay():Void
	{
		index = 0;
	}
	private function overInstructions():Void
	{
		index = 1;
	}
	private function overExit():Void
	{
		index = 2;
	}

}