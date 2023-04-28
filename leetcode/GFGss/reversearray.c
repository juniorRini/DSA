#include<stdio.h>

void reversearray(int n,int start,int end)
{
    int i,a[100];
    for(i=0;i<n;i++)
    {
      
      start=a[i];
      a[i]=a[n];
      end=a[n];
      i++;
      n--;
    }
    
}
void printarray(int a[100],int n)
{
    int i;
         for(i=0;i<n;i++)
    {
       printf(" %d ",a[i]);
    }  
}
 



int main()
{
    int i,n,a[100];
    printf("Enter the limit of the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("Enter the elements: ");
       scanf("%d",&a[i]);
    }
    printf("The array is: ");
         for(i=0;i<n;i++)
    {
       printf(" %d ",a[i]);
    }   

   
    reversearray(n,0,n-1);
    printf("\nThe reverse of this array is:\n ");
    printarray(a[100],n);
   

    return 0;
}