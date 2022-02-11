#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
          int arr[500];
          int i;
          srand(getpid());
          for(i=0;i<500;i++)
          {
                  arr[i]=rand()%1000;
          }
          printf("Frequency : ");
          for(i=0;i<500;i++)
          {
                  printf("%d,",arr[i]);
          }
          printf("\n");
}