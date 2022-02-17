#include<stdio.h>
int main()
{
        unsigned int value=0x11223344;
        int a,b,c,d;

        a=(( value >> 0 ) & 0xFF);
        b=(( value >> 8 ) & 0xFF);
        c=(( value >> 16 ) & 0xFF);
        d=(( value >> 24 ) & 0xFF);

        printf("a = %X\n",a);
        printf("b = %X\n",b);
        printf("c = %X\n",c);
        printf("d = %X\n",d);
}