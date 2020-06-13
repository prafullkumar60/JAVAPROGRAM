package tcs;

import java.util.Scanner;

public class Solution7 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		int max=0,temp;
		while(num>0)
		{
			temp=num%10;
			if(temp>max)
				max=temp;
			num/=10;
		}
		System.out.println(max);
	}

}
