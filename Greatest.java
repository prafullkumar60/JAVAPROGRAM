import java.util.*;
class Greatest
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter 3 number to find greatest");
		int a=sc.nextInt();
		int b=sc.nextInt();
		int c=sc.nextInt();
		/*int greatest=(a>b)?(a>c?a:c):(b>c?b:c);
		System.out.println(greatest+ " is greatest");*/
		if(a>b)
		{
			if(a>c)
				System.out.println(a+" Is greatest");
			else
				System.out.println(c+" Is greatest");
		}
		else if(a==b)
		{
			if(b==c)
			{
				System.out.println("All are equal");
			}
		}
		else
		{
			if(b>c)
				System.out.println(b+" Is greatest");
			else
				System.out.println(c+" Is greatest");
		}
	}
}