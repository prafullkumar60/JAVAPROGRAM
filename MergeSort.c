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
void Merge(int *p,int low,int mid,int high)
{
        int li,ri,i,k;
        int temp[MAX];
        li=low;
        ri=mid+1;
        i=low;
        while(li<=mid && ri<=high)
        { 
		if(p[li]<p[ri])
                {
                        temp[i]=p[li];
                        li++;
                }
                else
                {
                        temp[i]=p[ri];
                        ri++;
                }
                i++;
        }
        if(li>mid)
        {
                for(k=ri;k<=high;k++,i++)
                        temp[i]=p[k];
        }
        else
        {
                for(k=li;k<=mid;k++,i++)
                        temp[i]=p[k];
        }
        for(i=low;i<=high;i++)
                p[i]=temp[i];
}
void Partition(int *p,int low,int high)
{
	 int mid;
        if(low<high)
        {
                mid=(low+high)/2;
                Partition(p,low,mid);
                Partition(p,mid+1,high);
                Merge(p,low,mid,high);
        }
}
void MergeSort(int *p,int size)
{
        Partition(p,0,size-1);
}
int main()
{
        int arr[MAX];
        Input(arr,MAX);
        printf("Elements before sorting\n");
        Display(arr,MAX);
        MergeSort(arr,MAX);
        printf("Elements after sorting\n");
        Display(arr,MAX);
}

