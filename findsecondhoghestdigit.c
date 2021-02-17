#include<stdio.h>
int main()
{
        int data,first=0,second=0,temp;
        printf("Enter integer to find second highest digit\n");
        scanf("%d",&data);
        while(data>0)
        {
                temp=data%10;
                if(temp>first)
                {
                        second=first;
                        first=temp;
                }
                if(temp<first && temp>second)
                        second=temp;
                data/=10;
        }
        printf("Second highest digit=%d\n",second);
}