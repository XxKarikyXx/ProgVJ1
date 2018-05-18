package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/button.png", "img/button.png");
			type.set ("img/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/julia.png", "img/julia.png");
			type.set ("img/julia.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/julia.xml", "img/julia.xml");
			type.set ("img/julia.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/ohno.jpg", "img/ohno.jpg");
			type.set ("img/ohno.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Sheets/ariosheet.png", "img/Sheets/ariosheet.png");
			type.set ("img/Sheets/ariosheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Sheets/fantasmaDiosSheet.png", "img/Sheets/fantasmaDiosSheet.png");
			type.set ("img/Sheets/fantasmaDiosSheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Sheets/IdleSheet.png", "img/Sheets/IdleSheet.png");
			type.set ("img/Sheets/IdleSheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Sheets/moneda.png", "img/Sheets/moneda.png");
			type.set ("img/Sheets/moneda.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Sheets/moneda.xml", "img/Sheets/moneda.xml");
			type.set ("img/Sheets/moneda.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/Sheets/monedagiro.png", "img/Sheets/monedagiro.png");
			type.set ("img/Sheets/monedagiro.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Sheets/monedagiro.xml", "img/Sheets/monedagiro.xml");
			type.set ("img/Sheets/monedagiro.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/Sheets/RunningSheet.png", "img/Sheets/RunningSheet.png");
			type.set ("img/Sheets/RunningSheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Sheets/SheetCaida.png", "img/Sheets/SheetCaida.png");
			type.set ("img/Sheets/SheetCaida.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Sheets/SheetSalto.png", "img/Sheets/SheetSalto.png");
			type.set ("img/Sheets/SheetSalto.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Skills/balaplacebo.png", "img/Skills/balaplacebo.png");
			type.set ("img/Skills/balaplacebo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/button.png", "assets/img/button.png");
			type.set ("assets/img/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/julia.png", "assets/img/julia.png");
			type.set ("assets/img/julia.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/julia.xml", "assets/img/julia.xml");
			type.set ("assets/img/julia.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/ohno.jpg", "assets/img/ohno.jpg");
			type.set ("assets/img/ohno.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Sheets/ariosheet.png", "assets/img/Sheets/ariosheet.png");
			type.set ("assets/img/Sheets/ariosheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Sheets/fantasmaDiosSheet.png", "assets/img/Sheets/fantasmaDiosSheet.png");
			type.set ("assets/img/Sheets/fantasmaDiosSheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Sheets/IdleSheet.png", "assets/img/Sheets/IdleSheet.png");
			type.set ("assets/img/Sheets/IdleSheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Sheets/moneda.png", "assets/img/Sheets/moneda.png");
			type.set ("assets/img/Sheets/moneda.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Sheets/moneda.xml", "assets/img/Sheets/moneda.xml");
			type.set ("assets/img/Sheets/moneda.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/Sheets/monedagiro.png", "assets/img/Sheets/monedagiro.png");
			type.set ("assets/img/Sheets/monedagiro.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Sheets/monedagiro.xml", "assets/img/Sheets/monedagiro.xml");
			type.set ("assets/img/Sheets/monedagiro.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/Sheets/RunningSheet.png", "assets/img/Sheets/RunningSheet.png");
			type.set ("assets/img/Sheets/RunningSheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Sheets/SheetCaida.png", "assets/img/Sheets/SheetCaida.png");
			type.set ("assets/img/Sheets/SheetCaida.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Sheets/SheetSalto.png", "assets/img/Sheets/SheetSalto.png");
			type.set ("assets/img/Sheets/SheetSalto.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/Skills/balaplacebo.png", "assets/img/Skills/balaplacebo.png");
			type.set ("assets/img/Skills/balaplacebo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/map/cosahermosa.csv", "assets/map/cosahermosa.csv");
			type.set ("assets/map/cosahermosa.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/map/cosahermosa2.tmx", "assets/map/cosahermosa2.tmx");
			type.set ("assets/map/cosahermosa2.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/map/dataTilespng.tsx", "assets/map/dataTilespng.tsx");
			type.set ("assets/map/dataTilespng.tsx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/map/fondo_azul.png", "assets/map/fondo_azul.png");
			type.set ("assets/map/fondo_azul.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/map/mapCSV_map2_specials.csv", "assets/map/mapCSV_map2_specials.csv");
			type.set ("assets/map/mapCSV_map2_specials.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/map/mapCSV_map2_tiles.csv", "assets/map/mapCSV_map2_tiles.csv");
			type.set ("assets/map/mapCSV_map2_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/map/tile_ladrillos.png", "assets/map/tile_ladrillos.png");
			type.set ("assets/map/tile_ladrillos.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/map/tile_ladrillos.tsx", "assets/map/tile_ladrillos.tsx");
			type.set ("assets/map/tile_ladrillos.tsx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/openfl.svg", "assets/openfl.svg");
			type.set ("assets/openfl.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sound/LaMulanaOSV.wav", "assets/sound/LaMulanaOSV.wav");
			type.set ("assets/sound/LaMulanaOSV.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sound/MarioJump.wav", "assets/sound/MarioJump.wav");
			type.set ("assets/sound/MarioJump.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
