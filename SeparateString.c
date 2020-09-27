#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("Enter string to separate character\n");
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i];i++)
	{
		printf("%c ",str[i]);
	}
}