package powerups;
import gameObjects.God;

/**
 * ...
 * @author 
 */
class GodPowerUpController 
{

	public function new() 
	{
		
	}
		
	public function activatePowerUp(aPowerUp:PowerUp, aGod:God){
		switch (aPowerUp.vPowerType) {
			case "Super":
				aGod.vCurrentState = new GodSuperState();
		}
	}
}