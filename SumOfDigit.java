import java.util.*;
class SumOfDigit
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number to calculate sum");
		int n=sc.nextInt();
		int sum=0;
		while(n>0)
		{
			sum=sum+n%10;
			n/=10;
		}
		System.out.println("Sum of digit="+sum);
	}
}	