#include<stdio.h>

int main()
{

float f = 3.14;            

float *p1 = &f;            

float **p2 = &p1;             

printf("%f\n",f);

printf("%f\n",*p1);

printf("f\n",**p2);

printf("%d\n",*p2);

printf("%d\n",p2);

return 0;

}
