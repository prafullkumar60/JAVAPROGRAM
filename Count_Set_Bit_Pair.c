#include<stdio.h>
int main()
{
        int data;
        int bit=31,cnt=0;
        printf("Enter data ");
        scanf("%d",&data);
        while(bit>=0)
        {
                printf("%d",(data>>bit)&1);
                bit--;
        }
        printf("\n");
        bit=31;
        while(bit>0)
        {
                if(((data>>bit)&1) && ((data>>(bit-1))&1))
                {
                        cnt++;
                        bit--;
                }
                bit--;
        }
        printf("Number of set Bit pairs = %d\n",cnt);
}