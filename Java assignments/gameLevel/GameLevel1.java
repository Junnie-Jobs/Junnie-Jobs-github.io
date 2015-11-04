package gameLevel;

public class GameLevel1 extends GameLevel{
	
	private static GameLevel1 singleton1 = new GameLevel1();
	
	private GameLevel1(){}
	
	public static GameLevel1 getLevel(){
		return singleton1;
	}

	@Override
	public void simpleAttack() {
		System.out.println("메롱~");
		
	}

	@Override
	public void turnAttack() {
		System.out.println("못하지롱~");
	}

	@Override
	public void flyingAttack() {
		System.out.println("이것도 못하지");
		System.out.println("========================");
	}
	


}
