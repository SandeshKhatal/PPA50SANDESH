#include<stdio.h>

int main()
{
double no =3.14;   // Consider address of no as 100

double *a = &no;  // Consider address of a as 200

double **b= &a;   //Consider address of b as 300

double ***c = &b; //Consider address of c as 400

double ****d = &c;   // Consider address of d as 500

printf("%d\n",&no);

printf("%d\n",a); 

printf("%d\n",&c);

printf("%d\n",&d);

printf("%d\n",d);

printf("%d\n",**d);

printf("%d\n",**c);

printf("%d\n",*b);

return 0;

}
