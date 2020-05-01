import java.util.*;
import java.lang.Math;
class Armstrong
{
	public static void main(String[] args)
	{
		Scanner s=new Scanner(System.in);
		System.out.println("Enter your number");
		int num=s.nextInt();
		int x=num,sum=0,count=0,y=num;
		while(x>0)
		{
			x=x/10;/*yaha apaka mistake tha
				x me divide karke initiise 
				karenge aap kar raho to yahi 
				infinite loop ho ja raha hai
				*/
			count++;
		}
		while(num>0)
		{
			int r=num%10;
			sum=sum+(int)Math.pow(r,count);
			/*yaha apako type cast karna parega 
				pow double return karta hai to
			int banana parega*/
			num=num/10;/*yaha achha ki yahi upar vale
					loop me karti to sahi jata 
					na*/
		}
		if(sum==y)
			System.out.println("Number is armstrong");
		else
			System.out.println("Number is not armstrong");
	}
}