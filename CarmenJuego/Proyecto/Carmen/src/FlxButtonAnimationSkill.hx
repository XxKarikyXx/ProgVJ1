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
	@:isVar public var activeButton:Bool = false;
	public var onPressedActive:FlxButtonAnimation->Void;
public var onRollOut:FlxButtonAnimation->Void;
public var onOver:FlxButtonAnimation->Void;
    
    public function new(aImagePath:String,aAnimationWidth:Int,aAnimationHeight:Int,?aOnPressed:FlxButtonAnimation->Void,?aOnPressedActive:FlxButtonAnimation->Void,?aOnOver:FlxButtonAnimation->Void,?aOnRollOut:FlxButtonAnimation->Void,?aWithMouse:Bool,?aCoolDown:Int) 
    {
        super(aImagePath,aAnimationWidth,aAnimationHeight,aOnPressed,aWithMouse);
       
		onPressedActive = aOnPressedActive;
		onRollOut = aOnRollOut;
		onOver = aOnOver;
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
			activeButton = true;
					animation.play("cooldown");
                    onPressed(this);
		
	}
    override public function update(aDt:Float):Void 
    {
		if (isWithMouse){
			if (Std.int(Lib.getTimer()/1000)-timerCoolDown<0)
			{
				activeButton = false;
				trace("EnCoolDown");
				
			}else{
        hMousePosition.set(FlxG.mouse.x, FlxG.mouse.y);
        if (isOver(hMousePosition))//over the button
        {
			onOver(this);
            if (FlxG.mouse.pressed&&!activeButton)
            {
                animation.play("down");
            }else {
				if(!activeButton){
                animation.play("over");
				}
            }
            if (isButtonClicked())
            {

					if(!activeButton){
					activeButton = true;
				if (onPressed != null)
                {
					onPressed(this);
				}
					animation.play("disabled");
					}else
					{
						
					activeButton = false;
					if (onPressedActive != null)
                {
					onPressedActive(this);
				}
					animation.play("up");	
					}
				
                }
            
        }else {
			onRollOut(this);
			if(!activeButton){
            animation.play("up");
			}
        }
        }
		}
        //super.update(aDt);
    }
	

    
}

