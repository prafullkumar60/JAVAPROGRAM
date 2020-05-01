import java.util.*;
public class ArmstrongNumber
{
	public static boolean checkArmstrong(int data)
	{
		int sum=0,temp,cnt=0,mul=1,temp1;
		temp=data;
		while(temp>0)
		{
			temp/=10;
			cnt++;
		}
		temp=data;
		cnt1=cnt;
		while(temp>0)
		{
			temp1=temp%10;
			while(cnt1!=0)
			{
				mul*=temp1;
				cnt1--;
			}
			temp/=10;
			sum+=mul;
			mul=0;
			cnt1=cnt;
		}
		if(sum==data)
			return true;
		else
			return false;
	}
	public static void main(String[] args)
	{
		System.out.println("Enter how many armstrong number do you want");
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		int n=1,cnt=0;
		while(n>=1)
		{
			if(checkArmstrong(n))
			{
				System.out.print(n+" ");
				cnt++;
			}
			if(cnt==num)
				break;
			n++;
		}
		System.out.println();
	}
}

			
			