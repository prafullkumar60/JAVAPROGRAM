#include<stdio.h>
#include<string.h>
int main()
{
        char str1[40];
        char *ptr;
        puts("Enter a String");
        gets(str1);
        printf("Str:%s\n",str1);
        if(strlen(str1)%2)
        {
                ptr=str1+strlen(str1)/2;
                memmove(ptr,ptr+1,strlen(ptr+1)+1);
        }
        else
        {
                ptr=str1+strlen(str1)/2-1;
                memmove(ptr,ptr+2,strlen(ptr+2)+1);
        }
        printf("Str:%s\n",str1);
}