#include<stdio.h>
int main()
{
        int n,f1=1,f2=1,f3,i=3;
        printf("Enter number of integer as you want to print in fibonacci series\n");
        scanf("%d",&n);
        printf("%d Fibonacci series are %d %d",n,f1,f2);
        while(i<=n)
        {
                f3=f1+f2;
                f1=f2;
                f2=f3;
                printf(" %d",f3);
                i++;
        }
        printf("\n");
}