#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *leftchild;
	struct node *rightchild;
};
struct node *root=NULL;
void createnode()
{
	int data,n=1;
	struct node *tempnode,*current,*parent;
	tempnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:- \n");
	scanf("%d",&data);
	tempnode->data=data;
	tempnode->leftchild=NULL;
	tempnode->rightchild=NULL;
	if(root==NULL)
	{
		root=tempnode;
//		return root;
	}
	else
	{
		current=root;
		parent=NULL;
		while(1)
		{
			parent=current;
			if(data < parent->data)
			{
				current=current->leftchild;
				if(current==NULL)
				{
					parent->leftchild=tempnode;
//					n=0;
//					return parent->leftchild;
					return;
				}
			}
			else
			{
				current=current->rightchild;
				if(current==NULL)
				{
					parent->rightchild=tempnode;
//					n=0;
					return;
//					return parent->rightchild;
				}
			}
			
		}
	}
}
int getans()
{
	int n;
	printf("To continue press any non-zero number else press 0 to stop:- \n");
	scanf("%d",&n);
	return n;
}	
void inorder(struct node* root)
{
	struct node *p=root;
	if(p!=NULL)
	{
		inorder(p->leftchild);
		printf("%d ",p->data);
		inorder(p->rightchild);
	}
}
void preorder(struct node* root)
{
	struct node *p=root;
	if(p!=NULL)
	{
		printf("%d ",p->data);
		preorder(p->leftchild);
		preorder(p->rightchild);
	}
}
void postorder(struct node* root)
{
	struct node *p=root;
	if(p!=NULL)
	{
		postorder(p->leftchild);
		postorder(p->rightchild);
		printf("%d ",p->data);
	}
}
int main()
{
	
	createnode();
	
	while(getans())
	{
		createnode();
	}
	printf("\n inorder:- ");
	inorder(root);
	printf("\n preorder:- ");
	preorder(root);
	printf("\n postorder:- ");
	postorder(root);
	
	return 0;
}