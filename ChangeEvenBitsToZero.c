#include<stdio.h>
int main()
{
        int data,bit;
        printf("Enter data\n");
        scanf("%d",&data);
        printf("Binary Representation of Given Number is :");
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",(data>>bit)&1);
        }
        printf("\n");
        printf("After set to 0 all even bits :");
        for(bit=32;bit>=1;bit--)
        {
                if(bit%2==0)
                {
                        data=data & (~(1<<bit));
                }
        }
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",(data>>bit)&1);
        }
        printf("\n");
        printf("The value is %d\n",data);
}