import java.util.*;
class Anagram1
{
	public static boolean isAnagram(String str1,String str2)
	{
		if(str1.length()!=str2.length())
			return false;
		int[] arr=new int[256];
		for(int i=0;i<str1.length();i++)
		{
			arr[str1.charAt(i)]++;
			arr[str2.charAt(i)]--;
		}
		for(int j=0;j<256;j++)
		{
			if(arr[j]!=0)
				return false;
		}
		return true;
	}
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter two string");
		String str1=sc.nextLine();
		String str2=sc.nextLine();
		if(isAnagram(str1,str2))
			System.out.println("Anagrams");
		else
			System.out.println("Not Anagrams");
	}
}
		