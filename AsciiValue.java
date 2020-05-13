import java.util.*;
class AsciiValue
{
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter character to print ascii value");
		 char ch= sc.next().charAt(0); 
		int ascii=(int)ch;
		System.out.println("Ascii value is "+ascii);
	}
}