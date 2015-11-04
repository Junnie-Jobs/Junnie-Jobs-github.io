package gameLevel;

public class Board {
	
	public static void main(String[] args) {
		
		Player p1 = new Player();
		
		GameLevel level1 =GameLevel1.getLevel();
		GameLevel level2 =GameLevel2.getLevel();
		GameLevel level3 =GameLevel3.getLevel();
		
		p1.upgradeLevel(level1);
		p1.attack();
		
		p1.upgradeLevel(level2);
		p1.attack();
		
		p1.upgradeLevel(level3);
		p1.attack();
		
		
		
		
	}

}
