#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *left, *right;
};


int getans(){
  int n;
printf("Enter 0 to stop and non-zero number to proceed : ");
  scanf("%d",&n);
  return n;  
}

//Creation of BST function
struct node *createnode(int item) {
struct node *temp = (struct node *)malloc(sizeof(struct node));
temp->data = item;
temp->left = temp->right = NULL;
return temp;
}

//Creation of BST insertion to be used recursively
struct node *insert(struct node *root, int key) {
  if (root == NULL) 
  {
  return createnode(key);
  }
  else if (key < root->data)
  {
    root->left = insert(root->left, key);
  }
  else{
    root->right = insert(root->right, key);
  }
}

//4.a) Display the data function
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d  ", root->data);
    inorder(root->right);
  }
}

//For 4.b)For searching the element 
int search(struct node* root, int value)
{
int level = 0;
    while (root != NULL){
        if (value > root->data){
            root = root->right;
            level++;
        }
        else if (value < root->data){
            root = root->left;
            level++;
        }
        else
            return level;
    }
    return 0;
}

//4.b)For deletion
struct node *minvalue(struct node *root)
{
	struct node *p = root;
	while(p->left!=NULL)
	{
		p = p->left;
	}
	return p;
}

//For deletion 4.b)
struct node *del(struct node *root, int value){
//	if(root == NULL)return root;
	if(root->data > value)
		root->left = del(root->left, value);
	else if(root->data < value)
		root->right = del(root->right, value);
	else{
	   if (root->left == NULL){
	   struct node *temp = root->right;
	   free(root);
	   return temp;
	}
	else if (root->right == NULL){
	   struct node *temp = root->left;
	   free(root);
	   return temp;
	}
	struct node *temp = minvalue(root->right);
	root->data = temp->data;
	root->right = del(root->right, temp->data);
	}
	return root;
}









int main()
{
	printf("Lab exam 2 dated 20/10/22 Roll-47\n");
	struct node *root = NULL;
	int data,value;
	do{
	    printf("Enter data\n");
	    scanf("%d",&data);
	    root=insert(root,data);
	}while (getans());
	printf("\nInorder traversal\n");
	inorder(root);
	printf("\nEnter data to be delete ");
	scanf("%d",&value);
	int a = search(root, value);
	if(root->data == value && root->left == NULL && root->right == NULL){
		free(root);
		printf("\nvalue ( %d ) deleted from level 0 \n",value);
	}
	else if(a){
		root = del(root, value);
		printf("\nvalue ( %d ) deleted from level %d \n",value,a);
	}
	else{
		printf("value not found");
	}
	printf("\nInorder traversal\n");
	inorder(root);
	
}