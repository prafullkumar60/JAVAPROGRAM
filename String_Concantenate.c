#include<stdio.h>
#include<string.h>
void mystrcat(char [] ,char []);
int main()
{
        char str1[50],str2[50];
        printf("Enter String1 ");
        gets(str1);
        printf("Enter String2 ");
        gets(str2);
        mystrcat(str1,str2);
        printf("Concatenated string is : %s\n",str1);
}
void mystrcat(char str1[50],char str2[50])
{
        int len=0,i;
        for(i=0;str1[i]!='\0';i++)
        {
                len++;
        }
        for(i=0;str2[i]!='\0';i++)
        {
                str1[len+i]=str2[i];
        }
        str1[len+i]='\0';
}