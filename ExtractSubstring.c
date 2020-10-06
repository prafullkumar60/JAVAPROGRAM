#include<stdio.h>
#include<string.h>
int main()
{
        char str[50];
        int n1,n2,cnt=0;
        printf("Enter string to extract a substring\n");
        gets(str);
        printf("Input the position to start extraction:");
        scanf("%d",&n1);
        printf("Input the length of substring:");
        scanf("%d",&n2);
        printf("The substring retrieve from the string is :\" ");
        for(int i=n1-1;str[i];i++)
        {
                printf("%c",str[i]);
                cnt++;
                if(cnt==n2)
                        break;
        }
        printf(" \"\n");
}