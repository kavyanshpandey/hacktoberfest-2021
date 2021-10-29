#include<stdio.h>
#include<iostream>

using namespace std;

int main(void)
{
  cout<<"*********** a to z *************"<<endl;
  for(int i='a'; i<='z'; i++)
    printf("%c = %d",i,i);
  
  cout<<endl;
  cout<<"*********** a to z *************"<<endl;
  for(int j='A'; j<='Z'; j++)
    printf("%c = %d",j,j);
  
 return 0;
}
