import java.util.*;
class StringPalindrome
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter any string to check palindrome");
		String str=sc.nextLine();
		String reverse="";
		for(int i=str.length()-1;i>=0;i--)
		{
			reverse=reverse+str.charAt(i);
		}
		if(str.equals(reverse))
			System.out.println("Plindrome");
		else
			System.out.println("not Plindrome");
	}
}
