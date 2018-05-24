#if !macro


@:access(lime.app.Application)
@:access(lime.Assets)
@:access(openfl.display.Stage)


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new openfl.display.Application ();
		app.create (config);
		
		var display = new NMEPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		app.setPreloader (preloader);
		preloader.onComplete.add (init);
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("flixel/sounds/beep.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("flixel/sounds/flixel.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("Nokia Cellphone FC Small");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("Monsterrat");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("flixel/images/ui/button.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("flixel/images/logo/default.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/button.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/julia.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/julia.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("img/ohno.jpg");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/Sheets/ariosheet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/Sheets/fantasmaDiosSheet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/Sheets/IdleSheet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/Sheets/moneda.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/Sheets/moneda.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("img/Sheets/monedagiro.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/Sheets/monedagiro.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("img/Sheets/RunningSheet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/Sheets/SheetCaida.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/Sheets/SheetSalto.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("img/Skills/balaplacebo.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/button.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/julia.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/julia.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/img/ohno.jpg");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/Sheets/ariosheet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/Sheets/fantasmaDiosSheet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/Sheets/IdleSheet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/Sheets/moneda.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/Sheets/moneda.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/img/Sheets/monedagiro.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/Sheets/monedagiro.xml");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/img/Sheets/RunningSheet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/Sheets/SheetCaida.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/Sheets/SheetSalto.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/img/Skills/balaplacebo.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/map/cosahermosa.csv");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/map/cosahermosa2.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/map/dataTilespng.tsx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/map/fondo_azul.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/map/mapCSV_map2_specials.csv");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/map/mapCSV_map2_tiles.csv");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/map/tile_ladrillos.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/map/tile_ladrillos.tsx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/openfl.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/sound/LaMulanaOSV.wav");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		urls.push ("assets/sound/MarioJump.wav");
		types.push (lime.Assets.AssetType.SOUND);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != lime.Assets.AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !nodejs && !emscripten)
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		
		if (total == 0) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			build: "944",
			company: "TuMadre",
			file: "Carmen",
			fps: 60,
			name: "Carmen",
			orientation: "",
			packageName: "Carmen",
			version: "1.0.0",
			windows: [
				
				{
					antialiasing: 0,
					background: 0,
					borderless: false,
					depthBuffer: false,
					display: 0,
					fullscreen: false,
					hardware: true,
					height: 1080,
					parameters: "{}",
					resizable: true,
					stencilBuffer: true,
					title: "Carmen",
					vsync: false,
					width: 1920,
					x: null,
					y: null
				},
			]
			
		};
		
		#if hxtelemetry
		var telemetry = new hxtelemetry.HxTelemetry.Config ();
		telemetry.allocations = true;
		telemetry.host = "localhost";
		telemetry.app_name = config.name;
		Reflect.setField (config, "telemetry", telemetry);
		#end
		
		#if (js && html5)
		#if (munit || utest)
		openfl.Lib.embed (null, 1920, 1080, "000000");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("Main");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		lime.Assets.initialize ();
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		#if !flash
		if (openfl.Lib.current.stage.window.fullscreen) {
			
			openfl.Lib.current.stage.dispatchEvent (new openfl.events.FullScreenEvent (openfl.events.FullScreenEvent.FULL_SCREEN, false, false, true, true));
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		#end
		
	}
	
	
	#if neko
	@:noCompletion @:dox(hide) public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end