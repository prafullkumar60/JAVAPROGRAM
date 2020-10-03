#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void input(int *,int);
void display(int *,int);
void SelectionSort(int *,int);
int main()
{
	int arr[1000];
	input(arr,1000);
	printf("Enlements before sorting\n");
	display(arr,1000);
	SelectionSort(arr,1000);
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
void SelectionSort(int *p,int size)
{
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}