#include<iostream>
using namespace std;

class Student
{
private:
    int roll,age;
    string name,address;
    char gender;

public:

    void getInfo()
    {
        cout<<"Enter Roll : ";
        cin>>roll;
        cout<<"Enter Age : ";
        cin>>age;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Address : ";
        cin>>address;
        cout<<"Enter Gender : ";
        cin>>gender;
    }

    void display()
    {
        cout<<endl<<"***************STUDENT INFORMATION*****************"<<endl<<endl;

        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Age  : "<<age<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Gender : "<<gender<<endl;
    }




} ;

int main()
{

    Student obj;  // Student class ka object banaya jiska naam obj hai.
    obj.getInfo(); //obj jis class ka object hai us class ke getInfo() function ko call kro.
    obj.display(); //obj jis class ka object hai us class ke display() function ko call kro.

    return 0;
}
