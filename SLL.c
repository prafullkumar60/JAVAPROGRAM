#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[20];
	float marks;
	struct student *next;
};
struct student *Add_end(struct student *);
void Display(struct student *);
struct student *Search(struct student *,int);
struct student *Del_first(struct student *);
struct student *Del_last(struct student *);
struct student *Del_data(struct student *,int);
void Reversep(struct student *);
struct student *Reversell(struct student *);
struct student *Add_first(struct student *);
struct student *Add_sort(struct student *);
void save(struct student *);
//struct student *Syncfromfile(struct student *);
int main()
{
	struct student *head=NULL,*temp=NULL;
	int choice,data;
//      head=Syncfromfile(head);
	while(1)
	{
		printf("1.Add_end\n2.Display\n3.Search\n4.Del_first\n5.Del_last\n6.Del_data\n7.Reverse print\n8.Reverse linked list\n9.exit\n10.Add_first\n11.Add_sort\n12.save\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=Add_end(head);
				break;
			case 2:Display(head);
				break;
			case 3:printf("Enter the roll number to be searched\n");
				scanf("%d",&data);
				temp=Search(head,data);
				if(temp==NULL)
				{
					printf("Node with %d is not found\n",data);
				}
				else
				{
					printf("node with %d is found with %s %f\n",temp->roll,temp->name,temp->marks);
				}
				break;
			case 4:head=Del_first(head);
				break;
			case 5:head=Del_last(head);
				break;
			case 6:printf("Enter the roll number to be deleted\n");
				scanf("%d",&data);
				head=Del_data(head,data);
				break;
			case 7:Reversep(head);
				break;
			case 8:head=Reversell(head);
				break;
			case 9:exit(0);
			case 10:head=Add_first(head);
				break;
			case 11:head=Add_sort(head);
				break;
			case 12:save(head);
				break;
			default:printf("Invalid choice\n");
		}
	}
}
void save(struct student *ptr)
{
	FILE *fp;
	fp=fopen("Student","w");
	if(fp==NULL)
	{
		printf("Error in opening the file\n");
		exit(0);
	}
	while(ptr)
	{
		fwrite(ptr,sizeof(*ptr)-sizeof(ptr),1,fp);
		ptr=ptr->next;
	}
	fclose(fp);
}
struct student *Add_end(struct student *ptr)
{
	struct student *nu=NULL,*temp=NULL;
	nu=calloc(1,sizeof(struct student));
	if(nu==NULL)
	{
		printf("Node is not created\n");
		return ptr;
	}
	printf("Enter roll number\n");
	scanf("%d",&(nu->roll));
	printf("Enter name\n");
	scanf("%s",nu->name);
	printf("Enter marks\n");
	scanf("%f",&(nu->marks));
	if(ptr==NULL)
	{
		ptr=nu;
	}
	else
	{
		temp=ptr;
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=nu;
	}
	return ptr;
}
void Display(struct student *ptr)
{
	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return;
	}
	else
	{
		while(ptr)
		{
			printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
			ptr=ptr->next;
		}
	}
}
struct student *Search(struct student *ptr,int data)
{
	struct student *temp=NULL;
	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}
	temp=ptr;
	while(temp && temp->roll!=data)
	{
		temp=temp->next;
	}
	if(temp==NULL)
		return NULL;
	else
		return temp;
}	
struct student *Del_first(struct student *ptr)
{
	struct student *temp=NULL;
	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}
	temp=ptr;
	ptr=ptr->next;
	free(temp);
	temp=NULL;
	return ptr;
}		
struct student *Del_last(struct student *ptr)
{
	struct student *temp=NULL,*prev=NULL;
	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}
	else
	{
		temp=ptr;
		while(temp->next)
		{
			prev=temp;
			temp=temp->next;
		}
		if(prev)
			prev->next=NULL;
		else
			ptr=NULL;
		free(temp);
		temp=NULL;
	}
	return ptr;
}
struct student *Del_data(struct student *ptr,int data)
{
	struct student *temp=NULL,*prev=NULL;
	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}
	if(data==ptr->roll)
	{
		ptr=Del_first(ptr);
	}
	else
	{
		prev=ptr;
		temp=ptr->next;
		while(temp && temp->roll!=data)
		{
			prev=temp;
			temp=temp->next;
		}
		if(temp==NULL)
		{
			printf("%d is not found\n",data);
		}
		else
		{
			prev->next=temp->next;
			free(temp);
			temp=NULL;
		}
	}
	return ptr;
}
void Reversep(struct student *ptr)
{
	if(ptr)
	{
		if(ptr->next)
			Reversep(ptr->next);
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
	}
}
struct student *Reversell(struct student *ptr)
{
	struct student *pptr=NULL,*cptr=NULL,*nptr=NULL;
	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}
	else
	{
		nptr=ptr;
		while(nptr)
		{
			pptr=cptr;
			cptr=nptr;
			nptr=nptr->next;
			cptr->next=pptr;
		}
		ptr=cptr;
	}
	return ptr;
}
struct student *Add_first(struct student *ptr)
{
	struct student *nu=NULL;
	nu=calloc(1,sizeof(struct student));
	if(nu==NULL)
	{
		printf("Node not created\n");
		return ptr;
	}
	printf("Enter the roll number\n");
	scanf("%d",&(nu->roll));
	printf("Enter the name\n");
	scanf("%s",nu->name);
	printf("Enter the marks\n");
	scanf("%f",&(nu->marks));
	nu->next=ptr;
	ptr=nu;
	return ptr;
}
struct student *Add_sort(struct student *ptr)
{
	struct student *temp=NULL,*prev=NULL,*nu=NULL;
	nu=calloc(1,sizeof(struct student));
	if(nu==NULL)
	{
		printf("Node is not created\n");
		return ptr;
	}
	printf("Enter the roll number\n");
	scanf("%d",&(nu->roll));
	printf("Enter the name\n");
	scanf("%s",nu->name);
	printf("Enter the marks\n");
	scanf("%f",&(nu->marks));
	if((ptr==NULL) || (nu->roll<ptr->roll))
	{
		nu->next=ptr;
		ptr=nu;
	}
	else
	{
		prev=ptr;
		temp=ptr->next;
		while(temp && (nu->roll>temp->roll))
		{
			prev=temp;
			temp=temp->next;
		}
		nu->next=prev->next;
		prev->next=nu;
	}
	return ptr;
}
/*
struct student *Syncfromfile(struct student *ptr)
{
	struct student *nu=NULL,*temp=NULL,var;
	FILE *fp;
	fp=fopen("student","r");
	if(fp==NULL)
	{
		printf("Error in opening the file\n");
		exit(0);
	}
	while(fread(&var,sizeof(*ptr)-sizeof(ptr),1,fp))
	{
		nu=calloc(1,sizeof(struct student));
		if(nu==NULL)
		{
			printf("Node not created\n");
			return ptr;
		}
		nu->roll=var.roll;
		strcpy(nu->name,var.name);
		nu->marks=var.marks;
		if(ptr==NULL)
		{
			ptr=nu;
		}
		else
		{
			temp=ptr;
			while(temp->next)
				temp=temp->next;
			temp->next=nu;
		}
	}
	fclose(fp);
	return ptr;
}*/	