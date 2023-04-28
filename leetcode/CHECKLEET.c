#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target){
    int i,j;
    int* reSize= (int*) (malloc(sizeof(int)*2));
    
    printf("The summation of the following indices are:\n ");
    for(i=0;i<numsSize;i++)
    {   
        for(j=i+1;j<numsSize;j++)       
        {
           if(nums[i]+nums[j]==target)
           {
               reSize[0]=i;
               reSize[1]=j;
               
           }
        }
       
    }
    
   return reSize;
}

int main(int a, int* b, int t, int i, int j)
{  
    printf("Enter the limit of the array: ");
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
      printf("Enter the elements of the array: ");
      scanf("%d",&b[i]);
    }

    printf("Please select the integer target: ");
    scanf("%d",&t);

    int *index = twoSum(b,a,t);

    printf("%d, %d", index[0], index[1]);

    return 0;
}



