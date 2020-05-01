import java.util.*;
class PrimeCheck
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number to check prime");
		int n=sc.nextInt();
		int m=n/2;
		while(m>1)
		{
			if(n%m==0)
				break;
			m--;
		}
		if(m==1)
			System.out.println("Prime number");
		else
			System.out.println("Not prime number");
	}
}
