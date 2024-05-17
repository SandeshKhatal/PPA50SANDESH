#include<iostream>
using namespace std;

class Demo
{
    public:
        int X,Y;
        Demo()  
        {
            X = 10;
            Y = 20;
        }  
        void fun()
        {
            cout<<"inside fun\n"; //non constant function
            X++;
            Y++;   
        }
        void gun() const  //constant function
        {
            cout<<"Inside gun\n";
            //X++;
            //Y++; 
        }
};

int main()
{
    Demo obj1;
    const Demo obj2;

    obj1.fun();  //normal object noraml function
    obj1.gun();  //normal object constant function

    obj2.fun();  //constant object noraml function  //Not allowed
    obj2.gun();  //constant object constant function
   
    return 0;
}
