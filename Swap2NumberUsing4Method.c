#include<stdio.h>
void SwapUsing3rdVariable(int a,int b)
{
        int temp;
        temp=a;
        a=b;
        b=temp;
        printf("After Swap Using 3rd Variable a = %d b = %d\n",a,b);
}
void SwapWithoutUsing3rdVariable(int a,int b)
{
        a=a+b;
        b=a-b;
        a=a-b;
        printf("After Swap Without Using 3rd Variable a = %d b=%d\n",a,b);
}
void SwapUsingBitWiseOperator(int a,int b)
{
        a=a^b;
        b=a^b;
        a=a^b;
        printf("After Swap Using Bit Wise Operator a = %d b = %d\n",a,b);
}
void SwapUsingBitWiseOperatorInOneLine(int a,int b)
{
        a ^= b ^= a ^=b;
        printf("After Swap Using Bit Wise Operator In one Line a = %d b = %d\n",a,b);
}
int main()
{
        int a=8,b=10;
        printf("Before Swap a = %d b = %d\n",a,b);
        SwapUsing3rdVariable(a,b);
        SwapWithoutUsing3rdVariable(a,b);
        SwapUsingBitWiseOperator(a,b);
        SwapUsingBitWiseOperatorInOneLine(a,b);
}