package gameLevel;

import java.util.ArrayList;

public class Player {
	
	int level;
	
	ArrayList<GameLevel> levelList = new ArrayList<GameLevel>();
	
	public void upgradeLevel(GameLevel getLevel){ 
		
		levelList.add(getLevel); 
		level = levelList.size(); 
	}
	
	public GameLevel getGameLevel(){
		
		return levelList.get(level-1);
	}
	
	public void attack(){
		
		System.out.println("플레이어 레벨 = "+level);
		this.getGameLevel().play();
	};

}
