#include<stdio.h>
int checkHappyNum(int num)
{
        int rem,sum=0;
        while(num>0)
        {
                rem=num%10;
                sum=sum+(rem*rem);
                num/=10;
        }
        return sum;
}
int main()
{
        int min,result=0,max;
        printf("Enter minimum and maximum value to print happy num in between\n");
        scanf("%d%d",&min,&max);
        while(min<=max)
        {
                result=min;
                while(result!=1 && result!=4)
                {
                        result=checkHappyNum(result);
                }
                if(result==1)
                {
                        printf("%d ",min);
                } 
		min++;
        }
        printf("\n");
}