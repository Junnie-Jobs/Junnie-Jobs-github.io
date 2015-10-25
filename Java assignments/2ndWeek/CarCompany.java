package carCompany;

import java.util.ArrayList;
import java.util.List;

public class CarCompany {

	
	private static CarCompany company = new CarCompany();
	
	private List<Car> carList = new ArrayList<Car>();
	
	public static CarCompany getInstance(){
		
		if(company == null){
			
			company = new CarCompany();
		}
		
		return company;
		
	}
	
	public void addCar(Car car){
		
		carList.add(car);
	}
	
	
	public List<Car> getCar(){
		return carList;
	}
	
}
