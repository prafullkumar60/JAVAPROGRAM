#include<stdio.h>
struct Data
{
        int x;
        float y;
        char ch;
        char str[10];
};
int main()
{
        struct Data *ptr=NULL;
        ptr++;
        struct Data obj;
        printf("Size of Structure:%lu\n",sizeof(obj));
        printf("Size of Structure without using sizeof=%u\n",ptr);
}