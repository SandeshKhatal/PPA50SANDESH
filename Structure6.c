#include<stdio.h>

struct Demo
{
    int Data;
    struct Demo obj;    //Error
};

int main()
{
    struct Demo obj;


    return 0;
}