#include<stdio.h>
#include<stdlib.h>
struct CLL
{
	int roll;
	char name[20];
	struct CLL *next;
};
struct CLL *Add(struct CLL *);
void Display(struct CLL *);
struct CLL *Del(struct CLL *,int);
int main()
{
	struct CLL *head=NULL;
	int choice,data;
	while(1)
	{
		printf("1.Add\n2.Display\n3.Delete\n4.exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=Add(head);
				break;
			case 2:Display(head);
				break;
			case 3:printf("Enter the data to be deleted\n");
				scanf("%d",&data);
				head=Del(head,data);
				break;
			case 4:exit(0);
			default:printf("Invalid choice\n");
		}
	}
}
struct CLL *Add(struct CLL *ptr)
{
	struct CLL *nu=NULL,*temp=NULL;
	nu=calloc(1,sizeof(struct CLL));
	if(nu==NULL)
	{
		printf("Node not created\n");
		exit(0);
	}
	printf("Enter the roll number\n");
	scanf("%d",&(nu->roll));
	printf("Enter the name\n");
	scanf("%s",nu->name);
	if(ptr==NULL)
	{
		ptr=nu;
		nu->next=ptr;
	}
	else
	{
		temp=ptr;
		while(temp->next!=ptr)
		{
			temp=temp->next;
		}
		nu->next=temp->next;
		temp->next=nu;
	}
	return ptr;
}
void Display(struct CLL *ptr)
{
	struct CLL *temp=NULL;
	if(ptr==NULL)
	{
		printf("CLL is empty\n");
		return;
	}
	else
	{
		temp=ptr;
		do
		{
			printf("%d %s\n",temp->roll,temp->name);
			temp=temp->next;
		}while(temp!=ptr);
	}
}
struct CLL *Del(struct CLL *ptr,int data)
{
	struct CLL *temp=NULL,*prev=NULL;
	if(ptr==NULL)
	{
		printf("CLL is empty\n");
		return ptr;
	}
	if(data==ptr->roll)
	{
		temp=ptr;
		ptr=ptr->next;
		if(ptr==temp)
			ptr=NULL;
		else
		{
			for(prev=temp;prev->next!=temp;prev=prev->next);
			prev->next=ptr;
		}
		free(temp);
		temp=NULL;
	}
	else
	{
		prev=ptr;
		temp=ptr->next;
		do
		{
			if(temp->roll==data)
				break;
			prev=temp;
			temp=temp->next;
		}while(temp!=ptr);
		if(temp==ptr)
			printf("%d is not found\n",data);
		else
		{
			prev->next=temp->next;
			free(temp);
			temp=NULL;
		}
	}
	return ptr;
}