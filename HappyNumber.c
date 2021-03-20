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
        int num,result=0;
        printf("Enter number to check happy number\n");
        scanf("%d",&num);
        result=num;
        while(result!=1 && result!=4)
        {
                result=checkHappyNum(result);
        }
        if(result==1)
        {
                printf("Given number is happy number\n");
        }
        else
        {
                printf("Given number is not happy\n");
        }
}