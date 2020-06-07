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
public class AccountDemo6 {

	public static void main(String[] args) {
		Account account1= new Account(4,"rbwgqps",630.0,33);
		Account account2= new Account(56,"pwibjzs",437.0,53);
		Account account3= new Account(45,"djhipnk",889.0,22);
		Account account4= new Account(35,"jnwtber",980.0,99);
		Account account5= new Account(7,"tyuaktj",66.0,7);


		Account[] objArray= {account1,account2,account3,account4,account5};

		Account objResultArray1= searchAccountByNoOfAccountHolders(objArray, 17);
		if(objResultArray1==null){
		System.out.println("Output after first search is null. ");
		}else{
		System.out.println("Displaying contents of result array: ");

		System.out.println(objResultArray1.getNumber()+" " + objResultArray1.getAcType()+" " + objResultArray1.getBalance()+" " + objResultArray1.getNoOfAccountHolders()+" ");
		}

		Account objResultArray2= searchAccountByNoOfAccountHolders(objArray, 99);
		if(objResultArray2==null){
		System.out.println("Output after first search is null. ");
		}else{
		System.out.println("Displaying contents of result array: ");

		System.out.println(objResultArray2.getNumber()+" " + objResultArray2.getAcType()+" " + objResultArray2.getBalance()+" " + objResultArray2.getNoOfAccountHolders()+" ");
		}
		}
		public static Account searchAccountByNoOfAccountHolders(Account[] objArray,int balance)
		{
			Account temp=null;
			for(int i=0;i<objArray.length;i++)
			{
				if(objArray[i].getNoOfAccountHolders()==balance)
				{
					temp=objArray[i];
					break;
				}
			}
			return temp;
				
			}
		}