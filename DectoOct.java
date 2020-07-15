import java.util.*;
class DectoOct
{
	public static void main(String[] args)
	{
		int num,i=1;
		int[] octal=new int[100];
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter decimal number:");
		int dec=sc.nextInt();
		while(dec!=0)
		{
			octal[i++]=dec%8;
			dec/=8;
		}
		System.out.print("Octal number is: ");
		for(int j=i-1;j>0;j--)
		{
			System.out.print(octal[j]);
		}
		System.out.println();
	}
}