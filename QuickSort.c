#define MAX 500
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void Input(int *p,int size)
{
        int i=0;
        srand(getpid());
        for(i=0;i<size;i++)
                p[i]=rand()%1000;
}
void Display(int *p,int size)
{
        int i=0;
        for(i=0;i<size;i++)
                printf("%d ",p[i]);
        printf("\n");
}
int Partition(int *p,int low,int high)
{
	int left,right,pivotval,temp;
	pivotval=p[low];
	left=low;
	right=high;
	while(left<right)
	{
		while(left<=high && p[left]<=pivotval)
			left++;
		while(right>=low && p[right]>pivotval)
			right--;
		if(left<right)
		{
			temp=p[left];
			p[left]=p[right];
			p[right]=temp;
		}
	}
	p[low]=p[right];
	p[right]=pivotval;
	return right;
}
void QuickSort(int *p,int low,int high)
{
	int pivot_pos;
	if(low<high)
	{
		pivot_pos=Partition(p,low,high);
		QuickSort(p,low,pivot_pos-1);
		QuickSort(p,pivot_pos+1,high);
	}
}

int main()
{
        int arr[MAX];
        Input(arr,MAX);
        printf("Elements before sorting\n");
	Display(arr,MAX);
        QuickSort(arr,MAX);
        printf("Elements after sorting\n");
        Display(arr,MAX);
}

