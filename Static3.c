//Contents of Demo.c file

#include<stdio.h>

extern int i;

extern int j;

extern int arr[4];

void gun();

int main()

{

printf("Value of i is %d\n", i);

printf("Value of j is %d\n",j);

int j=51;

printf("Value of j is %d\n");

printf("Value from array %d\n",arr[0]);

fun(); 
gun();
return 0;
}

int i = 21;
void gun()
{
    printf("Inside gun\n");
}
 




//We can compile above program as gcc demo.c hello.c-o myexe

//And run the same program as ./myexe