package powerups;

/**
 * @author 
 */
interface IState 
{
  public var vStatePopup:String;
  
  public function activateState():Void;

  public  function deactivateState():Void;
}