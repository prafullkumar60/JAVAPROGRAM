import java.util.*;
class CheckVowel
{
	public static void main(String[] args)
	{
		boolean isVowel=false;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter any character");
		char ch=sc.next().charAt(0);
		sc.close();
		switch(ch)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'O':
			case 'U':
			case 'I':isVowel=true;
		}
		if(isVowel==true)
			System.out.println(ch+" is a Vowel");
		else if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
			System.out.println(ch+" is a consonant");
		else
			System.out.println(ch+" is not an alphabet");
	}
}	
		
	
