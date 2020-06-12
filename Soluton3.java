import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class Solution3
{
	public static void main(String[] args) throws Exception
	{
		Scanner sc=new Scanner(System.in);
		int id=sc.nextInt();
		double balance=sc.nextDouble();
		double interestRate=sc.nextDouble();
		int noOfYear=sc.nextInt();
		Account a=new Account(id,balance,interestRate);
		double interest=calculateInterest(a,noOfYear);
		DecimalFormate df=new DecimalFormate("0.000");
		String formate=df.formate(interest);
		System.out.println(formate);
	}
	public static double calculateInterest(Account a,int noOfYear)
	{
		double interest=a.getBalance()*(a.getInaterestRate()+noOfYear*a.getInterestRate()/100)/100;
		return interest;
	}
}
class Account2
{
	private int id;
	private double balance;
	private double interestRate;
	public Account2(int id,double balance,double interestRate)
	{
		this.id=id;
		this.balance=balance;
		this.interestRate=interestRate;
	}
	public double getBalance()
	{
		return balance;
	}
	public double getInterestRate()
	{
		return interestRate;
	}
}
		