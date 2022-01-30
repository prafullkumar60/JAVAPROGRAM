#include<stdio.h>
#include<stdlib.h>
int main()
{
        int num,min=9,max=0,temp,*ptr=NULL,i=0,j,temp1;
        printf("Enter any Number to Print smallest\n");
        scanf("%d",&num);
        while(num>0)
        {
                temp=num%10;
                if(temp>max)
                        max=temp;
                if(temp<min)
                        min=temp;
                num=num/10;
                ptr=realloc(ptr,sizeof(int));
                ptr[i++]=temp;
        }
        for(j=0;j<i;j++)
                printf("%d ",ptr[j]);
        printf("\n");
        temp1=i;
        i--;
        for(j=0;j<i;j++,i--)
        {
                temp=ptr[j];
                ptr[j]=ptr[i];
                ptr[i]=temp;
        }
        printf("********After***********\n");
        for(j=0;j<temp1;j++)
                printf("%d ",ptr[j]);
        printf("\n");
        for(i=0;i<temp1;i++)
        {
                if(max==ptr[i])
                {
                        ptr[i]=min;
                        continue;
                }
                if(min==ptr[i])
                        ptr[i]=max;
        }
        for(j=0;j<temp1;j++)
                printf("%d",ptr[j]);
        printf("\n");
        printf("Min=%d\nMax=%d\n",min,max);
}