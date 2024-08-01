#include<stdio.h>

int main()
{

char ch = 'A';            // Consider address of ch as 100

char *p = &ch;            // Consider address of p as 200

char **q = &p;              // Consider address of q as 300

char ***x = &q;              // Consider address of x as 400

char ****y = &x;            // Consider address of y as 500


printf("%d\n",&ch);

printf("%d\n",p);

printf("%d\n",&p);

printf("%d\n",&q); 

printf("%d\n",q);

printf("%c\n",**x);

printf("%c\n",**q);
  
printf("%d\n",*q);

return 0;
}