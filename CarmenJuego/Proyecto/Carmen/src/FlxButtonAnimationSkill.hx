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
	@:isVar public  var id:Int = 0;
	@:isVar public  var coolDown:Int = 0;
	private var timerCoolDown:Float = 0;
	@:isVar public var activeButton:Bool = false;
	public var onPressedActive:FlxButtonAnimation->Void;
	public var onRollOut:FlxButtonAnimation->Void;
	public var onOver:FlxButtonAnimation->Void;

	public function new(aImagePath:String,aAnimationWidth:Int,aAnimationHeight:Int,?aOnPressed:FlxButtonAnimation->Void,?aOnPressedActive:FlxButtonAnimation->Void,?aOnOver:FlxButtonAnimation->Void,?aOnRollOut:FlxButtonAnimation->Void,?aCoolDown:Int,?aId:Int)
	{
		super(aImagePath,aAnimationWidth,aAnimationHeight,aOnPressed,true);

		onPressedActive = aOnPressedActive;
		onRollOut = aOnRollOut;
		onOver = aOnOver;
		coolDown = aCoolDown;
		timerCoolDown = 0;
		id = aId;

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
		timerCoolDown = coolDown;
		activeButton = true;
		animation.play("cooldown");
		//   onPressed(this);

	}
	override public function update(aDt:Float):Void
	{
		if (isWithMouse)
		{
			hMousePosition.set(FlxG.mouse.x, FlxG.mouse.y);
			if (timerCoolDown>0)
			{
				activeButton = false;
				timerCoolDown = timerCoolDown - aDt;
				if (isOver(hMousePosition))//over the button
				{
					onOver(this);
				}else
				{
					onRollOut(this);
				}
			}
			else
			{

				if (isOver(hMousePosition))//over the button
				{
					onOver(this);
					if (FlxG.mouse.pressed&&!activeButton)
					{
						animation.play("down");
					}
					else
					{
						if (!activeButton)
						{
							animation.play("over");
						}
					}
					if (isButtonClicked())
					{

						if (!activeButton)
						{
							activeButton = true;
							if (onPressed != null)
							{
								onPressed(this);
							}
							animation.play("disabled");
						}
						else
						{

							activeButton = false;
							if (onPressedActive != null)
							{
								onPressedActive(this);
							}
							animation.play("up");
						}

					}

				}
				else
				{
					onRollOut(this);
					if (!activeButton)
					{
						animation.play("up");
					}
				}
			}
		}
		//  super.update(aDt);
	}

}

