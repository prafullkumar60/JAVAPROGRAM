#include<stdio.h>
#include<string.h>
int main()
{
        char str[50],str1[10],*ptr;
        int cnt=0;
        printf("Enter string\n");
        gets(str);
        ptr=str;
        while(ptr=strstr(ptr,"the"))
        {
                cnt++;
                ptr=ptr+strlen("the");
        }
        printf("The frequency of the word 'the' is :%d\n",cnt);
}