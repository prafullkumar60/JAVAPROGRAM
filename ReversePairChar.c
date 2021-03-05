#include<stdio.h>
#include<string.h>
int main()
{
        unsigned char str[100];
        int temp;
        printf("Enter any string\n");
        gets(str);
        for(int i=0;i<strlen(str);i++)
        {
                str[i]=str[i]+25;
                if(str[i]>=123)
                {
                        temp=str[i]-122;
                        str[i]=122-temp;
                }
        }
        printf("%s\n",str);
}