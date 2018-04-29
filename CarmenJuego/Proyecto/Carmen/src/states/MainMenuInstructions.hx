package states;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import openfl.geom.Rectangle;
import openfl.system.System;
import openfl.text.TextFieldAutoSize;

/**
 * ...
 * @author
 */
class MainMenuInstructions extends FlxState
{

	private var back:FlxButton;

	public function new()
	{
		super();
	}
	override public function create():Void
	{
		//"assets/fonts/grapple.ttf"

		var mp:FlxText = new FlxText(0, 100, 0, "Instrucciones", 70);
		mp.screenCenter(X);
		add(mp);

		var godTxt:FlxText = new FlxText(100, mp.height+Std.int(FlxG.height / 9)+100, 0, "Jugador 1: Recolecta todos los objetos del mapa, evitando que Dios te mate. Te mueves con a y d, saltas con w.", 20);
		godTxt.screenCenter(X);
		add(godTxt);

		var godTxt2:FlxText = new FlxText(100, godTxt.height+mp.height+Std.int(FlxG.height / 9)+100, 0, "Al recolectar todos los objetos podrás matar al Dios disparando proyectiles con ESPACIO.", 20);
		godTxt2.screenCenter(X);
		add(godTxt2);

		var player1Txt:FlxText = new FlxText(100, mp.height+Std.int(FlxG.height / 9)*2+200, 0, "Dios: Intenta matar a Jugador 1 antes de que él te mate a ti.", 20);
		player1Txt.screenCenter(X);
		add(player1Txt);
		var player1Txt2:FlxText = new FlxText(100, player1Txt.height+mp.height+Std.int(FlxG.height / 9)*2+200, 0, "Te mueves con las flechas. Con el mouse seleccionas y disparas habilidades.", 20);
		player1Txt2.screenCenter(X);
		add(player1Txt2);

		var backTxt:FlxText = new FlxText(100, mp.height+Std.int(FlxG.height / 9)*3+300, 0, "Para ir al menú principal sólo presione la tecla ESCAPE.", 20);
		backTxt.screenCenter(X);
		add(backTxt);

	}
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		if (FlxG.keys.justPressed.ESCAPE)
		{

			FlxG.switchState(new MainMenu());
		}

	}

	/*
		private function clickBack(aButton:FlxButtonAnimation):Void
		{
			FlxG.switchState(new MainMenu());
		}*/

}