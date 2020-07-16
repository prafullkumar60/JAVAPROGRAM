import java.util.*;
class DectoBin
{
	public static void main(String[] args)
	{
		
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter decimal number:");
		int num=sc.nextInt();
		System.out.print("Binary is:");
		for(int i=31;i>=0;i--)
		{
			System.out.print((num>>i)&1);
		}
	}
}
		