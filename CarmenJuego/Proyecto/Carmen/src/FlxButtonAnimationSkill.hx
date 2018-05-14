package;
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

class FlxButtonAnimationSkill extends FlxButtonAnimation
{
	@:isVar public  var vId:Int = 0;
	@:isVar public  var vCoolDown:Int = 0;
	private var vTimerCoolDown:Float = 0;
	@:isVar public var vActiveButton:Bool = false;
	public var vOnPressedActive:FlxButtonAnimation->Void;
	public var vOnRollOut:FlxButtonAnimation->Void;
	public var vOnOver:FlxButtonAnimation->Void;
	@:isVar public var vLabel:FlxText;

	public function new(aImagePath:String,aAnimationWidth:Int,aAnimationHeight:Int,?aOnPressed:FlxButtonAnimation->Void,?aOnPressedActive:FlxButtonAnimation->Void,?aOnOver:FlxButtonAnimation->Void,?aOnRollOut:FlxButtonAnimation->Void,?aCoolDown:Int,?aId:Int,?aLabel:FlxText)
	{
		super(aImagePath,aAnimationWidth,aAnimationHeight,aOnPressed,true);

		vOnPressedActive = aOnPressedActive;
		vOnRollOut = aOnRollOut;
		vOnOver = aOnOver;
		vCoolDown = aCoolDown;
		vTimerCoolDown = 0;
		vId = aId;
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
		if (vIsWithMouse)
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
					vOnRollOut(this);
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
					vOnRollOut(this);
					if (!vActiveButton)
					{
						animation.play("up");
					}
				}
			}
		}
		//  super.update(aDt);
	}

}

