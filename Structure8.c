#include<stdio.h>

struct Demo
{
    int Data;
    struct Hello 
   {
     int no;
     float f;
    }hobj; 
};

int main()
{
    struct Demo dobj;
    dobj.Data = 11;
    dobj.hobj.no = 21;
    dobj.hobj.f = 90.00
    return 0;
}
    