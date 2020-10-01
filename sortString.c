#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],ch;
	printf("Enter string to sort in accending order\n");
	gets(str);
	for(int i=strlen(str)-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(str[i]<str[j])
			{
				ch=str[i];
				str[i]=str[j];
				str[j]=ch;
			}
		}
	}
	printf("sorted string :%s\n",str);
}