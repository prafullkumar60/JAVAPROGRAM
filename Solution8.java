package tcs;

import java.util.Scanner;

public class Solution8 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Book[] books=new Book[4];
		for(int i=0;i<books.length;i++)
		{
			int id=sc.nextInt();sc.nextLine();
			String title=sc.nextLine();
			String author=sc.nextLine();
			double price=sc.nextDouble();
			books[i]=new Book(id,title,author,price);
		}
		Book[] output=sortBooksByPrice(books);
		for(Book result:output)
		{
			System.out.println(result.getId()+" "+result.getTitle()+" "+result.getAuthor()+" "+result.getPrice());
		}

	}
	public static Book[] sortBooksByPrice(Book[] books)
	{
//		Book[] temp=new Book[4];
		for(int i=books.length-1;i>0;i--)
		{
			for(int j=0;j<i;j++)
			{
				if(books[j].getPrice()>books[j+1].getPrice())
				{
					Book temp1=books[j];
					books[j]=books[j+1];
					books[j+1]=temp1;
				}
			}
		}
		return books;
	}

}
