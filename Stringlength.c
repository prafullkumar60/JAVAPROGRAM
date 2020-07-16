#include<stdio.h>

int main()

{
	
	char str[100],*ptr,**ptr1;

	int length=0;
	
	printf("Enter string to find length\n");
	
	scanf("%s",str);
	
	printf("Given string is:%s\n",str);
	
	ptr=str;

	ptr1=&ptr;
	
	while(**ptr1!='\0')

	{

	    ptr++;

	    length++;

	}
	printf("Length of the string is:%d",length);

}