#include<stdio.h>
int main()
{
        int x=799,y=799,i;
        for(i=31;i>=0;i--)
        {
                if((((x>>i)&1) && ((y>>i)&1))||((((x>>i)&1)==0) && (((y>>i)&1)==0)))
                {
                        continue;
                }
                else
                {
                        if((x>>i)&&1)
                                printf("%d is greatest\n",x);
                        else
                                printf("%d is greatest\n",y);
                        break;
                }
        }
        if(i==-1)
        {
                printf("Both are equal\n");
        }
}