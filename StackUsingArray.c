#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 6
int stack[MAX];
int top=-1;
void Push(int);
int Pop();
int Peek();
int main()
{
	int data,choice;
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Peek\n4.exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the data\n");
				scanf("%d",&data);
				Push(data);
				break;
			case 2:if(top==-1)
					printf("Stack is Underflow\n");
				else
					printf("Data poped is %d\n",Pop());
				break;
			case 3:if(top==-1)
					printf("Stack is Underflow\n");
				else
					printf("top of the stack points to %d\n",Peek());
				break;
			case 4:exit(0);
			default:printf("Invalid choice\n");
		}
	}
}
void Push(int data)
{
	if(top==MAX-1)
	{
		printf("Stack is overflow\n");
		return;
	}
	stack[++top]=data;
}
int Pop()
{
	return stack[top--];
}
int Peek()
{
	return stack[top];
}
	