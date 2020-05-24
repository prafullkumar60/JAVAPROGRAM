public class EmployeeDemo5
{
	public static void main(String[] args)
	{
		Employee employee= new Employee(67,"dsamjrz","suohakp",34,97,806.0);
		Employee employee1= new Employee(99,"qfosoyu","acpnajw",53,59,424.0);
		Employee employee2= new Employee(46,"utftckd","pjgsdnm",55,57,470.0);
		Employee employeeres= findSecondLargestEmployeeForId(employee,employee1,employee2);
		System.out.println(employeeres.getId());
	}
	public static Employee findSecondLargestEmployeeForId(Employee e1,Employee e2,Employee e3)
	{
		int a=e1.getId();
		int b=e2.getId();
		int c=e3.getId();
		if(a >= b && a >= c)
    		{
        		if(b >= c)
        		{
            			return e1;
        		}
        		else
        		{
				return e3;            
        		}
    		}
    		else if(b >= a && b >= c)
    		{
        		if(a >= c)
        		{
            			return e1;
        		}
        		else
        		{
            			return e3;
        		}
    		}
		else if(a >= b)
    		{
        		return e1;
		}
    		else
    		{
        		return e2;
	    	}

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