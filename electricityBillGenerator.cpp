#include<iostream>
using namespace std;

class Customer
{
    protected:
    string cname,caddress;
    int cid,cphone;
public:
     void getData()
     {
         cout<<"Enter the Customer ID : "<<endl;
         cin>>cid;
         cout<<"Enter the Customer name : "<<endl;
         cin>>cname;
         cout<<"Enter the Customer Address : "<<endl;
         cin>>caddress;
         cout<<"Enter the Customer Phone no. : "<<endl;
         cin>>cphone;
     }
};

class Bill:virtual public Customer
{
protected:

    float unit;
public:
    void getInfo()
    {
        cout<<"Enter the Consumed unit : "<<endl;
        cin>>unit;
    }

    void billCal()
    {

        if(unit>0 && unit<=100){
            cout<<"Bill amount is: "<<endl;
            cout<<unit*6<<endl;
        }


        else if(unit>100 && unit<=200){
        cout<<"Bill amount is: "<<endl;
        cout<<(100*6)+(unit-100)*8<<endl;
        }

        else if( unit>200 && unit<=300){
            cout<<"Bill amount is: "<<endl;
            cout<<(100*6)+(100*8)+(unit-200)*10<<endl;
        }

        else if(unit>300){

            cout<<"Bill amount is: "<<endl;
            cout<<(100*6)+(100*8)+(100*10)+(unit-300)*15<<endl;

        }
        else{
            cout<<"Bill amount is: "<<endl;
            cout<<"No value"<<endl;
        }
    }


};

class Display:virtual public Customer,public Bill
{
public:

    void print()
    {

      cout<<"ID : "<<cid<<endl;
      cout<<"Name : "<<cname<<endl;
      cout<<"Address : "<<caddress<<endl;
      cout<<"Phone no. : "<<cphone<<endl;
      cout<<endl;
      cout<<"CONSUMED UNIT : "<<unit<<endl;
    }

};



int main(void)
{
    Display obj1;

    obj1.getData();
    obj1.getInfo();
    cout<<"----------OUTPUT-----------"<<endl;
    obj1.print();
    obj1.billCal();

    return 0;
}
