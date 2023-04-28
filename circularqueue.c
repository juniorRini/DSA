#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

int CircularQueue_arr[SIZE];
int rear=-1;
int front=-1;

int isEmpty()
{
    if(rear==front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if((rear+1)%SIZE == front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(int data)
{
      if(isFull())
      {
        printf("The Circular Queue has overflowed.");
      }
      else
      {
        if(front==-1)
        {
            front=0;
        }
        rear=(rear+1)%SIZE;
        CircularQueue_arr[rear]=data;
        
      }
}
int dequeue()
{
    if(isEmpty())
    {
        printf("The Circular Queue has underflowed.");
    }
    else
    {
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        front=(front+1)%SIZE;
        
        return CircularQueue_arr[front-1];
        
    }
}
void print()
{
    int i;
     
        while(i!=rear)
        {
             printf("%d ",CircularQueue_arr[i]);
             i=(i+1)%SIZE;
        }
        printf("%d ",CircularQueue_arr[i]);
      
}
int frontInd()
{
    int a;
    a=CircularQueue_arr[front];
    return a;
    
}
int rearInd()
{
    int b;
    b=CircularQueue_arr[rear];
    return  b;
    
}

int main()
{ 
    
    int choice,data;
    while(1)
    {
        printf("Choose the available operations to be performed in queue:\n");
        printf("1.Insert/Enqueue elements:\n");
        printf("2.Remove/Dequeue elements:\n");
        printf("3.Display all the elements in the Queue:\n");
        printf("4.What is the frontmost value?\n");
        printf("5.What is the rearmost value?\n");
        printf("6.exit:\n");
        
        scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the elements you want to insert/enqueue:");
        scanf("%d",&data);
        enqueue(data);
        break;

        case 2:
        printf("Removing/Dequeueing the element:%d\n",dequeue(data));
        break;

        case 3:
        printf("Displaying the elements in the Queue:\n");
        print();
        break;

        case 4:
        printf("The frontmost value is:%d \t", frontInd());
        break;

        case 5:
        printf("The rearmost value is:%d \t",rearInd());
        break;

        case 6:
        exit(1);

        default:
        printf("Wrong choice/n");
    }
    }
    return 0;
}
