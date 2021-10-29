#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
    ofstream file("check.txt",ios::out);
    int account;
    char name[20];
    float balance;

    if(!file)
    {
        cerr<<"Error!!"<<endl;
        exit(1);
    }
    cout<<"***Enter the Following Details***"<<endl;
    cout<<"Account"<<endl<<"Name"<<endl<<"Balance"<<endl;
    file<<"Account      Name        Balance"<<endl;
    file<<"--------------------------"<<endl;
    while(cin>>account>>name>>balance)
    {

        file<<account<<"        "<<name<<"        "<<balance<<'\n';
        file<<"_______________________________________________"<<'\n';
        cout<<"? ";
    }
  
  return 0;
}
