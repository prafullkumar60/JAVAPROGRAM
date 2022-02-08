#include<stdio.h>
int main()
{
        int data,bit,count=0;
        printf("Enter data to print number of 1 bits\n");
        scanf("%d",&data);
        printf("Given Number Binary is :");
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",(data>>bit)&1);
        }
        printf("\n");
        for(bit=31;bit>=0;bit--)
        {
                if((data>>bit)&1)
                        count++;
        }
        printf("Number of 1's in Given Number is %d\n",count);
}