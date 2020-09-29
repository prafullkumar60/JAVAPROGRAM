#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	printf("Enter first string to copy in second string\n");
	gets(str1);
	strcpy(str2,str1);
	printf("str1=%s\n",str1);
	printf("str2=%s\n",str2);
}