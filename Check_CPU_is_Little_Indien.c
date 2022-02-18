#include<stdio.h>
int main()
{
        int data=1;
        char *ptr=(char *)&data;
        if(*ptr==1)
                printf("CPU is little Endien\n");
        else
                printf("CPU is Big Endien\n");
}