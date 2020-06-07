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
public class AccountDemo4 {

	public static void main(String[] args) {
		Account account1= new Account(43,"ianynap",267.0,41);
		Account account2= new Account(80,"gneuwmm",789.0,76);
		Account account3= new Account(80,"yyudure",588.0,99);
		Account account4= new Account(60,"ahixnty",831.0,39);
		Account account5= new Account(72,"iwundhq",804.0,4);


		Account[] objArray= {account1,account2,account3,account4,account5};

		Account objResultArray1= searchAccountByAcType(objArray, "oxxvosw");
		if(objResultArray1==null){
		System.out.println("Output after first search is null. ");
		}else{
		System.out.println("Displaying contents of result array: ");
		System.out.println(objResultArray1.getNumber()+" " +objResultArray1.getAcType()+" " +objResultArray1.getBalance()+" " +objResultArray1.getNoOfAccountHolders()+" ");
		}

		Account objResultArray2= searchAccountByAcType(objArray, "gneuwmm");
		if(objResultArray2==null){
		System.out.println("Output after first search is null. ");
		}else{
		System.out.println("Displaying contents of result array: ");
		System.out.println(objResultArray2.getNumber()+" " + objResultArray2.getAcType()+" " + objResultArray2.getBalance()+" " + objResultArray2.getNoOfAccountHolders()+" ");
	}
	}
		public static Account searchAccountByAcType(Account[] objArray,String acType)
		{
			Account temp=null;
			for(int i=0;i<objArray.length;i++)
			{
				if(objArray[i].getAcType().equalsIgnoreCase(acType))
				{
					temp=objArray[i];
					break;
				}
			}
			return temp;
				
			}
		}