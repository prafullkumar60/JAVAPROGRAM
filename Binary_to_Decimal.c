#include<stdio.h>
#include<math.h>
int main()
{
        int n,sum=0,i,temp;
        printf("Enter binary number(0 or 1)");
        scanf("%d",&n);
        temp=n;
        while(temp)
        {
                if(temp%10!=0 && temp%10!=1)
                {
                        printf("Given Number is not binary\n");
                        return 0;
                }
                temp/=10;
        }
        for(i=0;n>0;i++)
        {
                sum=sum+n%10*pow(2,i);
                n/=10;
        }
        printf("Binary equvalent Decimal = %d\n",sum);
}

/*Compile with -lm*/