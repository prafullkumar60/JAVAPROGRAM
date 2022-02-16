#include<stdio.h>
#include<string.h>
int HexaToDecimal(char *);
void HexaToOctal(int);
void HexaToBinary(int);
int main()
{
        char Hexa[30];
        int i,dec_value;
        printf("Enter Hexadecimal Number ");
        scanf("%s",Hexa);
        for(i=0;Hexa[i]!='\0';i++)
        {
                if(!((Hexa[i]>=48 && Hexa[i]<=57) || (Hexa[i]>=65 && Hexa[i]<=70) || (Hexa[i]>=97 && Hexa[i]<=102)))
                {
                        printf("Given Number is not a Hexadecimal\n");
                        return 0;
                }
        }
        dec_value=HexaToDecimal(Hexa);
        HexaToBinary(dec_value);
        HexaToOctal(dec_value);
}
int HexaToDecimal(char *ptr)
{
        int i,dec_value=0,base=1,len;
        len=strlen(ptr);
        for(i=len-1;i>=0;i--)
        {
                if(ptr[i]>='0' && ptr[i]<='9')
                {
                        dec_value=dec_value+(ptr[i]-48)*base;
                        base=base*16;
                }
                else if(ptr[i]>= 'A' && ptr[i]<= 'F')
                {
                        dec_value+=(ptr[i]-55)*base;
                        base=base*16;
                }
                else if(ptr[i]>= 'a' && ptr[i]<= 'z')
                {
                        dec_value+=(ptr[i]-87)*base;
                        base=base*16;
                }
        }
        printf("Hexadecimal equvalent decimal = %d\n",dec_value);
        return dec_value;

}
void HexaToOctal(int dec)
{
        int i=1,oct=0;
        while(dec>0)
        {
                oct+=(dec % 8) * i;
                dec/=8;
                i=i*10;
        }
        printf("Hexadecimal equvalent Octal = %d\n",oct);
}
void HexaToBinary(int data)
{
        int bit;
        printf("Hexadecimal equvalent Binary = ");
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",(data>>bit)&1);
        }
        printf("\n");
}