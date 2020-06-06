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
public class AccountDemo {

	public static void main(String[] args) {
			Account account1= new Account(7,"ewqkvae",168.0,67);
			Account account2= new Account(3,"mqclvcm",123.0,74);
			Account account3= new Account(57,"uenzjpt",164.0,98);
			Account account4= new Account(28,"hwzlblz",130.0,5);
			Account account5= new Account(4,"rmejckg",125.0,28);


			Account[] objArray= {account1,account2,account3,account4,account5};

			int accountres= searchAccountByNumber(objArray, 63);
			System.out.println("Output after first search: "+accountres);

			int accountres1= searchAccountByNumber(objArray, 4);
			System.out.println("Output after second search: "+accountres1);
			}
		public static int searchAccountByNumber(Account[] objArray,int number)
		{
			int num=-1;
			for(int i=0;i<objArray.length;i++)
			{
				if(objArray[i].getNumber()==number)
				{
					num=objArray[i].getNumber();
					break;
				}
			}
			return num;
		}

	}
