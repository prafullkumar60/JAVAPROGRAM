#include<stdio.h>
int main()
{
        int data,bit,count=0,max=0;
        printf("Enter data to find Largest Consecutive 1's\n");
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
                        count++;
                }
                else
                        count=0;
                if(max<count)
                        max=count;
        }
        printf("Max=%d\n",max);
}