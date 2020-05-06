import java.util.*;
import java.util.*;
class HighestLowestDigit
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter any integer");
		int n=sc.nextInt();
		int highest=0,lowest=9,temp;
		while(n>0)
		{
			temp=n%10;
			if(temp>highest)
				highest=temp;
			if(temp<lowest)
				lowest=temp;
			n/=10;
		}
		System.out.println("Highest digit="+highest);
		System.out.println("Lowest digit="+lowest);
	}
}