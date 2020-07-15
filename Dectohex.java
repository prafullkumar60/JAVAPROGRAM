import java.util.*;
class Dectohex
{
	public static void main(String[] args)
	{
		System.out.println("Enter any decimal number");
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		int rem;
		String str1="";
		char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		while(num>0)
		{
			rem=num%16;
			str1=hex[rem]+str1;
			num/=16;
		}
		System.out.println(str1);
	}
}
	
		