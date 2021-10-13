#include<iostream.h>
#include<conio.h>
void main()
{
//clear the screen.
clrscr();
//declare variable type int
int a[3][3],i,j;
//Input the numbers
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<"Enter number :";
cin>>a[i][j];
}
}
//display the matrix
for(i=2;i>=0;i--)
{
for(j=2;j>=0;j--)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}
//get character
getch();
}

