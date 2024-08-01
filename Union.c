#include<stdio.h>

#pragma pack(1)
struct Student
{
    int no;       //4
    float f;      //4
    int data;     //4
    char ch;      //1
};                //13


union Hello
{
    int no;       //4
    float f;      //4
    int data;     //4
    char ch;      //1
};                //4



int main()
{
   struct Student sobj;
   union Hello hobj;


   printf("%d\n",sizeof(sobj));  //13 pragma
   printf("%d\n",sizeof(hobj));  //4

   hobj.no = 11;
   printf("%d\n",hobj.no);    //11

   hobj.data = 21;
   printf("%d\n",hobj.no);   //21
   printf("%d\n",hobj.data);   //21

    return 0;
}