package skill;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import openfl.Assets;
import openfl.Lib;

/**
 * ...
 * @author ...
 */

class FlxButtonAnimationSkill extends FlxSprite
{
	@:isVar public  var vCoolDown:Int = 0;
	private var vTimerCoolDown:Float = 0;
	@:isVar public var vActiveButton:Bool = false;
	public var vOnPressedActive:FlxButtonAnimationSkill->Void;
	public var vOnOver:FlxButtonAnimationSkill->Void;
	@:isVar public var vLabel:FlxText;
	
	 public var vOnPressed:FlxButtonAnimationSkill->Void;
	public var vEnabled:Bool = true;
    
    private var vMousePosition:FlxPoint;

	public function new(aImagePath:String,aAnimationWidth:Int,aAnimationHeight:Int,?aOnPressed:FlxButtonAnimationSkill->Void,?aOnPressedActive:FlxButtonAnimationSkill->Void,?aOnOver:FlxButtonAnimationSkill->Void,?aCoolDown:Int,?aLabel:FlxText)
	{
         super();
        loadGraphic(Assets.getBitmapData(aImagePath), true, aAnimationWidth, aAnimationHeight);
        vMousePosition = new FlxPoint();
        vOnPressed = aOnPressed;
		vOnPressedActive = aOnPressedActive;
		vOnOver = aOnOver;
		vCoolDown = aCoolDown;
		vTimerCoolDown = 0;
		vLabel = aLabel;
		if (vLabel != null)
		{
			vLabel.fieldWidth = this.width;
			vLabel.setFormat(20, FlxColor.WHITE);
			vLabel.alpha = 0.5;
			vLabel.set_visible(false);
		}
		updateLabel("");
	}

	public function updateLabel(atext:String)
	{
		if (vLabel != null)
		{
			vLabel.setPosition(this.x, this.y);
			vLabel.text = atext;

		}
	}

	public function setCooldown(aFrames:Array<Int>, aLoop:Bool=true,aFrameRate:Int=30):Void
	{
		animation.add("cooldown", aFrames, aFrameRate, aLoop);
	}

	public function setDisabled(aFrames:Array<Int>, aLoop:Bool=true,aFrameRate:Int=30):Void
	{
		animation.add("disabled", aFrames, aFrameRate, aLoop);
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
	
	public function setActivation()
	{
		vTimerCoolDown = vCoolDown;
		vActiveButton = true;
		animation.play("cooldown");
		vLabel.text = "";
		vLabel.set_visible(true);
	}

	override public function update(aDt:Float):Void
	{
			vMousePosition.set(FlxG.mouse.x, FlxG.mouse.y);
			if (vTimerCoolDown>0)
			{
				updateLabel(Std.int(vTimerCoolDown+1)+"");
				vActiveButton = false;
				vTimerCoolDown = vTimerCoolDown - aDt;
				if (isOver(vMousePosition))
				{
					vOnOver(this);
				}
				else
				{
					//vOnRollOut(this);
				}
			}
			else
			{
				vLabel.set_visible(false);
				if (isOver(vMousePosition))
				{
					vOnOver(this);
					if (FlxG.mouse.pressed&&!vActiveButton)
					{
						animation.play("down");
					}
					else
					{
						if (!vActiveButton)
						{
							animation.play("over");
						}
					}
					if (isButtonClicked())
					{

						if (!vActiveButton)
						{
							trace("Im not active yet");
							vActiveButton = true;
							if (vOnPressed != null)
							{
								vOnPressed(this);
							}
							trace("Actived");
							animation.play("disabled");
						}
						else
						{
							trace("Im actived");
							vActiveButton = false;
							if (vOnPressedActive != null)
							{
								vOnPressedActive(this);
							}
							trace("Not actived");
							animation.play("up");
						}

					}

				}
				else
				{
					//onRollOut();
					if (!vActiveButton)
					{
						animation.play("up");
					}
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

		override public function destroy():Void
	{
		super.destroy();
	}
}


