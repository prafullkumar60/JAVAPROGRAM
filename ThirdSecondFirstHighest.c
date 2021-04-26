#include<stdio.h>
int main()
{
        int data,first=0,second=0,temp,third=0;
        printf("Enter integer to find second highest digit\n");
        scanf("%d",&data);
        while(data>0)
        {
                temp=data%10;
                if(temp>first)
                {
                        third=second;
                        second=first;
                        first=temp;
                }
                if(temp<first && temp>second)
                {
                        third=second;
                        second=temp;
                }
                if(temp<second && temp>third)
                        third=temp;
                data/=10;
        }
        printf("First highest digit=%d\n",first);
        printf("Second highest digit=%d\n",second);
        printf("Third highest digit=%d\n",third);
}