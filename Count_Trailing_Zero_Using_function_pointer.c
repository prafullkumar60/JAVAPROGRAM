#include<stdio.h>
void Count_Trailing_Zero(int data)
{
        int bit,count=0;
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
int main()
{
        int data,bit;
        void (*fun_ptr)(int);
        fun_ptr=&Count_Trailing_Zero;
        printf("Enter any data\n");
        scanf("%d",&data);
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",(data>>bit)&1);
        }
        printf("\n");
        (*fun_ptr)(data);
}