#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
	int roll;
	char name[20];
	struct stack *next;
};
struct stack *top=NULL;
void Push(struct stack);
struct stack Pop();
struct stack Peek();
int main()
{
	int choice;
	struct stack var;
	while(1)
	{
		printf("1.Push 2.Pop 3.Peek 4.exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the roll number\n");
				scanf("%d",&var.roll);
				printf("Enter the name\n");
				scanf("%s",var.name);
				Push(var);
				break;
			case 2:if(top==NULL)
					printf("Stack is underflow\n");
				else
				{
					var=Pop();
					printf("Poped record is %d %s\n",var.roll,var.name);
				}
				break;
			case 3:if(top==NULL)
					printf("Stack is underflow\n");
				else
				{
					var=Peek();
					printf("top of the stack pointing to %d %s\n",var.roll,var.name);
				}
				break;	
			case 4:exit(0);
			default:printf("Invalid choice\n");
		}
	}
}
void Push(struct stack v)
{
	struct stack *nu=NULL;
	nu=calloc(1,sizeof(struct stack));
	if(nu==NULL)
	{
		printf("Stack is overflow\n");
		return;
	}
	nu->roll=v.roll;
	strcpy(nu->name,v.name);
	nu->next=top;
	top=nu;
}
struct stack Pop()
{
	struct stack *temp=NULL,v;
	temp=top;
	top=top->next;
	v=*temp;
	free(temp);
	temp=NULL;
	return v;
}
struct stack Peek()
{
	return *top;
}