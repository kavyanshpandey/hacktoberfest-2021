#include<iostream>
using namespace std;

class Test
{
    int a,b;
public:
    Test()
    {
        a=0;
        b=0;
    }
    Test(int x, int y)
    {
        a=x;
        b=y;
    }

    Test operator %(Test& t)
    {
        Test obj;
        obj.a = a%t.a;
        obj.b = b%t.b;
        return obj;
    }

    void print()
    {
        cout<<"The Value of A = "<<a<<endl;
        cout<<"The Value of B = "<<b<<endl;
    }
};


int main()
{
    Test t1(10,20);

    Test t2(7,5);

    Test t3;

    t3=t1%t2;

    t3.print();

    return 0;
}
