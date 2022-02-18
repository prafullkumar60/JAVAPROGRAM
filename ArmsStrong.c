#include<stdio.h>
#include<math.h>
int Check_Armstrong(int);
int main()
{
        int min,max;
        printf("Enter minimum and maximum range to print armstrong number ");
        scanf("%d %d",&min,&max);
        if(min>max)
        {
                printf("max value must be greater than minimum\n");
                return 0;
        }
        while(min<=max)
        {
                if(Check_Armstrong(min))
                {
                        printf("%d ",min);
                }
                min++;
        }
        printf("\n");
}
int Check_Armstrong(int data)
{
        int cnt=0,temp=data,sum=0;
        while(temp>0)
        {
                cnt++;
                temp/=10;
        }
        temp=data;
        while(temp>0)
        {
                sum=sum+pow(temp%10,cnt);
                temp/=10;
        }
        if(data==sum)
                return 1;
        else
                return 0;
}