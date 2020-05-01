import java.util.*;
class EvenNumber1
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("How many even number you want");
		int n=sc.nextInt();
		System.out.println("From which number");
		int m=sc.nextInt();
		while(n>0)
		{
			if(m%2==0)
			{
				System.out.print(m+" ");
				m+=2;
				n--;
			}
			else
				m++;
		}
	}
}
		
			