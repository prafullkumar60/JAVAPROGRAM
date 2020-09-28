#include<stdio.h>
#include<string.h>
int main()
{
	char str[60];
	int digitCount=0,alphaCount=0,specialCount=0;
	printf("Enter string to count alphabet digit or special character\n");
	gets(str);
	for(int i=0;str[i];i++)
	{
		if(str[i]>=48 && str[i]<=57)
		{
			digitCount++;
		}
		else if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
		{
			alphaCount++;
		}
		else
		{
			specialCount++;
		}
	}
	printf("Digit count=%d\nAlpha Count=%d\nSpecial Count=%d\n",digitCount,alphaCount,specialCount);
}
	