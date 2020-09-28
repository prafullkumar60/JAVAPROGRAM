#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int cnt=0;
	printf("Enter string to count the words\n");
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i];i++)
	{
		if(str[i]=='\n'||str[i]==' '||str[i]=='\0')
		{
			cnt++;
		}
	}
	printf("Number of string in given string is=%d\n",cnt);
}