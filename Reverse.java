package tcs;

import java.util.Scanner;

public class Reverse {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter String to reverse");
		String str=sc.nextLine();
		StringBuffer rev=new StringBuffer(str); 
	    System.out.print(rev.reverse());
	}

}
