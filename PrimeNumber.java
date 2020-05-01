import java.util.*;
class PrimeNumber
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("How many prime number you want");
		int x=sc.nextInt();
		System.out.println("From which number");
		int n=sc.nextInt();
		int m;
		while(x>0)
		{
			m=n/2;
			while(m>1)
			{
				if(n%m==0)
					break;
				m--;
			}
			if(m==1)
			{
				System.out.print(n+" ");
				x--;
			}
			n++;
		}
	}
}
