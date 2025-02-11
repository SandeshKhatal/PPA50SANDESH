#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
        Demo()
        {
            A = 10;
            cout<<"Inside Demo Constructor\n";
        }
        ~Demo()
        { cout<<"Inside Demo destructor\n";}
        void Fun()
        { cout<<"Inside Fun of Demo\n";}
};

class Hello
{
    public:
        int B;
        Hello()
        {
            B = 20;
            cout<<"Inside Hello Constructor\n";
        }
        ~Hello()
        { cout<<"Inside Hello destructor\n";}
        void Gun()
        { cout<<"Inside Gun of Hello\n";}
};

class Marvellous : public Demo, public Hello
{
    public:
        int C;
        Marvellous()
        {
            C = 30;
            cout<<"Inside Marvellous Constructor\n";
        }
         ~Marvellous()
        { cout<<"Inside Marvellous destructor\n";}
        void Sun()
        { cout<<"Inside Sun of Marvellous\n";}
};
int main()
{
    Marvellous mobj;

    mobj.Fun();
    mobj.Gun();
    mobj.Sun();

    cout<<mobj.A<<"\n";
    cout<<mobj.B<<"\n";
    cout<<mobj.C<<"\n";
    return 0;
}