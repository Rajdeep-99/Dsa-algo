#include<stdio.h>
#include<stdlib.h>
void create_list(int);
void insert_at_begin();
void insert_at_last();
void counting();
void print_list();
struct node
{
	int data;
	struct node* link;
}*first=NULL;
main()
{
	int i,n,a,ch;
	do
	{
		printf("Enter\n1: Create\n2: Insert  at Begin\n3: Insert at Last\n4:Count the nodes\n5:Print the list\n6:Exit");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\nEnter the term: ");
					scanf("%d",&n);
					for(i=0;i<n;i++)
					{	
						scanf("%d",&a);
						create_list(a);
					}
					break;
			case 2: insert_at_begin();
					break;
			case 3: insert_at_last();
					break;
	   		case 4: counting();
	   				break;
	   		case 5: print_list();
	   				break;
	   		case 6: exit(0);
	   		default:printf("Invalid Choice");
	   }
	}while(ch!=6);
	
}
void create_list(int x)
{
	struct node *temp,*q;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=NULL;
		if(first==NULL)
			first=temp;
		else
		{
			q=first;
			while(q->link!=NULL)
			{
				q=q->link;
			}
			q->link=temp;
		}
}
void print_list()
{
	struct node *tmp;
	tmp=first;
	while(tmp!=NULL)
	{
		printf("%d",tmp->data);
		printf("---->");
		tmp=tmp->link;
	}
	printf("NULL");
}
void insert_at_begin()
{
	int x;
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data to be inserted");
	scanf("%d",&x);
	tmp->data=x;
	tmp->link=first;
	first=tmp;
}
void insert_at_last()
{
	int x;
	struct node *tmp,*q;
	tmp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data to be inserted");
	scanf("%d",&x);
	tmp->data=x;
	tmp->link=NULL;
	if(first==NULL)
		first=tmp;
	else
	{
		q=first;
		while(q->link!=NULL)
		{
			q=q->link;
		}
		q->link=tmp;
	}
}
void counting()
{
	struct node *tmp,*q;
	int c=0;
	if(first==NULL)
	{
		printf("No nodes present");
	}
	else
	{
		q=first;
		while(q->link!=NULL)
		{
			c++;
			q=q->link;
		}
		c++;
		printf("NO. of nodes:%d",c);
	}
}
