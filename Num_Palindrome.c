#include<stdio.h>
char *is_Palindrome(int data)
{
        int rev=0,temp=data;
        while(temp)
        {
                rev=10*rev+temp%10;
                temp/=10;
        }
        printf("rev=%d data=%d\n",rev,data);
        if(rev==data)
                return "Yes";
        else
                return "No";
}
int main()
{
        int num;
        char *ptr=NULL;
        printf("Enter Number to check Palindrome\n");
        scanf("%d",&num);
        ptr=is_Palindrome(num);
        printf("%s\n",ptr);
}