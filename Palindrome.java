import java.util.*;
class Palindrome
{
	public void checkPalindrome(int x)
	{
		int data=x,rev=0;
		while(x>0)
		{
			rev=rev*10+x%10;
			x/=10;
		}
		if(data==rev)
			System.out.println("Palindrome number");
		else
			System.out.println("Not Palindrome");
	
	}
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter any number to check palindrome");
		int x=sc.nextInt();
		Palindrome obj=new Palindrome();
		obj.checkPalindrome(x);
	}
}