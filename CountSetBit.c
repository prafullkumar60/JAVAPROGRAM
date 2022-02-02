#include<stdio.h>
int CountSetBit(int data)
{
        int count=0,bit;
        for(bit=31;bit>=0;bit--)
        {
                if((data>>bit)&1)
                        count++;
        }
        return count;
}
int main()
{
        int data,count,bit;
        printf("Enter any number to count set bit\n");
        scanf("%d",&data);
        printf("Binary Representation is :");
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",(data>>bit)&1);
        }
        printf("\n");
        count=CountSetBit(data);
        printf("So the count of the set bit is :%d\n",count);
}