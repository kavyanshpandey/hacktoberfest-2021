#include<iostream>
using namespace std;

class B
{
public:
    virtual void display()=0;

};

class D
{
public:
    void message()
    {
        cout<<"Message"<<endl;
    }

    void display()
    {
        cout<<"Display"<<endl;
    }
};

int main()
{
    D d1;

    d1.message();
    d1.display();

    return 0;
}
