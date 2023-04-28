#include<stdio.h>
#include<stdlib.h>
int *twosum(int *nums,int numsSize, int target)
{
    int *reSize=(int*)malloc(2*(sizeof(int)));
    int i,j;
    for (i=0;i<numsSize;i++)
    {
        for (j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                reSize[0]=i;
                reSize[1]=j;
            }
            else
            {
                printf("Choose the suitable number: ");
            }
        }
    }
    return reSize;
}
int main(int a,int *b,int t,int i,int j)
{   

    printf("Enter the array size: ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
    printf("Enter the elements: ");
    scanf("%d",&b[i]);
    }
    
    printf("Enter the target: ");
    scanf("%d",&t);

    int *index= twosum(b,a,t);
    
    printf("The required array is [%d,%d]",index[0],index[1]);
    return 0;
}