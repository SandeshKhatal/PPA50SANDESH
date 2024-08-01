#include<stdio.h>

struct Student
{
   int RollNo;
   char Division;
   int Age;
   float Marks;
   int Salary;
};

int main()
{
  struct Student Amit;
  struct Student Vrushali;

  printf("size of object is : %d\n",sizeof(Amit));

  Amit.RollNo = 11;
  Amit.Division = 'A';
  Amit.Marks = 90.89;
  Amit.Age = 19;
  Amit.Salary = 210000;

  Vrushali.RollNo = 21;
  Vrushali.Division = 'B';
  Vrushali.Marks = 93.89;
  Vrushali.Age = 17;
  Vrushali.Salary = 50000;

  printf("Age of Amit is : %d\n",Amit.Age);
  printf("Salary of Amit is : %d\n",Amit.Salary);

  printf("Age of Vrushali is : %d\n",Vrushali.Age);
  printf("Salary of Vrushali is : %d\n",Vrushali.Salary);


    return 0;
}