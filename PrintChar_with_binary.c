#include<stdio.h>
int main()
{
        unsigned char ch;
        int bit;
        printf("Decimal    Character    Binary\n");
        for(ch=0;ch<128;ch++)
        {
                printf("%d             %c        ",ch,ch);
                for(bit=31;bit>=0;bit--)
                {
                        printf("%d",(ch>>bit)&1);
                }
                printf("\n");
        }
        printf("\n");
}