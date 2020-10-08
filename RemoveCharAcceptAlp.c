#include<stdio.h>
#include<string.h>
int main()
{
        char str[50],*ptr;
        printf("Enter string to remove characters in String Except Alphabets\n");
        gets(str);
        for(ptr=str;*ptr;ptr++)
        {
                if(!((*ptr>=65 && *ptr<=90)||(*ptr>=97 && *ptr<=122)))
                {
                        memmove(ptr,ptr+1,strlen(ptr)+1);
                        ptr--;
                }
        }
        printf("String :%s\n",str);
}