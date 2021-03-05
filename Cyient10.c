#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
pthread_t thread_id[2];
pthread_mutex_t lock;
void *printEven(void *vargp)
{
        pthread_mutex_lock(&lock);
        printf("In thread 1\n");
        for(int i=0;i<=10;i++)
        {
                if(i%2==0)
                {
                        printf("%d\n",i);
                }
                sleep(1);
        }
        pthread_mutex_unlock(&lock);
}
void *printOdd(void *vargp)
{
        pthread_mutex_lock(&lock);
        printf("In thread 2\n");
        for(int i=0;i<=10;i++)
        {
                if(i%2!=0)
		{
                        printf("%d   \n",i);
                }
                sleep(1);
        }

        pthread_mutex_unlock(&lock);
}
int main()
{

        printf("Before thread\n");
        pthread_create(&thread_id[0],NULL,printEven,NULL);
        pthread_create(&thread_id[1],NULL,printOdd,NULL);
        printf("After thread\n");
        pthread_join(thread_id[0],NULL);
        pthread_join(thread_id[1],NULL);
}