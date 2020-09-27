#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *getstring()
{
        char *ptr=NULL;
        int i=0;
        do
        {
                ptr=realloc(ptr,i+1);
                ptr[i]=getchar();
        }while(ptr[i++]!='\n');
        ptr[i-1]='\0';
        return ptr;
}
int main()
{
        char *str=NULL;
        int i=0;
        printf("Enter any string\n");
        str=getstring();
        printf("Given String is:%s\n",str);
}