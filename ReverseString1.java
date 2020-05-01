import java.util.*;
class ReverseString1
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter string to reverse");
		String str1=sc.nextLine();
		String reverse="";
		for(int i=str1.length()-1;i>=0;i--)
		{
			reverse=reverse+str1.charAt(i);
		}
		System.out.println("Reverse String="+reverse);
	}
}
