package;


import lime.app.Config;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {
	
	
	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	
	
	public static function init (config:Config):Void {
		
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
		
		var rootPath = null;
		
		if (config != null && Reflect.hasField (config, "rootPath")) {
			
			rootPath = Reflect.field (config, "rootPath");
			
		}
		
		if (rootPath == null) {
			
			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif (sys && windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end
			
		}
		
		Assets.defaultRootPath = rootPath;
		
		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end
		
		var data, manifest, library;
		
		data = '{"name":null,"assets":"aoy4:sizei2114y4:typey5:MUSICy2:idy26:flixel%2Fsounds%2Fbeep.mp3y9:pathGroupaR4y26:flixel%2Fsounds%2Fbeep.ogghy7:preloadtgoR0i39706R1R2R3y28:flixel%2Fsounds%2Fflixel.mp3R5aR8y28:flixel%2Fsounds%2Fflixel.ogghR7tgoR0i5794R1y5:SOUNDR3R6R5aR4R6hgoR0i33629R1R10R3R9R5aR8R9hgoR0i15744R1y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR3y30:flixel%2Ffonts%2Fnokiafc22.ttfR7tgoR0i29724R1R11R12y36:__ASSET__flixel_fonts_monsterrat_ttfR3y31:flixel%2Ffonts%2Fmonsterrat.ttfR7tgoy4:pathy33:flixel%2Fimages%2Fui%2Fbutton.pngR0i519R1y5:IMAGER3R18R7tgoR17y36:flixel%2Fimages%2Flogo%2Fdefault.pngR0i3280R1R19R3R20R7tgoR17y16:img%2Fbutton.pngR0i519R1R19R3R21R7tgoR17y15:img%2Fjulia.pngR0i5406R1R19R3R22R7tgoR17y15:img%2Fjulia.xmlR0i4842R1y4:TEXTR3R23R7tgoR17y14:img%2Fohno.jpgR0i5115R1R19R3R25R7tgoR17y28:img%2FSheets%2Fariosheet.pngR0i20680R1R19R3R26R7tgoR17y36:img%2FSheets%2FfantasmaDiosSheet.pngR0i10155R1R19R3R27R7tgoR17y28:img%2FSheets%2FIdleSheet.pngR0i1326157R1R19R3R28R7tgoR17y25:img%2FSheets%2Fmoneda.pngR0i3249R1R19R3R29R7tgoR17y25:img%2FSheets%2Fmoneda.xmlR0i775R1R24R3R30R7tgoR17y29:img%2FSheets%2Fmonedagiro.pngR0i1311R1R19R3R31R7tgoR17y29:img%2FSheets%2Fmonedagiro.xmlR0i795R1R24R3R32R7tgoR17y31:img%2FSheets%2FRunningSheet.pngR0i670601R1R19R3R33R7tgoR17y29:img%2FSheets%2FSheetCaida.pngR0i146688R1R19R3R34R7tgoR17y29:img%2FSheets%2FSheetSalto.pngR0i146688R1R19R3R35R7tgoR17y30:img%2FSkills%2Fbalaplacebo.pngR0i3495R1R19R3R36R7tgoR17y25:assets%2Fimg%2Fbutton.pngR0i519R1R19R3R37R7tgoR17y24:assets%2Fimg%2Fjulia.pngR0i5406R1R19R3R38R7tgoR17y24:assets%2Fimg%2Fjulia.xmlR0i4842R1R24R3R39R7tgoR17y23:assets%2Fimg%2Fohno.jpgR0i5115R1R19R3R40R7tgoR17y37:assets%2Fimg%2FSheets%2Fariosheet.pngR0i20680R1R19R3R41R7tgoR17y45:assets%2Fimg%2FSheets%2FfantasmaDiosSheet.pngR0i10155R1R19R3R42R7tgoR17y37:assets%2Fimg%2FSheets%2FIdleSheet.pngR0i1326157R1R19R3R43R7tgoR17y34:assets%2Fimg%2FSheets%2Fmoneda.pngR0i3249R1R19R3R44R7tgoR17y34:assets%2Fimg%2FSheets%2Fmoneda.xmlR0i775R1R24R3R45R7tgoR17y38:assets%2Fimg%2FSheets%2Fmonedagiro.pngR0i1311R1R19R3R46R7tgoR17y38:assets%2Fimg%2FSheets%2Fmonedagiro.xmlR0i795R1R24R3R47R7tgoR17y40:assets%2Fimg%2FSheets%2FRunningSheet.pngR0i670601R1R19R3R48R7tgoR17y38:assets%2Fimg%2FSheets%2FSheetCaida.pngR0i146688R1R19R3R49R7tgoR17y38:assets%2Fimg%2FSheets%2FSheetSalto.pngR0i146688R1R19R3R50R7tgoR17y39:assets%2Fimg%2FSkills%2Fbalaplacebo.pngR0i3495R1R19R3R51R7tgoR17y30:assets%2Fmap%2Fcosahermosa.csvR0i5901R1R24R3R52R7tgoR17y31:assets%2Fmap%2Fcosahermosa2.tmxR0i4764R1R24R3R53R7tgoR17y31:assets%2Fmap%2FdataTilespng.tsxR0i191R1R24R3R54R7tgoR17y29:assets%2Fmap%2Ffondo_azul.pngR0i213780R1R19R3R55R7tgoR17y39:assets%2Fmap%2FmapCSV_map2_specials.csvR0i2088R1R24R3R56R7tgoR17y36:assets%2Fmap%2FmapCSV_map2_tiles.csvR0i3965R1R24R3R57R7tgoR17y33:assets%2Fmap%2Ftile_ladrillos.pngR0i3091R1R19R3R58R7tgoR17y33:assets%2Fmap%2Ftile_ladrillos.tsxR0i202R1R24R3R59R7tgoR17y19:assets%2Fopenfl.svgR0i62271R1R24R3R60R7tgoR0i51699790R1R10R3y32:assets%2Fsound%2FLaMulanaOSV.wavR5aR61hR7tgoR0i397390R1R10R3y30:assets%2Fsound%2FMarioJump.wavR5aR62hR7tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		
		
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_julia_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_julia_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__img_ohno_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_sheets_ariosheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_sheets_fantasmadiossheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_sheets_idlesheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_sheets_moneda_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_sheets_moneda_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__img_sheets_monedagiro_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_sheets_monedagiro_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__img_sheets_runningsheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_sheets_sheetcaida_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_sheets_sheetsalto_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_skills_balaplacebo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_julia_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_julia_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_img_ohno_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_sheets_ariosheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_sheets_fantasmadiossheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_sheets_idlesheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_sheets_moneda_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_sheets_moneda_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_img_sheets_monedagiro_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_sheets_monedagiro_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_img_sheets_runningsheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_sheets_sheetcaida_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_sheets_sheetsalto_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_skills_balaplacebo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_map_cosahermosa_csv extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_map_cosahermosa2_tmx extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_map_datatilespng_tsx extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_map_fondo_azul_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_map_mapcsv_map2_specials_csv extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_map_mapcsv_map2_tiles_csv extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_map_tile_ladrillos_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_map_tile_ladrillos_tsx extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_openfl_svg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sound_lamulanaosv_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sound_mariojump_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("E:/HaxeToolkit/haxe/lib/flixel/4,4,1/assets/sounds/beep.mp3") #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("E:/HaxeToolkit/haxe/lib/flixel/4,4,1/assets/sounds/flixel.mp3") #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("E:/HaxeToolkit/haxe/lib/flixel/4,4,1/assets/sounds/beep.ogg") #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("E:/HaxeToolkit/haxe/lib/flixel/4,4,1/assets/sounds/flixel.ogg") #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("bin/html5/obj/webfont/nokiafc22.ttf") #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("bin/html5/obj/webfont/monsterrat.ttf") #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("E:/HaxeToolkit/haxe/lib/flixel/4,4,1/assets/images/ui/button.png") #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("E:/HaxeToolkit/haxe/lib/flixel/4,4,1/assets/images/logo/default.png") #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:image("assets/img/button.png") #if display private #end class __ASSET__img_button_png extends lime.graphics.Image {}
@:keep @:image("assets/img/julia.png") #if display private #end class __ASSET__img_julia_png extends lime.graphics.Image {}
@:keep @:file("assets/img/julia.xml") #if display private #end class __ASSET__img_julia_xml extends haxe.io.Bytes {}
@:keep @:image("assets/img/ohno.jpg") #if display private #end class __ASSET__img_ohno_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/ariosheet.png") #if display private #end class __ASSET__img_sheets_ariosheet_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/fantasmaDiosSheet.png") #if display private #end class __ASSET__img_sheets_fantasmadiossheet_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/IdleSheet.png") #if display private #end class __ASSET__img_sheets_idlesheet_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/moneda.png") #if display private #end class __ASSET__img_sheets_moneda_png extends lime.graphics.Image {}
@:keep @:file("assets/img/Sheets/moneda.xml") #if display private #end class __ASSET__img_sheets_moneda_xml extends haxe.io.Bytes {}
@:keep @:image("assets/img/Sheets/monedagiro.png") #if display private #end class __ASSET__img_sheets_monedagiro_png extends lime.graphics.Image {}
@:keep @:file("assets/img/Sheets/monedagiro.xml") #if display private #end class __ASSET__img_sheets_monedagiro_xml extends haxe.io.Bytes {}
@:keep @:image("assets/img/Sheets/RunningSheet.png") #if display private #end class __ASSET__img_sheets_runningsheet_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/SheetCaida.png") #if display private #end class __ASSET__img_sheets_sheetcaida_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/SheetSalto.png") #if display private #end class __ASSET__img_sheets_sheetsalto_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Skills/balaplacebo.png") #if display private #end class __ASSET__img_skills_balaplacebo_png extends lime.graphics.Image {}
@:keep @:image("assets/img/button.png") #if display private #end class __ASSET__assets_img_button_png extends lime.graphics.Image {}
@:keep @:image("assets/img/julia.png") #if display private #end class __ASSET__assets_img_julia_png extends lime.graphics.Image {}
@:keep @:file("assets/img/julia.xml") #if display private #end class __ASSET__assets_img_julia_xml extends haxe.io.Bytes {}
@:keep @:image("assets/img/ohno.jpg") #if display private #end class __ASSET__assets_img_ohno_jpg extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/ariosheet.png") #if display private #end class __ASSET__assets_img_sheets_ariosheet_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/fantasmaDiosSheet.png") #if display private #end class __ASSET__assets_img_sheets_fantasmadiossheet_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/IdleSheet.png") #if display private #end class __ASSET__assets_img_sheets_idlesheet_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/moneda.png") #if display private #end class __ASSET__assets_img_sheets_moneda_png extends lime.graphics.Image {}
@:keep @:file("assets/img/Sheets/moneda.xml") #if display private #end class __ASSET__assets_img_sheets_moneda_xml extends haxe.io.Bytes {}
@:keep @:image("assets/img/Sheets/monedagiro.png") #if display private #end class __ASSET__assets_img_sheets_monedagiro_png extends lime.graphics.Image {}
@:keep @:file("assets/img/Sheets/monedagiro.xml") #if display private #end class __ASSET__assets_img_sheets_monedagiro_xml extends haxe.io.Bytes {}
@:keep @:image("assets/img/Sheets/RunningSheet.png") #if display private #end class __ASSET__assets_img_sheets_runningsheet_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/SheetCaida.png") #if display private #end class __ASSET__assets_img_sheets_sheetcaida_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Sheets/SheetSalto.png") #if display private #end class __ASSET__assets_img_sheets_sheetsalto_png extends lime.graphics.Image {}
@:keep @:image("assets/img/Skills/balaplacebo.png") #if display private #end class __ASSET__assets_img_skills_balaplacebo_png extends lime.graphics.Image {}
@:keep @:file("assets/map/cosahermosa.csv") #if display private #end class __ASSET__assets_map_cosahermosa_csv extends haxe.io.Bytes {}
@:keep @:file("assets/map/cosahermosa2.tmx") #if display private #end class __ASSET__assets_map_cosahermosa2_tmx extends haxe.io.Bytes {}
@:keep @:file("assets/map/dataTilespng.tsx") #if display private #end class __ASSET__assets_map_datatilespng_tsx extends haxe.io.Bytes {}
@:keep @:image("assets/map/fondo_azul.png") #if display private #end class __ASSET__assets_map_fondo_azul_png extends lime.graphics.Image {}
@:keep @:file("assets/map/mapCSV_map2_specials.csv") #if display private #end class __ASSET__assets_map_mapcsv_map2_specials_csv extends haxe.io.Bytes {}
@:keep @:file("assets/map/mapCSV_map2_tiles.csv") #if display private #end class __ASSET__assets_map_mapcsv_map2_tiles_csv extends haxe.io.Bytes {}
@:keep @:image("assets/map/tile_ladrillos.png") #if display private #end class __ASSET__assets_map_tile_ladrillos_png extends lime.graphics.Image {}
@:keep @:file("assets/map/tile_ladrillos.tsx") #if display private #end class __ASSET__assets_map_tile_ladrillos_tsx extends haxe.io.Bytes {}
@:keep @:file("assets/openfl.svg") #if display private #end class __ASSET__assets_openfl_svg extends haxe.io.Bytes {}
@:keep @:file("assets/sound/LaMulanaOSV.wav") #if display private #end class __ASSET__assets_sound_lamulanaosv_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sound/MarioJump.wav") #if display private #end class __ASSET__assets_sound_mariojump_wav extends haxe.io.Bytes {}
@:keep @:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}


#end
#end