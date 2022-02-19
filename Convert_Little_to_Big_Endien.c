/*Program to check the CPU is Little Endian or Big Endian,If it is Litte
 * Endian then swap it,i.e convert it like Big Endian or used on the In-
 * ternet ,(Most Significant Byte first).
 */
#include<stdio.h>
unsigned short int HTONS1(unsigned short int );
int testLittleEndian();
int main()
{
        unsigned  int a;
        printf("Enter hexadecimal value");
        scanf("%X",&a);
        printf("Befor swap value = %x\n",a);
        printf("After swap value = %x\n",HTONS1(a));
}
unsigned short int HTONS1(unsigned short int data)
{
        char *ptr,temp;
        if(testLittleEndian())
        {
                ptr=(char *)&data;
                temp=*ptr;
                *ptr=*(ptr+1);
                *(ptr+1)=temp;
        }
        return data;
}
int testLittleEndian()
{
        int data=1;
        char *ptr=(char *)&data;
        if(*ptr==1)
        {
                printf("CPU is Little Endian\n");
                return 1;
        }
        else
        {
                printf("CPU is Big Endian\n");
                return 0;
        }
}