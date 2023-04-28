#include <stdio.h>
//#include <stdlib.h>
void merge(int array[],int left,int mid,int right)
{
    int i,j,k;

    int nl= mid-left+1;
    int nr= right-mid;
    int l[nl],r[nr];
    for(i=0;i<nl;i++)
    {
        l[i]=array[left+i];
    }
    for(j=0;j<nr;j++)
    {
        r[j]=array[mid+1+j];
    }
    i=0,j=0,k=left;
    while(i<nl && j<nr)
    {
        if(l[i]<=r[j])
        {
            array[k]=l[i];
            i++;
        }
        else
        {
            array[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<nl)
    {
        array[k]=l[i];
        i++;
        k++;
    }
    while(j<nr)
    {
        array[k]=r[j];
        j++;
        k++;
    }
}
void mergesort(int array[],int left,int right)
{
   
   
     if(left<right)
     {
     int mid = left+(right-left)/2;
     mergesort(array,left,mid);
     mergesort(array,mid+1,right);
     merge(array,left,mid,right);
     }
     
   }
   void printArray(int a[],int n)
   { int i;
    for(i=0;i<n;i++)
    {
  printf(" %d ",a[i]);
    }
   }

int main()
{
    int a[100],i,n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter the element at %d index: ",i);
    scanf("%d",&a[i]);
    }
    printf("The array is:\n");
    printArray(a,n);
    mergesort(a,0,n-1);
    printf("\nThe sorted array is\n");
    printArray(a, n);

    return 0;
}