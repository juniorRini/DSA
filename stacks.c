#include<stdio.h>
#define MAX 5

int stack_arr[MAX];
int top=-1 ;       //indicates the stack is empty

int push(int data)
{   
  int values;
    if (top == MAX - 1)
    {
        printf("Stack overflow");
        exit(1);
    }
    else
    {
     
        top=top+1;
         values=stack_arr[top];
        stack_arr[top]=data;
    }
    return values;
}
int main()
{
  int data;
   
    push(1);
    push(2);
     push(3);
      push(4);
      
      //push(5);     //not possible as the stack is full
      push( data);
      printf("The stack presented in array is: ",data);
      
    return 0;
}
