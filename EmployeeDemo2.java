public class EmployeeDemo2
{
	public static void main(String[] args)
	{
		Employee employee= new Employee(22,"xaegzyg","rpeysly",9,85,618.0);
		Employee employee1= new Employee(91,"ghgdjwr","hwtfsrs",71,66,488.0);
		Employee employeeres= findMinEmployeeForId(employee,employee1);
		System.out.println(employeeres.getId());
	}
	public static Employee findMinEmployeeForId(Employee e1,Employee e2)
	{
		if(e1.getId()<e2.getId())
			return e1;
		else
			return e2;
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