#include<stdio.h>
int linearSearch(int A[],int target,int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==target)
        {
            printf("Element is found %d",i);
            exit(0);
        }
    }
    printf("Element is not found");
}