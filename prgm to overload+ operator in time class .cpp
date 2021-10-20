#include<conio.h>
#include<iostream>

using namespace std;
class time
{
    int H,M,S;
public:

    void set_time(int h,int m,int s)
    {
        H=h;
        M=m;
        S=s;
    }
    void show()
    {
        cout<<H<<":"<<M<<":"<<S<<endl;
    }
    void normal()
    {
        M=M+S/60;
        S=S%60;
        H=H+M/60;
        M=M%60;

    }
    time operator +(time s)

    {
        time temp;
        temp.H=H+s.H;
        temp.M=M+s.M;
        temp.S=S+s.S;
        return(temp);
    }

};

int main()
{
    /*int a,b,c;
    cout<<"enter time in hour,min,sec";
    cin>>a>>b>>c;*/
    time t,t2,t3;
    t.set_time(5,56,23);
    t.show();
    t2.set_time(4,22,56);
    t2.show();
    t3 = t+t2;
    t3.show();
    t3.normal();
    t3.show();
    getch();


}
