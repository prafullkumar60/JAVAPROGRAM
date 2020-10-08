#include<stdio.h>
#include<string.h>
int main()
{
        char str[50];
        printf("Enter string to convert upper to lower or lower to upper\n");
        gets(str);
        printf("The given sentence is   :%s\n",str);
        for(int i=0;str[i];i++)
        {
                if(str[i]>=65 && str[i]<=90)
                {
                        str[i]+=32;
                }
                else if(str[i]>=97 && str[i]<=122)
                {
                        str[i]-=32;
                }
        }
        printf("After Case changed the string  is:%s\n",str);
}
~                                               