#include<stdio.h>
#include<math.h>
void OctalToDecimal(int);
void OctalToBinary(int);
void OctalToHexaDecimal(int);
int main()
{
        int num,temp;
        printf("Enter Octal Number(0 to 7)");
        scanf("%d",&num);
        temp=num;
        while(temp)
        {
                if(temp%10>7)
                {
                        printf("Given Number is not octal number\n");
                        return 0;
                }
                temp/=10;

        }
        OctalToDecimal(num);
        OctalToBinary(num);
        OctalToHexaDecimal(num);
}
void OctalToDecimal(int data)
{
        int i,dec=0;
        for(i=0;data>0;i++)
        {
                dec=dec+data%10*pow(8,i);
                data/=10;
        }
        printf("Octal equvalent Decimal = %d\n",dec);
}
void OctalToBinary(int data)
{
        int i,dec=0;
        for(i=0;data>0;i++)
        {
                dec=dec+data%10*pow(8,i);
                data/=10;
        }
        printf("Octal Equvalent Binary = ");
        for(i=31;i>=0;i--)
        {
                printf("%d",(dec>>i)&1);
        }
        printf("\n");
}
void OctalToHexaDecimal(int data)
{
        char Hexa[30];
        int i,temp,dec=0;
        printf("Octal equivalent Hexadecimal :");
        for(i=0;data>0;i++)
        {
                dec=dec+data%10*pow(8,i);
                data/=10;
        }
        for(i=0;dec>0;i++)
        {
                temp=dec%16;
                if(temp<10)
                {
                        Hexa[i]=temp+48;
                }
                }
                else
                {
                        Hexa[i]=temp+55;
                }
                dec/=16;
        }
        for(i--;i>=0;i--)
        {
                printf("%c",Hexa[i]);
        }
        printf("\n");
}