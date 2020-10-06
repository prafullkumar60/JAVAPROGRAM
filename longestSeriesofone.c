#include<stdio.h>
int main()
{
        int data,bit,hb=0,cnt=0,posn;
        printf("Enter numbers\n");
        scanf("%d",&data);
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",(data>>bit)&1);
        }
        printf("\n");
        for(bit=31;bit>=0;bit--)
        {
                while((data>>bit)&1==1)
                {
                        cnt++;
                        bit--;
                }
                if(cnt>hb)
                {
                        hb=cnt;
                        posn=bit+cnt;
                }
                cnt=0;
        }
        printf("Longest bit is %d\n",hb);
        printf("Bit position=%d\n",posn);
}