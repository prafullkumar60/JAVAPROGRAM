import java.util.*;
class PrimeNumberInRange
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter minimum and maximum range to prime");
		int min=sc.nextInt();
		int max=sc.nextInt();
		int m;
		while(min<=max)
		{
			m=min/2;
			while(m>1)
			{
				if(min%m==0)
					break;
				m--;
			}
			if(m==1)
				System.out.print(min+" ");
			min++;
		}
	}
}