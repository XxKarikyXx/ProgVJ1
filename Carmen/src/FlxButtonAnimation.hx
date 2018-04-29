package;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import openfl.Assets;

/**
 * ...
 * @author TuMadre
 */

	
	class FlxButtonAnimation extends FlxSprite
{
    public var onPressed:FlxButtonAnimation->Void;
	
    
    private var mDisplay:FlxSprite;
    //helper position
    private var hMousePosition:FlxPoint;

    
    public function new(aImagePath:String,aAnimationWidth:Int,aAnimationHeight:Int,?aOnPressed:FlxButtonAnimation->Void) 
    {
        super();
        loadGraphic(Assets.getBitmapData(aImagePath), true, aAnimationWidth, aAnimationHeight);
        hMousePosition = new FlxPoint();
        onPressed = aOnPressed;
    }
    public function setUp(aFrames:Array<Int>, aLoop:Bool=true,aFrameRate:Int=30):Void
    {
        animation.add("up", aFrames, aFrameRate, aLoop);
    }
    public function setDown(aFrames:Array<Int>, aLoop:Bool=true,aFrameRate:Int=30):Void
    {
        animation.add("down", aFrames, aFrameRate, aLoop);
    }
    public function setOver(aFrames:Array<Int>, aLoop:Bool=true,aFrameRate:Int=30):Void
    {
        animation.add("over", aFrames, aFrameRate, aLoop);
    }
    override public function update(aDt:Float):Void 
    {
      /*  hMousePosition.set(FlxG.mouse.x, FlxG.mouse.y);
        if (isOver(hMousePosition))//over the button
        {
            if (FlxG.mouse.pressed)
            {
                animation.play("down");
            }else {
                animation.play("over");
            }
            if (isButtonClicked())
            {
                if (onPressed != null)
                {
                    onPressed(this);
                }
            }
        }else {
            animation.play("up");
        }*/
        
        super.update(aDt);
    }
    private inline function isOver(aMousePosition:FlxPoint):Bool
    {
        return overlapsPoint(hMousePosition);
    }
    private inline function isButtonClicked():Bool
    {
        return FlxG.mouse.justReleased;
    }
	

    
}

