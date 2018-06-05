package powerups;
import gameObjects.God;

/**
 * ...
 * @author 
 */
class GodSuperState implements IState
{

	public var vStatePopup:String;
	
	public function new() 
	{
		
	}
	
	public function activateState(aGod:God) {
		aGod.maxVelocity.x = aGod.maxVelocity.x * 2;
		aGod.maxVelocity.y = aGod.maxVelocity.y * 2;
	}
	
	public function deactivateState(aGod:God) {
		aGod.maxVelocity.x = aGod.maxVelocity.x / 2;
		aGod.maxVelocity.y = aGod.maxVelocity.y / 2;
	}
}