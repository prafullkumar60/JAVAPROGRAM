class Account {
	private int number;
	private String acType;
	private double balance;
	private int noOfAccountHolders;
	public Account(int number, String acType, double balance, int noOfAccountHolders) {
		super();
		this.number = number;
		this.acType = acType;
		this.balance = balance;
		this.noOfAccountHolders = noOfAccountHolders;
	}
	public int getNumber() {
		return number;
	}
	public void setNumber(int number) {
		this.number = number;
	}
	public String getAcType() {
		return acType;
	}
	public void setAcType(String acType) {
		this.acType = acType;
	}
	public double getBalance() {
		return balance;
	}
	public void setBalance(double balance) {
		this.balance = balance;
	}
	public int getNoOfAccountHolders() {
		return noOfAccountHolders;
	}
	public void setNoOfAccountHolders(int noOfAccountHolders) {
		this.noOfAccountHolders = noOfAccountHolders;
	}
}
public class AccountDemo1
{
	public static void main(String[] args)
	{
		Account account1= new Account(33,"atyyfrx",526.0,29);
		Account account2= new Account(73,"niyrmyr",838.0,81);
		Account account3= new Account(86,"tjhyvix",59.0,3);
		Account account4= new Account(53,"xtkrhmr",97.0,63);
		Account account5= new Account(97,"bebjwuk",230.0,26);
		Account[] objArray= {account1,account2,account3,account4,account5};
		Account accountRes1= new Account(31,"mcxdkjh",701.0,64);
		boolean result= replaceAccountByNumber(objArray, accountRes1);
		System.out.println("Output for performing replace on accountRes1 is: "+ result  );          
		System.out.println("Displaying contents of array: ");
		for(Account account:objArray)
		{
			System.out.println(account.getNumber()+" " + account.getAcType()+" " + account.getBalance()+" " + account.getNoOfAccountHolders()+" ");
		}
		System.out.println();
		Account accountRes2= new Account(73,"zgcerte",224.0,29);
		result= replaceAccountByNumber(objArray, accountRes2);
		System.out.println("Output for performing replace on accountRes2 is: "+ result  );          
		System.out.println("Displaying contents of array: ");
		for(Account account:objArray)
		{
			System.out.println(account.getNumber()+" " + account.getAcType()+" " + account.getBalance()+" " + account.getNoOfAccountHolders()+" ");
		}
	}
	public static boolean replaceAccountByNumber(Account[] objArray,Account account)
	{
		boolean temp=false;
		for(int i=0;i<objArray.length;i++)
		{
			if(objArray[i].getNumber()==account.getNumber())
			{
				objArray[i]=account;
				temp=true;
				break;
			}
		}
		return temp;
	}
}
