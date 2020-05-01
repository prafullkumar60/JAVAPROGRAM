import java.util.*;
class ChangeAlphabet
{
	public static void main(String[] args)
	{
		System.out.println("Enter any string");
		Scanner sc=new Scanner(System.in);
		String s1=sc.nextLine();
		System.out.println(s1);
		for(int i=0;i<s1.length();i++)
		{
			char ch=s1.charAt(i);
			if(ch>=65 && ch<=90)
			{				
				System.out.print(Character.toLowerCase(ch));
			}
			else
				System.out.print(Character.toUpperCase(ch));
		}
	}
}
		
		