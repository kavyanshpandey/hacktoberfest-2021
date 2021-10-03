#include<iostream>    
using namespace std;      
void printFibonacci(int num){    
    static int num1=0, num2=1, num3;    
    if(num>0){    
         num3 = num1 + num2;    
         num1 = num2;    
         num2 = num3;    
 cout<<num3<<" ";    
         printFibonacci(num-1);    
    }    
}    
int main(){    
    int num;    
    cout<<"Enter the number of elements: ";    
    cin>>num;    
    cout<<"Fibonacci Series: ";    
    cout<<"0 "<<"1 ";  
    printFibonacci(num-2);     
     return 0;  
}  
