// C Program to find element in array using binary search
#include<stdio.h>           // Header file
#include<conio.h>              // Header file
int Bsearch(int , int []);              // function declare

main()                                  // main function
{
int a[]={15,27,61,119,207,315,497};
int n,i,res;
printf("Enter no to be search : ");
scanf("%d",&n);
res = Bsearch(n,a);                     // call function
   {
    if(res==-1)
        printf("Not found");
    else
        printf("Found at %d",res);
    }
}

int Bsearch(int n, int a[])             // function define
{
int low=0,mid,high=10;
while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==n)
            return mid+1;               //when found
        else if(a[mid]>n)
            high=mid-1;
        else if(a[mid]<n)
            low=mid+1;
    }
    return (-1);                         // not found
}
        // End of program
