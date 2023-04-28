#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node* createnode()
{
	struct node *node;
	int data;
	printf("Enter data:- \n");
	scanf("%d",&data);
	node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=NULL;
	return node;
}
void trans(struct node *ptr)
{
	while(ptr!=NULL)
	{
	printf("Element = %d\n",ptr->data);
	ptr=ptr->next;
	}
}
int getans()
{
	int n;
	printf("Press any non zero no. to continue else 0 to stop:- ");
	scanf("%d",&n);
	return n;
}
struct node* insertathead(struct node*head)
{
	int data;
	printf("Enter new head:- \n");
	scanf("%d",&data);
	struct node *node;
	node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=head;
	return node;
}
struct node* insertinbet(struct node *head)
{
	int data,index,i=0;
	printf("Enter index no.:- \n");
	scanf("%d",&index);
	printf("Enter data:- \n");
	scanf("%d",&data);
	struct node *node;
	node=(struct node*)malloc(sizeof(struct node));
	struct node *p=head;
	node->data=data;
	
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	node->next=p->next;
	p->next=node;
	return head;
}
struct node* insertinend(struct node *head)
{
	struct node *p=head;
	int data;
	printf("Enter new end element:- \n");
	scanf("%d",&data);
	struct node *node;
	node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=node;
	node->next=NULL;
	return head;
}
struct node* deletehead(struct node *head)
{
	struct node *p=head;
	head=head->next;
	free(p);
	return head;
}
struct node* deleteatbet(struct node *head)
{
	int index,i=0;
	printf("Enter index no.in between to delete:- \n");
	scanf("%d",&index);
	struct node *p=head;
	struct node *q=head->next;
	while(i!=index-1)
	{
		q=q->next;
		p=p->next;
	}
	p->next=q->next;
	free(q);
	return head;
}
struct node* deleteend(struct node *head)
{
	struct node *p=head;
	struct node *q=head->next;
	while(q->next!=NULL)
	{
		q=q->next;
		p=p->next;
	}
	p->next=NULL;
	free(q);
	return head;
}
int main()
{
    
	struct node *head,*node;//second,*third,*fourth/;
	head=createnode();
//	second=(struct node*)malloc(sizeof(struct node));
//	third=(struct node*)malloc(sizeof(struct node));
//	fourth=(struct node*)malloc(sizeof(struct node));
	node=head;
	while(getans())
	{
		node->next=createnode(node);
		node=node->next;	
	}
//	head->data=1;
//	head->next=second;
	
//	second->data=2;
//	second->next=third;
//	
//	third->data=3;
//	third->next=fourth;
//	
//	fourth->data=4;
//	fourth->next=NULL;
	printf("Linked List:-\n");
	trans(head);
	
	//to insert at head
	head=insertathead(head);
	trans(head);
	//to insert at between
	insertinbet(head);
	trans(head);
	//to insert at end
	insertinend(head);
	trans(head);
	//to delete head
	printf("\nAfter deletion of head:- \n");
	head=deletehead(head);
	trans(head);
	//to delete at between
	deleteatbet(head);
	printf("After deleting at between:- \n");
	trans(head);
	//to delete at end
	deleteend(head);
	printf("After deleting end:- \n");
	trans(head);
return 0;
}