// Online C compiler to run C program online
// Online C compiler to run C program online
#include <stdio.h>


    // Write C code here
    
void selectionsort(int a[],int n)
{
    int i,j,temp,min; 
    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
           if(a[j]<a[min])
           {
              min=j;
           }
        
        if(min!=i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}
}
int main()
{
   int array[100],i,n;
   printf("Enter the no. of elements in the array:\n");
   scanf("%d",&n);
//    printf("%d",n);
//    printf("Enter the elements:\n ");
   for(i=0;i<n;i++)
   {
        printf("Enter element for index %d: ", i);
      scanf("%d",&array[i]);
   }
   printf("The array is:");
   for(i=0;i<n;i++)
   {
       printf(" %d",array[i]);
   }
   selectionsort(array,n);
   printf("The array is sorted:\n");
   
   for(i=0;i<n;i++)
   {
    printf("%d",array[i]);
   }
   return 0;
}

    
