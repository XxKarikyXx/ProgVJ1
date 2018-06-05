package powerups;
import gameObjects.Player1;

/**
 * ...
 * @author 
 */
class PlayerSuperState implements IState
{

	public var vStatePopup:String;
	
	public function new() 
	{
		
	}
	
	public function activateState(aPlayer:Player1) {
		aPlayer.maxVelocity.x = aPlayer.maxVelocity.x * 2;	
	}
	
	public function deactivateState(aPlayer:Player1) {
		aPlayer.maxVelocity.x = aPlayer.maxVelocity.x / 2;	
	}
}