#include<stdio.h>
int main()
{
        int data,bit,count=0;
        printf("Enter any data\n");
        scanf("%d",&data);
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",(data>>bit)&1);
        }
        printf("\n");
        for(bit=31;bit>=0;bit--)
        {
                if((data>>bit)&1)
                {
                        count=0;
                }
                else
                {
                        count++;
                }
        }
        printf("count=%d\n",count);
}