#include <stdio.h>
void bubblesort(int a[],int n)
{
    int i,j,temp,flag;
    flag=0;
  for(i=0;i<n-1;i++)
  {
     for(j=i+1;j<n;j++)
     {
         if(a[i]>a[j])
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            flag=1;
         }
     }
      if(flag==0)
    break;
  }
 
}
int main()
{
    int a[100],i,j,n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter the elements at index %d:\n",i);
    scanf("%d",&a[i]);
    }
    printf("The array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
     bubblesort(a,n);
     printf("\nThe array is sorted\n");
     for(i=0;i<n;i++)
     {
        printf("%d",a[i]);
     }
     return 0;
}