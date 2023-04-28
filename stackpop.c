#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top =-1;
int isFull()            // if user wants to check the status of the stack before inserting values.
{
    
    if (top == MAX - 1)
    {
        return 1;
    }
    else
    return 0;
}
int isEmpty()                      // if user wants to check the status of the stack before inserting values.
{
     if(top==-1)
    {
        return 1;
    }
    else
    return 0;  
}
void push(int data)
{
    if (isFull())
    {
        printf("Stack overflow");
        return;
    }
    else
    {
        top=top+1;
        stack_arr[top]=data;
    }
}

int pop()
{
    if(isEmpty())
    {
        printf("Stack Underflow");
        exit(1);
    }
    else
    {
          int value;
    value=stack_arr[top];
    top=top-1;
    return value; 
    }
             
}
int peek()
{
    
    if(isEmpty())
    {
        printf("Stack Underflow");
        return;
    }
    return stack_arr[top];
}
void print()
{
    int i;
     if(top==-1)
    {
        printf("Stack Underflow");
        return;
    }

    for(i=top;i>=0;i--)
    {
        printf(" %d ",stack_arr[i]);

    }
}
int main()
{
    int choice , data;
    while(1)
    {
        printf(" \nChoose what you want to do in the stack: \n ");
    printf(" 1. Push/insert an element :\n");
    printf(" 2. Pop/delete the last inserted element :\n");
    printf(" 3. Tell the topmost element :\n");
    printf(" 4. Display all the elements :\n");
    printf(" 5. Exit :\n");
    printf(" So,enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    printf("Enter the element: ");
    scanf("%d",&data);
    push(data);
    break;

    case 2:
    data=pop();
    printf("The deleted element is: %d\n",data);
    break;

    case 3:
    printf("The topmost element is: %d\n",peek());
    break;

    case 4:
    printf("Displaying all the elements you have entered:\n ");
    print();
    break;

    case 5:
    exit(1);

    default:
    printf("Wrong choice:\n");
    }


    }
    return 0;
    
    
}
