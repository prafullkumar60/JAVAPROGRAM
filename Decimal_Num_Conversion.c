#include<stdio.h>
#include<math.h>
void DecimalToOctal(int);
void DecimalToBinary(int);
void DecimalToHexaDecimal(int);
int main()
{
        int num;
        printf("Enter any Decimal Number ");
        scanf("%d",&num);
        DecimalToOctal(num);
        DecimalToBinary(num);
        DecimalToHexaDecimal(num);
}
void DecimalToOctal(int data)
{
        int Oct[30],i;
        printf("%d Decimal equivalent Octal :",data);
        for(i=0;data>0;i++)
        {
                Oct[i]=data%8;
                data/=8;
        }
        for(i--;i>=0;i--)
        {
                printf("%d",Oct[i]);
        }
        printf("\n");
}
void DecimalToBinary(int data)
{
        int bit;
        printf("%d Decimal equivalent Binary :",data);
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",(data>>bit)&1);
        }
        printf("\n");
}
void DecimalToHexaDecimal(int data)
{
        char Hexa[30];
        int i,temp;
        printf("%d Decimal equivalent Hexadecimal :",data);
        for(i=0;data>0;i++)
        {
                temp=data%16;
                if(temp<10)
                {
                        Hexa[i]=temp+48;
                }
                else
                {
                        Hexa[i]=temp+55;
                }
                data/=16;
        }
        for(i--;i>=0;i--)
        {
                printf("%c",Hexa[i]);
        }
        printf("\n");
}