import java.util.*;
class Array3
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter 10 elements");
		int []arr=new int[10];
		for(int i=0;i<10;i++)
		{
			arr[i]=sc.nextInt();
		}
		System.out.print("Elements are:");
		for(int i=0;i<10;i++)
		{
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}
}