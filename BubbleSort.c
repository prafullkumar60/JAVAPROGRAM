#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void input(int *,int);
void display(int *,int);
void BubbleSort(int *,int);
int main()
{
	int arr[1000];
	input(arr,1000);
	printf("Enlements before sorting\n");
	display(arr,1000);
	BubbleSort(arr,1000);
	printf("Enlements After sorting\n");
	display(arr,1000);
}
void input(int *p,int size)
{
	int i;
	srand(getpid());
	for(i=0;i<size;i++)		
		p[i]=rand()%2001;
}
void display(int *p,int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d ",p[i]);
	printf("\n");
}
void BubbleSort(int *p,int size)
{
	int i,j,temp;
	for(i=1;i<size;i++)
	{
		for(j=0;j<size-i;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}