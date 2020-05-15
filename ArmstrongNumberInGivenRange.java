import java.util.*;
import java.math.*;
class ArmstrongNumberInGivenRange
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Range to print armstrong number");
		int min=sc.nextInt();
		int max=sc.nextInt();
		int cnt=0,temp,sum=0;
		while(min<=max)
		{	
			temp=min;
			while(temp>0)
			{
				cnt++;
				temp/=10;
			}
			temp=min;
			while(temp>0)
			{
				sum=sum+(int)Math.pow(temp%10,cnt);
				temp/=10;
			}
			if(sum==min)
				System.out.print(min+" ");
			sum=0;
			cnt=0;
			min++;
		}
		System.out.println();
	}
}