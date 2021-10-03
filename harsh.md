//A code example for tmeplate.
#include<iostream>
using namespace std;

template<class t1, class t2, class t3>
class student{
    public:
    t1 name;
    t2 marks;
    t3 attendance;
    student(t1 a,t2 b, t3 c){
        name = a;
        marks = b;
        attendance = c;
    }
    void display(){
        cout<<"name of student is: "<<name<<" and he got "<<this->marks<<" marks and his attendance is "<<attendance<<"%."<<endl;
    };//using this->marks or only marks are same thing here.
};

int main()
{
    student<string,int,float> obj("harsh",95,85.5);
    obj.display();
     return 0;
}
