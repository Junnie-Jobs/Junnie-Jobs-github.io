package gameLevel;

public abstract class GameLevel {

	public abstract void simpleAttack();
	public abstract void turnAttack();
	public abstract void flyingAttack();
	public final void play(){
		
		System.out.print("기본공격: ");
		simpleAttack();
		System.out.print("특수공격 1: ");
		turnAttack();
		System.out.print("특수공격 2: ");
		flyingAttack();
		
		
	};
}
