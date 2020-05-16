public class EmployeeDemo
{
	public static void main(String[] args)
	{
		Employee employee=new Employee(63,"vysycfx","idfewcd",53,84,330.0);
		Employee employee1=new Employee(9,"vycjbjx","zfmough",31,53,792.0);
		double employeeres=findAvgEmployeeForId(employee,employee1);
		System.out.println(employeeres);
	}
	public static double findAvgEmployeeForId(Employee e1,Employee e2)
	{
		double avg=(e1.getId()+e2.getId())/2;
		return avg;
	}
}
class Employee
{
	private int id;
	private String name;
	private String designation;
	private int ssnNo;
	private int age;
	private double salary;
	public Employee(int id,String name,String designation,int ssnNo,int age,double salary)
	{
		this.id=id;
		this.name=name;
		this.designation=designation;
		this.ssnNo=ssnNo;
		this.age=age;
		this.salary=salary;
	}
	public int getId()
	{
		return this.id;
	}
	public void setId(int id)
	{
		this.id=id;
	}
	public String getName()
	{
		return this.name;
	}
	public void setName(String name)
	{
		this.name=name;
	}
	public String getDesignation()
	{
		return this.designation;
	}
	public void setDesignation(String designation)
	{
		this.designation=designation;
	}
	public int getSsnNo()
	{
		return this.ssnNo;
	}
	public void getSsnNo(int ssnNo)
	{
		this.ssnNo=ssnNo;
	}
	public int getAge()
	{
		return this.age;
	}
	public void setAge(int age)
	{
		this.age=age;
	}
	public double getSalary()
	{
		return this.salary;
	}
	public void getSalary(double salary)
	{
		this.salary=salary;
	}
}	