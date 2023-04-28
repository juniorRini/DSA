#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *leftchild;
    struct node *rightchild;
};
void preorder(struct node* root)
{
    if(root!=NULL)

    {
        printf("%d",root->data);
        preorder(root->leftchild);
        preorder(root->rightchild);
    }
}
struct node* createnode(int data)
{
    struct node *node;
    node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->leftchild=NULL;
    node->rightchild=NULL;
    return node;
}

int ifcontinue()
{
    int r;
    printf("Enter any non-zero no. to continue or 0 to stop creating nodes:\n");
    scanf("%d",&r);
    return r;
}
struct node* Insertleft(struct node* root,int data)
{
    printf("Enter the data in the left child:\n");
    scanf("%d",&data);
    root->leftchild=createnode(data);
    return root->leftchild;
}
struct node* Insertright(struct node* root,int data)
{
    printf("Enter the data in the right child:\n");
    scanf("%d",&data);
    root->rightchild=createnode(data);
    return root->rightchild;
}

void showdata(struct node* root)
{
   int data;
   while(ifcontinue())
{
   Insertleft(root,data);
   Insertright(root,data);
   Insertleft(root->leftchild,data);
   Insertright(root->rightchild,data);
}
   printf("The binary tree is as follows:\n");
   preorder(root);
}

void main()
{
    int data;
    struct node* root;
    printf("Enter the root:");
    scanf("%d",&data);
    root=createnode(data);

    showdata(root);
    
    
    
}