#include<iostream>

namespace Marvellous
{
    class Demo
    {
        //code
    };
}

namespace PPA
{
    class Hello
    {
        //code
    };
}
using namespace Marvellous;
int main()
{
    std ::cout<<"Inside main"<<"\n";
    Demo dobj;
    PPA :: Hello hobj;
    return 0;
}