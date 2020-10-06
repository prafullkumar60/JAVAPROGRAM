#include<stdio.h>
int main()
{
        int data,bit,left,right;
        printf("Enter any integer to reverse the bits\n");
        scanf("%d",&data);
        printf("Binary value is:");
        for(bit=31;bit>=0;bit--)
                printf("%d",(data>>bit)&1);
        printf("\n");
        printf("After reverse binary value is:");
        for(right=0,left=31;left>right;right++,left--)
        {
                if(((data>>right)&1)!=((data>>left)&1))
                {
                        data=data^1<<right;
                        data=data^1<<left;
                }
        }
        for(bit=31;bit>=0;bit--)
                printf("%d",(data>>bit)&1);
        printf("\n");

}