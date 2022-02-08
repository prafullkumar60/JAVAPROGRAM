#include<stdio.h>
int Sum(int a,int b)
{
        int carry;
        while(b)
        {
                carry=a&b;
                a=a^b;
                b=carry<<1;
        }
        return a;
}
int main()
{
        int x,y,res;
        printf("Enter two number to add\n");
        scanf("%d %d",&x,&y);
        res=Sum(x,y);
        printf("Sum of two Number is %d\n",res);
}