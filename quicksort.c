#include <stdio.h>

int partition(int array[],int start,int end)
{
	int i,temp;
	int pivot,pIndex;
	pivot = array[end];
	pIndex = start;

  for(i=start;i<=end-1;i++)
  {
	if(array[i]<pivot)
	{
		
		temp=array[i];
		array[i]=array[pIndex];
		array[pIndex]=temp;
		pIndex++;
		
	}
       temp=array[pIndex+1];
       array[pIndex+1]=array[end];
	   array[end]=temp;
  }
  return (pIndex);
}
 void printarray(int array[],int n)
 {
	int i;
	for (i=0;i<n;i++)
	{
		printf(" %d ",array[i]);
	}
 }
 void quicksort(int array[],int start, int end)
 {
	if(start<end)
	{
      int pIndex=partition(array,start,end);
	  quicksort(array,start,pIndex-1);
	  quicksort(array,pIndex+1,end);

	}
	
 }

 int main()
 {
	int a[100],n,i;

   printf("Enter the array size: ");
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
	printf("Enter the element at %d index: ",i);
	scanf("%d",&a[i]);
   }
   printf("The given array is: \n ");
   printarray(a,n);
   quicksort(a,0,n-1);
   printf(" \nThe sorted array is:\n ");
   printarray(a,n);

   return 0;
 }