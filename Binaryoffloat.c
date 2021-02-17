#include<stdio.h>
//using int variable
/*int main()
{
        float data;
        int *ptr=&data,bit;
        printf("Enter float data\n");
        scanf("%f",&data);
        printf("Binary value for float is %f=\n",data);
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",(*ptr>>bit)&1);
        }
        printf("\n");
}*/
//Using char variable
#include<stdio.h>
int main()
{
	float f=23.4;
	char *p=&f;
	int i,bit;
	char ch;
	for(i=3;i>=0;i--)
	{
		ch=*(p+i);
		for(bit=7;bit>=0;bit--)
			printf("%d",(ch>>bit)&1);
		printf(" ");
} 