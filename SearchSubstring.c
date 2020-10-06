#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[10];
	printf("Enter any string\n");
	gets(str1);
	printf("Enter substring to search\n");
	gets(str2);
	if(strstr(str1,str2))
	{
		printf("The substring is exists in the string.\n");
	}
	else
	{
		printf("The substring is not exists in the string.\n");
	}
}