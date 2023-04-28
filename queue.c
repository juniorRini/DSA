#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int Queue_arr[SIZE];
int front=-1;
int rear=-1;

int isEmpty()
{
    if(rear>-1&&rear==front)
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
    if(rear == SIZE -1)
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
        printf("The Queue has overflowed.");
      }
      else
      {

        rear++;
        Queue_arr[rear]=data;
        
      }
}
int dequeue()
{
    if(isEmpty())
    {
        printf("The stack has underflowed.");
    }
    else
    {
        //printf("1 %d",front);
        front++;
        //printf("2%d",front);
        return Queue_arr[front-1];
        if(front==rear)
        {
            front=rear=-1;            //reseting the queue.
        }
        
        
    }
}
void print()
{
    int i;
    if(rear>-1&&rear==front)
    {
        printf("The Queue is underflowed.");
    }
    else
    {
        if(front==-1)
        {
            front = 0;
        }
        for(i=front;i<=rear;i++)
        {
            printf(" %d \n",Queue_arr[i]);
            
        }
       
    }
}
int frontInd()
{
    int a;
    a=Queue_arr[front];
    return a;
    printf("%d",front);
}
int rearInd()
{
    int b;
    b=Queue_arr[rear];
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
