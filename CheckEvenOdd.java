import java.util.*;
class CheckEvenOdd
{
	static public void main(String[] args)
	{
		System.out.println("Enter number to check even odd");
		Scanner scan=new Scanner(System.in);
		int n=scan.nextInt();
		if(n%2==0)
			System.out.println("Even Number");
		else
			System.out.println("Odd Number");
	}
}