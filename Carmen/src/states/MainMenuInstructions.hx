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
		//Std.int(FlxG.width / 4), Std.int(FlxG.height / 6)
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
		
		back = new FlxButton(0, mp.height+(Std.int(FlxG.height / 9)*3)+350, "Volver", clickBack);
		back.setSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		back.setGraphicSize(Std.int(FlxG.width / 3), Std.int(FlxG.height / 9));
		back.screenCenter(X);
		back.updateHitbox();
		back.label.setFormat(65, FlxColor.BLACK,FlxTextAlign.CENTER);
		back.label.textField.width =Std.int( FlxG.width / 3);
		back.label.textField.height = Std.int(FlxG.height / 9);
		add(back);

	}
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

	}


	private function clickBack():Void
	{
		FlxG.switchState(new MainMenu());
	}



}