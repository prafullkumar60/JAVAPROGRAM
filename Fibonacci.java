import java.util.*;
class Fibonacci
{
	public static void main(String[] args)
	{
		int a=0,b=1,c;
		System.out.println("How many number");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		System.out.print(a+" "+b);
		while(n>0)
		{
			c=a+b;
			System.out.print(" "+c);
			a=b;
			b=c;
			n--;
		}
	}
}	