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
public class AccountDemo3 {

	public static void main(String[] args) {
		Account account1= new Account(20,"fvmirje",552.0,90);
		Account account2= new Account(40,"sfvwspp",385.0,66);
		Account account3= new Account(16,"tfypcof",807.0,13);
		Account account4= new Account(15,"gvkhywb",627.0,51);
		Account account5= new Account(29,"iglclrn",775.0,43);


		Account[] objArray= {account1,account2,account3,account4,account5};

		Account[] objArrayRes= sortAccountByAcType(objArray);
		System.out.println("Displaying contents of array: ");

		for(Account account:objArrayRes){
		System.out.println(account.getNumber()+" " + account.getAcType()+" " + account.getBalance()+" " + account.getNoOfAccountHolders()+" ");
		}
	}		
	public static Account[] sortAccountByAcType(Account[] objArray)
	{
		Account[] temp=new Account[5];
		Account temp1;
		int k=0;
		for(int i=0;i<objArray.length-1;i++,k++)
		{
			for(int j=i+1;j<objArray.length;j++)
			{
				if(objArray[i].getAcType().compareTo(objArray[j].getAcType())>0)
				{
					temp1=objArray[i];
					objArray[i]=objArray[j];
					objArray[j]=temp1;
				}
			}
			temp[k]=objArray[k];
		}
		temp[k]=objArray[k];
		return temp;
	}
}
