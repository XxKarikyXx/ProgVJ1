package powerups;
import gameObjects.Player1;
import gameObjects.PowerUp;

/**
 * ...
 * @author 
 */
class PlayerPowerUpController 
{

	public function new() 
	{
		
	}
	
	public function activatePowerUp(aPowerUp:PowerUp, aPlayer:Player1){
		switch (aPowerUp.vPowerType) {
			case "Super":
				aPlayer.vCurrentState = new PlayerSuperState();
		}
	}
	
}