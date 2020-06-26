import java.util.Scanner;
class AutonomouseCar {
	private int carId;
	private String brand;
	private int noOfTestsConducted;
	private int noOfTestsPassed;
	private String environment;
	private String grade;
	public AutonomouseCar(int carId, String brand, int noOfTestsConducted, int noOfTestsPassed, String environment) {
		super();
		this.carId = carId;
		this.brand = brand;
		this.noOfTestsConducted = noOfTestsConducted;
		this.noOfTestsPassed = noOfTestsPassed;
		this.environment = environment;
	}
	public int getCarId() {
		return carId;
	}
	public void setCarId(int carId) {
		this.carId = carId;
	}
	public String getBrand() {
		return brand;
	}
	public void setBrand(String brand) {
		this.brand = brand;
	}
	public int getNoOfTestsConducted() {
		return noOfTestsConducted;
	}
	public void setNoOfTestsConducted(int noOfTestsConducted) {
		this.noOfTestsConducted = noOfTestsConducted;
	}
	public int getNoOfTestsPassed() {
		return noOfTestsPassed;
	}
	public void setNoOfTestsPassed(int noOfTestsPassed) {
		this.noOfTestsPassed = noOfTestsPassed;
	}
	public String getEnvironment() {
		return environment;
	}
	public void setEnvironment(String environment) {
		this.environment = environment;
	}
	public String getGrade() {
		return grade;
	}
	public void setGrade(String grade) {
		this.grade = grade;
	}
}
public class Solution11 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		AutonomouseCar[] car=new AutonomouseCar[4];
		for(int i=0;i<4;i++)
		{
			int carId=sc.nextInt();sc.nextLine();
			String brand=sc.nextLine();
			int noOfTestsConducted=sc.nextInt();
			int noOfTestsPassed=sc.nextInt();sc.nextLine();
			String environment=sc.nextLine();
			car[i]=new AutonomouseCar(carId,brand,noOfTestsConducted,noOfTestsPassed,environment);
		}
		String readenv=sc.nextLine();
		String readbrand=sc.nextLine();	
		int output1=findTestPassedByEnv(car,readenv);
		if(output1==0)
		{
			System.out.println("There are no tests passed in this particular environment");	
		}
		else
		{
			System.out.println(output1);
		}
		AutonomouseCar output2=updateCarGrade(car,readbrand);
		if(output2!=null)
		{
			System.out.println(output2.getBrand()+"::"+output2.getGrade());
		}
		else
		{
			System.out.println("No Car is available with the specified brand");
		}
	}
	public static int findTestPassedByEnv(AutonomouseCar[] car,String env)
	{
		int sum=0;
		for(int i=0;i<4;i++)
		{
			if(env.equalsIgnoreCase(car[i].getEnvironment()))
			{
				sum=sum+car[i].getNoOfTestsPassed();
			}
		}
		return sum;
	}
	public static AutonomouseCar updateCarGrade(AutonomouseCar[] car,String brand)
	{
		AutonomouseCar car1=null;
		for(int i=0;i<4;i++)
		{
			if(car[i].getBrand().equalsIgnoreCase(brand))
			{
				int rating=(car[i].getNoOfTestsPassed()*100)/car[i].getNoOfTestsConducted();
				if(rating>=80)
				{
					car[i].setGrade("A1");
				}
				else
				{
					car[i].setGrade("B1");
				}
				car1=car[i];
				break;
			}
		}
		return car1;
	}

}
