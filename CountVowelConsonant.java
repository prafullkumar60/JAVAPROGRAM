import java.util.*;
class CountVowelConsonant
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter any string to count");
		String str=sc.nextLine();
		char ch;
		int countvowel=0,countconsonant=0;
		for(int i=0;i<str.length();i++)
		{
			ch=str.charAt(i);
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
				||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			{
				countvowel++;
			}
			else
				countconsonant++;
		}
		System.out.println("No of vowel="+countvowel);
		System.out.println("No of consonant="+countconsonant);
	}
}