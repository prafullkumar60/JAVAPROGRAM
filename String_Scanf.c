#include<stdio.h>
int main()
{
        char para[100];
        printf("Enter Paragraph:");
        scanf("%[^\n]s",para);
        printf("Accepted Paragraph : %s\n",para);
}