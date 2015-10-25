package carCompany;

public class CarCompanyTest {

	public static void main(String[] args) {
	
		CarCompany company = CarCompany.getInstance();
		
		company.addCar(new Sonata());
		company.addCar(new Sonata());
		company.addCar(new Sonata());
		company.addCar(new Grandeur());
		company.addCar(new Grandeur());
		company.addCar(new Genesis());
		
		ResultPrice result = new ResultPrice();
		System.out.println(result.SumPrice());

	}

}
