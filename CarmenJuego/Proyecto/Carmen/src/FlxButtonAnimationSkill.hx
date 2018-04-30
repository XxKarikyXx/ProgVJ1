package;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import openfl.Assets;
import openfl.Lib;

/**
 * ...
 * @author TuMadre
 */

	
	class FlxButtonAnimationSkill extends FlxButtonAnimation
{
    private var coolDown:Int = 0;
	private var timerCoolDown:Int = 0;
	@:isVar public var disabled:Bool = false;

    
    public function new(aImagePath:String,aAnimationWidth:Int,aAnimationHeight:Int,?aOnPressed:FlxButtonAnimation->Void,?aWithMouse:Bool,?aCoolDown:Int) 
    {
        super(aImagePath,aAnimationWidth,aAnimationHeight,aOnPressed,aWithMouse);
       
		coolDown = aCoolDown;
		
    }

	  public function setCooldown(aFrames:Array<Int>, aLoop:Bool=true,aFrameRate:Int=30):Void
    {
        animation.add("cooldown", aFrames, aFrameRate, aLoop);
    }
		  public function setDisabled(aFrames:Array<Int>, aLoop:Bool=true,aFrameRate:Int=30):Void
    {
        animation.add("disabled", aFrames, aFrameRate, aLoop);
    }
	
	public function setActivation()
	{
			timerCoolDown = Std.int(Lib.getTimer() / 1000) + coolDown;
			enabled = true;
					animation.play("cooldown");
                    onPressed(this);
		
	}
    override public function update(aDt:Float):Void 
    {
		if (isWithMouse){
			if (Std.int(Lib.getTimer()/1000)-timerCoolDown<0)
			{
				disabled = false;
				trace("EnCoolDown");
				
			}else{
        hMousePosition.set(FlxG.mouse.x, FlxG.mouse.y);
        if (isOver(hMousePosition))//over the button
        {
            if (FlxG.mouse.pressed&&!disabled)
            {
                animation.play("down");
            }else {
				if(!disabled){
                animation.play("over");
				}
            }
            if (isButtonClicked())
            {
                if (onPressed != null)
                {
					if(!disabled){
					disabled = true;
					onPressed(this);
					animation.play("disabled");
					}else
					{
						
					disabled = false;
					animation.play("up");	
					}
				
                }
            }
        }else {
			if(!disabled){
            animation.play("up");
			}
        }
        }
		}
        //super.update(aDt);
    }
	

    
}

