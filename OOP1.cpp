#include<iostream>
using namespace std;

class Demo               //class declaration
{
    public:             //Access specifier
        int no1;        //characteristics
        int no2;        //characteristics

        Demo()          //constructor
        {
            cout<<"Inside constructor\n";
            no1=11;
            no2=21;
        }

        ~Demo()          //Destructor
        {
            cout<<"Inside Destructor\n";
        }

        void Fun()        //Behaviour
        {
            cout<<"Inside fun of Demo class\n";
        }

};

int main()
{
    cout<<"Inside main\n";
    Demo obj1;
    cout<<"value of no1 : "<<obj1.no1<<"\n";
    cout<<"value of no2 : "<<obj1.no2<<"\n";
    obj1.Fun();
    
    return 0;
}