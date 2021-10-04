#include<stdio.h>
int binarySearch(int A[],int low,int high,int target)
{
   while(low<=high)
   {
       int mid=(low+high)/2;
       if(A[mid]<target)
       {
           low=mid+1;
       }
       else if(A[mid]>target)
       {
           high=mid-1;
       }
       else{
           return mid;
       }
   }
   return -1;
}