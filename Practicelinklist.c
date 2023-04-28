#include<stdio.h>
#include<stdlib.h>

struct link
{
    int data;
    struct link*next;
};
struct link*createnode()
{
    struct link*node;
    node=(struct link*)malloc(sizeof(struct link));
    return node;
}
void putdata(struct link*node)
{   int data;
    printf("Enter the data: ");
    scanf("%d",&data);
    node->data=data;
    node->next=NULL;
}
int ifcontinue()
{
    int n;
    printf("Enter 0 to stop the linkage: ");
    scanf("%d",&n);
    return n;
}
void showdata(struct link*node)
{   
    printf("The following linkage as u exited: ");
    while(node!=NULL)
    {
        printf("%d\n",node->data);
        node=node->next;
    }   
}
void main()
{   
    struct link*head,*node;
    head=createnode();
    putdata(head);
    node=head;
    while(ifcontinue())
    {
       node->next=createnode();
       node=node->next;
       putdata(node);

    }
    node=head;
    showdata(head);


}