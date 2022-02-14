#include<stdio.h>
#include<math.h>
void BinaryToDecimal(int);
void BinaryToHexaDecimal(int);
void BinaryToOctal(int);
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
        BinaryToDecimal(n);
        BinaryToOctal(n);
        BinaryToHexaDecimal(n);
}
void BinaryToDecimal(int data)
{
        int i,dec=0;
        for(i=0;data>0;i++)
        {
                dec=dec+data%10*pow(2,i);
                data/=10;
        }
        printf("Binary equvalent Decimal = %d\n",dec);
}
void BinaryToOctal(int data)
{
        int i,dec=0,oct=0;
        for(i=0;data>0;i++)
        {
                dec=dec+data%10*pow(2,i);
                data/=10;
        }
        i=1;
        while(dec>0)
        {
                oct+=(dec % 8) * i;
                dec/=8;
                i=i*10;
        }
        printf("Binary equvalent Octal = %d\n",oct);

}
void BinaryToHexaDecimal(int data)
{
        int i,dec=0,temp;
        char Hexa[30];
        printf("Binary equvalent HexaDecimal = ");
        for(i=0;data>0;i++)
        {
                dec=dec+(data%10)*pow(2,i);
                data/=10;
        }
        for(i=0;dec>0;i++)
        {
                temp=dec%16;
                if(temp<10)
                {
                        Hexa[i]=temp+48;
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