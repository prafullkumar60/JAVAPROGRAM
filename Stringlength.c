#include<stdio.h>
#include<string.h>
int main()
{
        char str[50];
        int i=0;
        printf("Enter string to find length\n");
        fgets(str,sizeof(str),stdin);
        while(str[i++]!='\0');
        printf("Length of the string is:%d\n",i-1);
        printf("Length of the string is:%ld\n",strlen(str));
}