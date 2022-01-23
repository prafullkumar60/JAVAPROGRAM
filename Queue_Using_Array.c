#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int Q[MAX];
int rear=-1,front=-1;
void Enq(int);
int Deq();
void Display();
void Peek();

int main()
{
        int data,choice;
        while(1)
        {
                printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.exit\n");
                printf("Enter your Choice\n");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:printf("Enter the data\n");
                               scanf("%d",&data);
                               Enq(data);
                               break;
                        case 2:if(front==-1)
                                       printf("Queue is empty\n");
                               else
                                       printf("Data dequeue is %d\n",Deq());
                               break;
                        case 3:Display();
                               break;
                        case 4:Peek();
                               break;
                        case 5:exit(0);
                        default:printf("Invalid choice\n");
                }
        }
}
void Enq(int d)
{
        if(rear == MAX-1)
                printf("Queue is full\n");
        else
        {
                if(front == -1)
                        front++;
                Q[++rear]=d;
        }
}
int Deq()
{
        int temp;
        temp=Q[front++];
        if(front == rear+1)
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
void Peek()
{
        if(front==-1 && rear==-1)
        {
                printf("Queue is empty\n");
                return;
        }
        printf("Front of the Queue is %d\n",Q[front]);
}
