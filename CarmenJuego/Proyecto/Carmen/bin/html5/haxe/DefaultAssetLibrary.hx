package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.net.HTTPRequest;
import lime.system.CFFI;
import lime.text.Font;
import lime.utils.Bytes;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if flash
		
		className.set ("flixel/sounds/beep.ogg", __ASSET__flixel_sounds_beep_ogg);
		type.set ("flixel/sounds/beep.ogg", AssetType.SOUND);
		className.set ("flixel/sounds/flixel.ogg", __ASSET__flixel_sounds_flixel_ogg);
		type.set ("flixel/sounds/flixel.ogg", AssetType.SOUND);
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		className.set ("flixel/images/logo/default.png", __ASSET__flixel_images_logo_default_png);
		type.set ("flixel/images/logo/default.png", AssetType.IMAGE);
		className.set ("img/backgroundGame.png", __ASSET__img_backgroundgame_png);
		type.set ("img/backgroundGame.png", AssetType.IMAGE);
		className.set ("img/julia.png", __ASSET__img_julia_png);
		type.set ("img/julia.png", AssetType.IMAGE);
		className.set ("img/julia.xml", __ASSET__img_julia_xml);
		type.set ("img/julia.xml", AssetType.TEXT);
		className.set ("img/moneda.png", __ASSET__img_moneda_png);
		type.set ("img/moneda.png", AssetType.IMAGE);
		className.set ("img/moneda.xml", __ASSET__img_moneda_xml);
		type.set ("img/moneda.xml", AssetType.TEXT);
		className.set ("img/monedagiro.png", __ASSET__img_monedagiro_png);
		type.set ("img/monedagiro.png", AssetType.IMAGE);
		className.set ("img/monedagiro.xml", __ASSET__img_monedagiro_xml);
		type.set ("img/monedagiro.xml", AssetType.TEXT);
		className.set ("assets/ariosheet.png", __ASSET__assets_ariosheet_png);
		type.set ("assets/ariosheet.png", AssetType.IMAGE);
		className.set ("assets/balaplacebo.png", __ASSET__assets_balaplacebo_png);
		type.set ("assets/balaplacebo.png", AssetType.IMAGE);
		className.set ("assets/button.png", __ASSET__assets_button_png);
		type.set ("assets/button.png", AssetType.IMAGE);
		className.set ("assets/cosahermosa.csv", __ASSET__assets_cosahermosa_csv);
		type.set ("assets/cosahermosa.csv", AssetType.TEXT);
		className.set ("assets/cosahermosa.tmx", __ASSET__assets_cosahermosa_tmx);
		type.set ("assets/cosahermosa.tmx", AssetType.TEXT);
		className.set ("assets/cosahermosa2.tmx", __ASSET__assets_cosahermosa2_tmx);
		type.set ("assets/cosahermosa2.tmx", AssetType.TEXT);
		className.set ("assets/dataTilespng.tsx", __ASSET__assets_datatilespng_tsx);
		type.set ("assets/dataTilespng.tsx", AssetType.TEXT);
		className.set ("assets/dust.png", __ASSET__assets_dust_png);
		type.set ("assets/dust.png", AssetType.IMAGE);
		className.set ("assets/explosion.png", __ASSET__assets_explosion_png);
		type.set ("assets/explosion.png", AssetType.IMAGE);
		className.set ("assets/fantasmaDiosSheet.png", __ASSET__assets_fantasmadiossheet_png);
		type.set ("assets/fantasmaDiosSheet.png", AssetType.IMAGE);
		className.set ("assets/fondo_azul.png", __ASSET__assets_fondo_azul_png);
		type.set ("assets/fondo_azul.png", AssetType.IMAGE);
		className.set ("assets/hero.png", __ASSET__assets_hero_png);
		type.set ("assets/hero.png", AssetType.IMAGE);
		className.set ("assets/IdleSheet.png", __ASSET__assets_idlesheet_png);
		type.set ("assets/IdleSheet.png", AssetType.IMAGE);
		className.set ("assets/img/backgroundGame.png", __ASSET__assets_img_backgroundgame_png);
		type.set ("assets/img/backgroundGame.png", AssetType.IMAGE);
		className.set ("assets/img/julia.png", __ASSET__assets_img_julia_png);
		type.set ("assets/img/julia.png", AssetType.IMAGE);
		className.set ("assets/img/julia.xml", __ASSET__assets_img_julia_xml);
		type.set ("assets/img/julia.xml", AssetType.TEXT);
		className.set ("assets/img/moneda.png", __ASSET__assets_img_moneda_png);
		type.set ("assets/img/moneda.png", AssetType.IMAGE);
		className.set ("assets/img/moneda.xml", __ASSET__assets_img_moneda_xml);
		type.set ("assets/img/moneda.xml", AssetType.TEXT);
		className.set ("assets/img/monedagiro.png", __ASSET__assets_img_monedagiro_png);
		type.set ("assets/img/monedagiro.png", AssetType.IMAGE);
		className.set ("assets/img/monedagiro.xml", __ASSET__assets_img_monedagiro_xml);
		type.set ("assets/img/monedagiro.xml", AssetType.TEXT);
		className.set ("assets/mapCSV_map2_specials.csv", __ASSET__assets_mapcsv_map2_specials_csv);
		type.set ("assets/mapCSV_map2_specials.csv", AssetType.TEXT);
		className.set ("assets/mapCSV_map2_tiles.csv", __ASSET__assets_mapcsv_map2_tiles_csv);
		type.set ("assets/mapCSV_map2_tiles.csv", AssetType.TEXT);
		className.set ("assets/ohno.jpg", __ASSET__assets_ohno_jpg);
		type.set ("assets/ohno.jpg", AssetType.IMAGE);
		className.set ("assets/openfl.svg", __ASSET__assets_openfl_svg);
		type.set ("assets/openfl.svg", AssetType.TEXT);
		className.set ("assets/RunningSheet.png", __ASSET__assets_runningsheet_png);
		type.set ("assets/RunningSheet.png", AssetType.IMAGE);
		className.set ("assets/SheetCaida.png", __ASSET__assets_sheetcaida_png);
		type.set ("assets/SheetCaida.png", AssetType.IMAGE);
		className.set ("assets/SheetSalto.png", __ASSET__assets_sheetsalto_png);
		type.set ("assets/SheetSalto.png", AssetType.IMAGE);
		className.set ("assets/tiles copia.png", __ASSET__assets_tiles_copia_png);
		type.set ("assets/tiles copia.png", AssetType.IMAGE);
		className.set ("assets/tiles.png", __ASSET__assets_tiles_png);
		type.set ("assets/tiles.png", AssetType.IMAGE);
		className.set ("assets/tile_ladrillos.png", __ASSET__assets_tile_ladrillos_png);
		type.set ("assets/tile_ladrillos.png", AssetType.IMAGE);
		className.set ("assets/tile_ladrillos.tsx", __ASSET__assets_tile_ladrillos_tsx);
		type.set ("assets/tile_ladrillos.tsx", AssetType.TEXT);
		
		
		#elseif html5
		
		var id;
		id = "flixel/sounds/beep.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "flixel/sounds/flixel.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "flixel/fonts/nokiafc22.ttf";
		className.set (id, __ASSET__flixel_fonts_nokiafc22_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/fonts/monsterrat.ttf";
		className.set (id, __ASSET__flixel_fonts_monsterrat_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/images/ui/button.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "flixel/images/logo/default.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/backgroundGame.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/julia.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/julia.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "img/moneda.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/moneda.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "img/monedagiro.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/monedagiro.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/ariosheet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/balaplacebo.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/button.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/cosahermosa.csv";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/cosahermosa.tmx";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/cosahermosa2.tmx";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/dataTilespng.tsx";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/dust.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/explosion.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/fantasmaDiosSheet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/fondo_azul.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/hero.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/IdleSheet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/backgroundGame.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/julia.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/julia.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/img/moneda.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/moneda.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/img/monedagiro.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/img/monedagiro.xml";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/mapCSV_map2_specials.csv";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/mapCSV_map2_tiles.csv";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/ohno.jpg";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/openfl.svg";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/RunningSheet.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/SheetCaida.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/SheetSalto.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/tiles copia.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/tiles.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/tile_ladrillos.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/tile_ladrillos.tsx";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("flixel/sounds/beep.ogg", __ASSET__flixel_sounds_beep_ogg);
		type.set ("flixel/sounds/beep.ogg", AssetType.SOUND);
		
		className.set ("flixel/sounds/flixel.ogg", __ASSET__flixel_sounds_flixel_ogg);
		type.set ("flixel/sounds/flixel.ogg", AssetType.SOUND);
		
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		
		className.set ("flixel/images/logo/default.png", __ASSET__flixel_images_logo_default_png);
		type.set ("flixel/images/logo/default.png", AssetType.IMAGE);
		
		className.set ("img/backgroundGame.png", __ASSET__img_backgroundgame_png);
		type.set ("img/backgroundGame.png", AssetType.IMAGE);
		
		className.set ("img/julia.png", __ASSET__img_julia_png);
		type.set ("img/julia.png", AssetType.IMAGE);
		
		className.set ("img/julia.xml", __ASSET__img_julia_xml);
		type.set ("img/julia.xml", AssetType.TEXT);
		
		className.set ("img/moneda.png", __ASSET__img_moneda_png);
		type.set ("img/moneda.png", AssetType.IMAGE);
		
		className.set ("img/moneda.xml", __ASSET__img_moneda_xml);
		type.set ("img/moneda.xml", AssetType.TEXT);
		
		className.set ("img/monedagiro.png", __ASSET__img_monedagiro_png);
		type.set ("img/monedagiro.png", AssetType.IMAGE);
		
		className.set ("img/monedagiro.xml", __ASSET__img_monedagiro_xml);
		type.set ("img/monedagiro.xml", AssetType.TEXT);
		
		className.set ("assets/ariosheet.png", __ASSET__assets_ariosheet_png);
		type.set ("assets/ariosheet.png", AssetType.IMAGE);
		
		className.set ("assets/balaplacebo.png", __ASSET__assets_balaplacebo_png);
		type.set ("assets/balaplacebo.png", AssetType.IMAGE);
		
		className.set ("assets/button.png", __ASSET__assets_button_png);
		type.set ("assets/button.png", AssetType.IMAGE);
		
		className.set ("assets/cosahermosa.csv", __ASSET__assets_cosahermosa_csv);
		type.set ("assets/cosahermosa.csv", AssetType.TEXT);
		
		className.set ("assets/cosahermosa.tmx", __ASSET__assets_cosahermosa_tmx);
		type.set ("assets/cosahermosa.tmx", AssetType.TEXT);
		
		className.set ("assets/cosahermosa2.tmx", __ASSET__assets_cosahermosa2_tmx);
		type.set ("assets/cosahermosa2.tmx", AssetType.TEXT);
		
		className.set ("assets/dataTilespng.tsx", __ASSET__assets_datatilespng_tsx);
		type.set ("assets/dataTilespng.tsx", AssetType.TEXT);
		
		className.set ("assets/dust.png", __ASSET__assets_dust_png);
		type.set ("assets/dust.png", AssetType.IMAGE);
		
		className.set ("assets/explosion.png", __ASSET__assets_explosion_png);
		type.set ("assets/explosion.png", AssetType.IMAGE);
		
		className.set ("assets/fantasmaDiosSheet.png", __ASSET__assets_fantasmadiossheet_png);
		type.set ("assets/fantasmaDiosSheet.png", AssetType.IMAGE);
		
		className.set ("assets/fondo_azul.png", __ASSET__assets_fondo_azul_png);
		type.set ("assets/fondo_azul.png", AssetType.IMAGE);
		
		className.set ("assets/hero.png", __ASSET__assets_hero_png);
		type.set ("assets/hero.png", AssetType.IMAGE);
		
		className.set ("assets/IdleSheet.png", __ASSET__assets_idlesheet_png);
		type.set ("assets/IdleSheet.png", AssetType.IMAGE);
		
		className.set ("assets/img/backgroundGame.png", __ASSET__assets_img_backgroundgame_png);
		type.set ("assets/img/backgroundGame.png", AssetType.IMAGE);
		
		className.set ("assets/img/julia.png", __ASSET__assets_img_julia_png);
		type.set ("assets/img/julia.png", AssetType.IMAGE);
		
		className.set ("assets/img/julia.xml", __ASSET__assets_img_julia_xml);
		type.set ("assets/img/julia.xml", AssetType.TEXT);
		
		className.set ("assets/img/moneda.png", __ASSET__assets_img_moneda_png);
		type.set ("assets/img/moneda.png", AssetType.IMAGE);
		
		className.set ("assets/img/moneda.xml", __ASSET__assets_img_moneda_xml);
		type.set ("assets/img/moneda.xml", AssetType.TEXT);
		
		className.set ("assets/img/monedagiro.png", __ASSET__assets_img_monedagiro_png);
		type.set ("assets/img/monedagiro.png", AssetType.IMAGE);
		
		className.set ("assets/img/monedagiro.xml", __ASSET__assets_img_monedagiro_xml);
		type.set ("assets/img/monedagiro.xml", AssetType.TEXT);
		
		className.set ("assets/mapCSV_map2_specials.csv", __ASSET__assets_mapcsv_map2_specials_csv);
		type.set ("assets/mapCSV_map2_specials.csv", AssetType.TEXT);
		
		className.set ("assets/mapCSV_map2_tiles.csv", __ASSET__assets_mapcsv_map2_tiles_csv);
		type.set ("assets/mapCSV_map2_tiles.csv", AssetType.TEXT);
		
		className.set ("assets/ohno.jpg", __ASSET__assets_ohno_jpg);
		type.set ("assets/ohno.jpg", AssetType.IMAGE);
		
		className.set ("assets/openfl.svg", __ASSET__assets_openfl_svg);
		type.set ("assets/openfl.svg", AssetType.TEXT);
		
		className.set ("assets/RunningSheet.png", __ASSET__assets_runningsheet_png);
		type.set ("assets/RunningSheet.png", AssetType.IMAGE);
		
		className.set ("assets/SheetCaida.png", __ASSET__assets_sheetcaida_png);
		type.set ("assets/SheetCaida.png", AssetType.IMAGE);
		
		className.set ("assets/SheetSalto.png", __ASSET__assets_sheetsalto_png);
		type.set ("assets/SheetSalto.png", AssetType.IMAGE);
		
		className.set ("assets/tiles copia.png", __ASSET__assets_tiles_copia_png);
		type.set ("assets/tiles copia.png", AssetType.IMAGE);
		
		className.set ("assets/tiles.png", __ASSET__assets_tiles_png);
		type.set ("assets/tiles.png", AssetType.IMAGE);
		
		className.set ("assets/tile_ladrillos.png", __ASSET__assets_tile_ladrillos_png);
		type.set ("assets/tile_ladrillos.png", AssetType.IMAGE);
		
		className.set ("assets/tile_ladrillos.tsx", __ASSET__assets_tile_ladrillos_tsx);
		type.set ("assets/tile_ladrillos.tsx", AssetType.TEXT);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == TEXT && assetType == BINARY) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), Bytes));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):Bytes {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return Bytes.ofData (cast (Type.createInstance (className.get (id), []), flash.utils.ByteArray));
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return Bytes.ofData (bitmapData.getPixels (bitmapData.rect));
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), Bytes);
		
		#elseif html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Bytes);
		else return Bytes.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes.getString (0, bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.getString (0, bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<Bytes> {
		
		var promise = new Promise<Bytes> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = flash.net.URLLoaderDataFormat.BINARY;
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = Bytes.ofData (event.currentTarget.data);
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			promise.completeWith (request.load (path.get (id) + "?" + Assets.cache.version));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Bytes> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id) + "?" + Assets.cache.version;
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = Bytes.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = Bytes.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = Bytes.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = Bytes.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = Bytes.readFile ("assets/manifest");
			#else
			var bytes = Bytes.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				if (bytes.length > 0) {
					
					var data = bytes.getString (0, bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			var future = request.load (path.get (id) + "?" + Assets.cache.version);
			future.onProgress (function (progress) promise.progress (progress));
			future.onError (function (msg) promise.error (msg));
			future.onComplete (function (bytes) promise.complete (bytes.getString (0, bytes.length)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.getString (0, bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_backgroundgame_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_julia_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_julia_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__img_moneda_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_moneda_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__img_monedagiro_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_monedagiro_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_ariosheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_balaplacebo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cosahermosa_csv extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_cosahermosa_tmx extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_cosahermosa2_tmx extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_datatilespng_tsx extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_dust_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_explosion_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_fantasmadiossheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_fondo_azul_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_hero_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_idlesheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_backgroundgame_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_julia_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_julia_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_img_moneda_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_moneda_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_img_monedagiro_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_img_monedagiro_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_mapcsv_map2_specials_csv extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_mapcsv_map2_tiles_csv extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_ohno_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_openfl_svg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_runningsheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_sheetcaida_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_sheetsalto_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_tiles_copia_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_tile_ladrillos_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_tile_ladrillos_tsx extends null { }


#elseif html5



@:keep #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { super (); name = "Nokia Cellphone FC Small"; } } 
@:keep #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { super (); name = "Monsterrat"; } } 










































#else



#if (windows || mac || linux || cpp)


@:file("E:/HaxeToolkit/haxe/lib/flixel/4,2,1/assets/sounds/beep.ogg") #if display private #end class __ASSET__flixel_sounds_beep_ogg extends lime.utils.Bytes {}
@:file("E:/HaxeToolkit/haxe/lib/flixel/4,2,1/assets/sounds/flixel.ogg") #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends lime.utils.Bytes {}
@:font("E:/HaxeToolkit/haxe/lib/flixel/4,2,1/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:font("E:/HaxeToolkit/haxe/lib/flixel/4,2,1/assets/fonts/monsterrat.ttf") #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:image("E:/HaxeToolkit/haxe/lib/flixel/4,2,1/assets/images/ui/button.png") #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:image("E:/HaxeToolkit/haxe/lib/flixel/4,2,1/assets/images/logo/default.png") #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:image("assets/img/backgroundGame.png") #if display private #end class __ASSET__img_backgroundgame_png extends lime.graphics.Image {}
@:image("assets/img/julia.png") #if display private #end class __ASSET__img_julia_png extends lime.graphics.Image {}
@:file("assets/img/julia.xml") #if display private #end class __ASSET__img_julia_xml extends lime.utils.Bytes {}
@:image("assets/img/moneda.png") #if display private #end class __ASSET__img_moneda_png extends lime.graphics.Image {}
@:file("assets/img/moneda.xml") #if display private #end class __ASSET__img_moneda_xml extends lime.utils.Bytes {}
@:image("assets/img/monedagiro.png") #if display private #end class __ASSET__img_monedagiro_png extends lime.graphics.Image {}
@:file("assets/img/monedagiro.xml") #if display private #end class __ASSET__img_monedagiro_xml extends lime.utils.Bytes {}
@:image("assets/ariosheet.png") #if display private #end class __ASSET__assets_ariosheet_png extends lime.graphics.Image {}
@:image("assets/balaplacebo.png") #if display private #end class __ASSET__assets_balaplacebo_png extends lime.graphics.Image {}
@:image("assets/button.png") #if display private #end class __ASSET__assets_button_png extends lime.graphics.Image {}
@:file("assets/cosahermosa.csv") #if display private #end class __ASSET__assets_cosahermosa_csv extends lime.utils.Bytes {}
@:file("assets/cosahermosa.tmx") #if display private #end class __ASSET__assets_cosahermosa_tmx extends lime.utils.Bytes {}
@:file("assets/cosahermosa2.tmx") #if display private #end class __ASSET__assets_cosahermosa2_tmx extends lime.utils.Bytes {}
@:file("assets/dataTilespng.tsx") #if display private #end class __ASSET__assets_datatilespng_tsx extends lime.utils.Bytes {}
@:image("assets/dust.png") #if display private #end class __ASSET__assets_dust_png extends lime.graphics.Image {}
@:image("assets/explosion.png") #if display private #end class __ASSET__assets_explosion_png extends lime.graphics.Image {}
@:image("assets/fantasmaDiosSheet.png") #if display private #end class __ASSET__assets_fantasmadiossheet_png extends lime.graphics.Image {}
@:image("assets/fondo_azul.png") #if display private #end class __ASSET__assets_fondo_azul_png extends lime.graphics.Image {}
@:image("assets/hero.png") #if display private #end class __ASSET__assets_hero_png extends lime.graphics.Image {}
@:image("assets/IdleSheet.png") #if display private #end class __ASSET__assets_idlesheet_png extends lime.graphics.Image {}
@:image("assets/img/backgroundGame.png") #if display private #end class __ASSET__assets_img_backgroundgame_png extends lime.graphics.Image {}
@:image("assets/img/julia.png") #if display private #end class __ASSET__assets_img_julia_png extends lime.graphics.Image {}
@:file("assets/img/julia.xml") #if display private #end class __ASSET__assets_img_julia_xml extends lime.utils.Bytes {}
@:image("assets/img/moneda.png") #if display private #end class __ASSET__assets_img_moneda_png extends lime.graphics.Image {}
@:file("assets/img/moneda.xml") #if display private #end class __ASSET__assets_img_moneda_xml extends lime.utils.Bytes {}
@:image("assets/img/monedagiro.png") #if display private #end class __ASSET__assets_img_monedagiro_png extends lime.graphics.Image {}
@:file("assets/img/monedagiro.xml") #if display private #end class __ASSET__assets_img_monedagiro_xml extends lime.utils.Bytes {}
@:file("assets/mapCSV_map2_specials.csv") #if display private #end class __ASSET__assets_mapcsv_map2_specials_csv extends lime.utils.Bytes {}
@:file("assets/mapCSV_map2_tiles.csv") #if display private #end class __ASSET__assets_mapcsv_map2_tiles_csv extends lime.utils.Bytes {}
@:image("assets/ohno.jpg") #if display private #end class __ASSET__assets_ohno_jpg extends lime.graphics.Image {}
@:file("assets/openfl.svg") #if display private #end class __ASSET__assets_openfl_svg extends lime.utils.Bytes {}
@:image("assets/RunningSheet.png") #if display private #end class __ASSET__assets_runningsheet_png extends lime.graphics.Image {}
@:image("assets/SheetCaida.png") #if display private #end class __ASSET__assets_sheetcaida_png extends lime.graphics.Image {}
@:image("assets/SheetSalto.png") #if display private #end class __ASSET__assets_sheetsalto_png extends lime.graphics.Image {}
@:image("assets/tiles copia.png") #if display private #end class __ASSET__assets_tiles_copia_png extends lime.graphics.Image {}
@:image("assets/tiles.png") #if display private #end class __ASSET__assets_tiles_png extends lime.graphics.Image {}
@:image("assets/tile_ladrillos.png") #if display private #end class __ASSET__assets_tile_ladrillos_png extends lime.graphics.Image {}
@:file("assets/tile_ladrillos.tsx") #if display private #end class __ASSET__assets_tile_ladrillos_tsx extends lime.utils.Bytes {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_nokiafc22_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_monsterrat_ttf (); src = font.src; name = font.name; super (); }}

#end

#end