#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int Q[MAX];
void Enq(int);
int Deq();
void Display();
int front=-1,rear=-1;
int main()
{
        int data,choice;
        while(1)
        {
                printf("1.Enq\n2.Deq\n3.Display\n4.exit\n");
                printf("Enter your choice\n");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:printf("Enter the data\n");
                               scanf("%d",&data);
                               Enq(data);
                               break;
                        case 2:if(front ==-1)
                                       printf("Queue is empty\n");
                               else
                                       printf("Data dequeue is %d\n",Deq());
                               break;
                        case 3:Display();
                               break;
                        case 4:exit(0);
                        default:printf("Invalid choice\n");
                }
        }
}
void Enq(int d)
{
        if(front == rear+1)
                printf("Queue s full\n");
        else
        {
                if(front==-1)
                        front++;
                Q[++rear]=d;
                if(rear==MAX-1)
                        rear=-1;
        }
}
int Deq()
{
        int temp;
        temp=Q[front++];
        if(front==MAX && rear>-1)
                front=0;
        else if(front == MAX || front == rear+1)
                front=rear=-1;
        return temp;
}
void Display()
{
        int i;
        if(front == -1 && rear == -1)
        {
                printf("Queue is Empty\n");
                return;
        }
        for(i=front;i<rear+1;i++)
        {
                printf("%d ",Q[i]);
        }
        printf("\n");
}