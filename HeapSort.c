#define MAX 500
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void heap_adjust(int *,int,int);
void heap_sort(int *p,int size)
{
        int temp,i;
        for(i=size/2-1;i>0;i--)
                heap_adjust(p,size,i);
        for(i=size-1;i>=0;i--)
        {
                temp=p[0];
                p[0]=p[i];
                p[i]=temp;
                heap_adjust(p,i,0);
        }
}
void heap_adjust(int *p,int size,int i)
{
        int large=i,left=2*i+1,right=2*i+2,temp;
        if(left<size && p[left]>p[large])
                large=left;
        if(right<size && p[right]>p[large])
                large=right;
        if(large!=i)
        {
                temp=p[large];
		p[large]=p[i];
                p[i]=temp;
                heap_adjust(p,size,large);
        }
}
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
int main()
{
        int arr[MAX];
        Input(arr,MAX);
        printf("Elements before sorting\n");
	Display(arr,MAX);
        heap_sort(arr,MAX);
        printf("Elements after sorting\n");
        Display(arr,MAX);
}

