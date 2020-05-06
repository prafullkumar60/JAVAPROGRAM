import java.util.*;
class ArrayCopy
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter 10 elements");
		int []arr1=new int[10];
		int []arr2=new int[10];
		for(int i=0;i<10;i++)
		{
			arr1[i]=sc.nextInt();
		}
		for(int i=0;i<10;i++)
		{
			arr2[i]=arr1[i];
		}
		System.out.print("Array two elements are:");
		for(int i=0;i<10;i++)
		{
			System.out.print(arr2[i]+" ");
		}
	}
}