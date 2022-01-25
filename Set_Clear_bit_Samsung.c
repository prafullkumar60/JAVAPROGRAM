#include<stdio.h>
int Set_Clear(int data,int pos,int val)
{
        if(val == 1)
        {
                data= data | (val<<pos);
        }
        else
        {
                data = data & (val<<pos);
        }
        return data;
}

int main()
{
        int data,pos,val,result,bit;
        printf("Enter any data\n");
        scanf("%x",&data);
        printf("Enter pos\n");
        scanf("%d",&pos);
        printf("Enter val(0 or 1)\n");
        scanf("%d",&val);
        printf("Before Set and Clear operation -");
        for(bit=31;bit>=0;bit--)
                printf("%d",((data>>bit)&1));
        printf("\n");
        printf("After Set and Clear operation -");
        result=Set_Clear(data,pos,val);
        for(bit=31;bit>=0;bit--)
                printf("%d",((result>>bit)&1));
        printf("\n");

}