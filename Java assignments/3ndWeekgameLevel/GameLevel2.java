package gameLevel;

public class GameLevel2 extends GameLevel{
	
	private static GameLevel2 singleton2 = new GameLevel2();
	
	private GameLevel2(){}
	
	public static GameLevel2 getLevel(){
		
		return singleton2;
	}

	@Override
	public void simpleAttack() {
		System.out.println("메롱~메롱~");
		
	}

	@Override
	public void turnAttack() {
		System.out.println("돌려차기 씽~");
		
	}

	@Override
	public void flyingAttack() {
		System.out.println("이건 못하지롱~");
		System.out.println("========================");
		
	}
	


}
