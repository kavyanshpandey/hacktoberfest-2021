#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n=0,temp1,temp2,num,rem,res=0,start,end,i;
    cout<<"Enter the number from start and end: ";
    cin>>start>>end;
    cout<<"The armstrong num between start and end "<<start<<" and "<<end<<" are ";

    for(i=start+1;i<end;i++)
    {
        temp2=i;
        temp1=i;


    //count no of digits
    while(temp1!=0)
    {
        temp1/=10;
        ++n;
    }
    //check armstrong number

    while(temp2!=0)
    {
        rem=temp2%10;
        res+=pow(rem,n);
        temp2/=10;
    }
    if(res==i)
        cout<<i<<" ";

    res=0;
    n=0;
    }
    cout<<endl;
    return 0;
}
