 #include<stdio.h>
#include<stdlib.h>
struct Employee
{
	int empid;
	char name[20];
	struct Employee *prev,*next;
};
struct Employee *Add_last(struct Employee *);
struct Employee *Del_first(struct Employee *);
struct Employee *Del_last(struct Employee *);
struct Employee *Del_data(struct Employee *,int);
struct Employee *Add_first(struct Employee *);
struct Employee *Reverse(struct Employee *);
void save(struct Employee *);
void Display(struct Employee *);
void Rdisplay(struct Employee *);
int main()
{
	struct Employee *head=NULL;
	//head=Syncfromfile(head);
	int choice,data;
	while(1)
	{
		printf("1.Add_end\n2.Display\n3.Reverse Display\n4.Delete First\n5.Delete last\n6.Delete data\n7.Add first\n8.Reverse lsit\n9.save the list\n10.exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=Add_last(head);
				break;
			case 2:Display(head);
				break;
			case 3:Rdisplay(head);
				break;
			case 4:head=Del_first(head);
				break;
			case 5:head=Del_last(head);
				break;
			case 6:printf("Enter data to be deleted\n");
				scanf("%d",&data);
				head=Del_data(head,data);
				break;
			case 7:head=Add_first(head);
				break;
			case 8:head=Reverse(head);
				break;
			case 9:save(head);
				break;
			case 10:exit(0);
			default:printf("Invalid choice\n");
		}
	}
}
struct Employee *Add_last(struct Employee *ptr)
{
	struct Employee *nu=NULL,*temp=NULL;
	nu=calloc(1,sizeof(struct Employee));
	if(nu==NULL)
	{
		printf("Node is not created\n");
		return NULL;
	}
	printf("Enter the empid\n");
	scanf("%d",&(nu->empid));
	printf("Enter the name\n");
	scanf("%s",nu->name);
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
		nu->prev=temp;
	}
	return ptr;
}
void Display(struct Employee *ptr)
{
	if(ptr==NULL)
	{
		printf("DLL is empty\n");
		return;
	}
	while(ptr)
	{
		printf("%d %s\n",ptr->empid,ptr->name);
		ptr=ptr->next;
	}
}
void Rdisplay(struct Employee *ptr)
{
	if(ptr==NULL)
	{
		printf("DLL is empty\n");
		return;
	}
	for(;ptr->next;ptr=ptr->next);
	for(;ptr;ptr=ptr->prev)
	{
		printf("%d %s\n",ptr->empid,ptr->name);
	}
}
struct Employee *Del_first(struct Employee *ptr)
{
	struct Employee *temp=NULL;
	if(ptr==NULL)
	{
		printf("DLL is empty\n");
		return ptr;
	}
	temp=ptr;
	ptr=ptr->next;
	if(ptr)
		ptr->prev=NULL;
	free(temp);
	temp=NULL;
	return ptr;
}
struct Employee *Del_last(struct Employee *ptr)
{
	struct Employee *temp=NULL;
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp=ptr;
		while(temp->next)
		{
			temp=temp->next;
		}
		if(temp->prev)
		{
			temp->prev->next=NULL;
		}
		else
			ptr=NULL;
		free(temp);
		temp=NULL;
	}
	return ptr;
}
struct Employee *Del_data(struct Employee *ptr,int data)
{
	struct Employee *temp=NULL;
	if(ptr==NULL)
	{
		printf("List is empty\n");
		return ptr;
	}
	else if(data==ptr->empid)
	{
		ptr=Del_first(ptr);
	}
	else
	{
		temp=ptr->next;
		while(temp && temp->empid!=data)
			temp=temp->next;
		if(temp==NULL)
		{
			printf("Node with %d is not found\n",data);
		}
		else
		{
			temp->prev->next=temp->next;
			if(temp->next)
			{
				temp->next->prev=temp->prev;
			}
			free(temp);
			temp=NULL;
		}
	}
	return ptr;
}
struct Employee *Add_first(struct Employee *ptr)
{
	struct Employee *nu=NULL;
	nu=calloc(1,sizeof(struct Employee));
	if(nu==NULL)
	{
		printf("Node not created\n");
		return ptr;
	}
	printf("Enter the empid\n");
	scanf("%d",&(nu->empid));
	printf("Enter the name\n");
	scanf("%s",nu->name);
	nu->next=ptr;
	if(ptr)
		ptr->prev=nu;
	ptr=nu;
	return ptr;
}
struct Employee *Reverse(struct Employee *ptr)
{
	struct Employee *temp=NULL,*temp1=NULL;
	if(ptr==NULL)
	{
		printf("DLL is empty\n");
		return ptr;
	}
	temp=ptr;
	while(temp)
	{
		temp1=temp->prev;
		temp->prev=temp->next;
		temp->next=temp1;
		temp=temp->prev;
	}
	if(temp1)
		ptr=temp1->prev;
	return ptr;
}
void save(struct Employee *ptr)
{
	FILE *fp;
	if(ptr==NULL)
	{
		printf("DLL is empty\n");
		return;
	}
	fp=fopen("Emp.txt","w");
	if(fp==NULL)
	{
		printf("file is not open\n");
		exit(0);
	}
	while(ptr)	
	{
		fwrite(ptr,sizeof(struct Employee)-2*sizeof(struct Employee *),1,fp);
		ptr=ptr->next;
	}
	fclose(fp);
}
/*#include<string.h>
struct Employee *Syncfromfile(struct Employee *ptr)
{
	struct Employee *nu=NULL,*temp=NULL,var;
	FILE *fp;
	fp=fopen("Emp.txt","r");
	if(fp==NULL)
	{
		printf("Node is not created\n");
		return ptr;
	}
	while(fread(&var,sizeof(struct Employee)-2*sizeof(struct Employee *),1,fp))
	{
		nu=calloc(1,sizeof(struct Employee));
		if(nu==NULL)
		{
			printf("Node is not created\n");
			return ptr;
		}
		nu->empid=var.empid;
		strcpy(nu->name,var.name);
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
			nu->prev=temp;
		}
	}
	fclose(fp);
	return ptr;
}*/	