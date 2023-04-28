#include<stdio.h>
void insertionsort(int a[],int n)
{
    int i;
    int hole,value;
    for(i=1;i<n-1;i++)
    {
      value=a[i];
      hole=i;
       while(hole>0 && a[hole-1]>value)
       {
        a[hole]=a[hole-1];
        hole--;
       }
       a[hole]=value;
    }
}
int main()
{
    int a[100],i,j,n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter the element at %d index",i);
    scanf("%d",&a[i]);
    }
    printf("The array is:\n");
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
    insertionsort(a,n);
    printf("\nThe sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}