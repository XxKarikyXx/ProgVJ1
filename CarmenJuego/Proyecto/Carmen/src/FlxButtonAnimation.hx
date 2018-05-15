package;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import openfl.Assets;

/**
 * ...
 * @author ...
 */

	
class FlxButtonAnimation extends FlxSprite
{
    public var vOnPressed:FlxButtonAnimation->Void;
	public var vEnabled:Bool = true;
	private var vIsWithMouse:Bool = false;
    
    private var vMousePosition:FlxPoint;

    
    public function new(aImagePath:String,aAnimationWidth:Int,aAnimationHeight:Int,?aOnPressed:FlxButtonAnimation->Void,?aWithMouse:Bool) 
    {
        super();
        loadGraphic(Assets.getBitmapData(aImagePath), true, aAnimationWidth, aAnimationHeight);
        vMousePosition = new FlxPoint();
        vOnPressed = aOnPressed;
		vIsWithMouse = aWithMouse;
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
		if(vIsWithMouse){
        vMousePosition.set(FlxG.mouse.x, FlxG.mouse.y);
        if (isOver(vMousePosition))
        {
            if (FlxG.mouse.pressed)
            {
                animation.play("down");
            }else {
                animation.play("over");
            }
            if (isButtonClicked())
            {
                if (vOnPressed != null)
                {
                    vOnPressed(this);
                }
            }
        }else {
            animation.play("up");
        }
        }
        super.update(aDt);
    }
	
	public function isTouchingButton():Bool
	{		
	return isOver(vMousePosition);	
	}
	
    private inline function isOver(aMousePosition:FlxPoint):Bool
    {
        return overlapsPoint(vMousePosition);
    }
	
    private inline function isButtonClicked():Bool
    {
        return FlxG.mouse.justReleased;
    }
	  
}

