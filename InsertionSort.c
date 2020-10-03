#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void input(int *,int);
void display(int *,int);
void InsertionSort(int *,int);
int main()
{
	int arr[1000];
	input(arr,1000);
	printf("Enlements before sorting\n");
	display(arr,1000);
	InsertionSort(arr,1000);
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
void InsertionSort(int *p,int size)
{
	int i,j,temp;
	for(i=1;i<size;i++)
	{
		j=i-1;
		temp=p[i];
		while(j>=0 && temp<p[j])
		{
			p[j+1]=p[j];
			j--;
		}
		p[j+1]=temp;
	}
}