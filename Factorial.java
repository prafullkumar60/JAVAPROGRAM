import java.util.*;
class Factorial
{
	public static void main(String[] args)
	{
		int fact=1;
		System.out.println("Enter number to find factorial");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		while(n>0)
		{
			fact*=n;
			n--;
		}
		System.out.println("fact="+fact);
	}
}