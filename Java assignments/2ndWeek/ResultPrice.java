package carCompany;

import java.util.List;

public class ResultPrice {

	public int SumPrice(){
	CarCompany company = CarCompany.getInstance();
	List<Car> car = company.getCar();
	
	int sum=0;
	for(int i=0; i<car.size(); i++){
		sum += car.get(i).getPrice();
	}

	return sum;
}
}