#include<stdio.h>

void Display(int No)
{
    static int iCnt = 0;

    if(iCnt < No)
    {
        printf("Jay ganesha...\n");
        iCnt++;
        Display(No);    //Recursive call
    }
}

int main()
{
    Display(4);

    return 0;
}