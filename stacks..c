#include<stdio.h>
#define MAX 4

int stack_arr[MAX];
int top=-1 ;       //indicates the stack is empty

void push(int data)
{
    if (top == MAX - 1)
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
int main()
{
    push(1);
    push(2);
     push(3);
      push(4);
     //  push(5);     //not possible as the stack is full
      
    return 0;
}

