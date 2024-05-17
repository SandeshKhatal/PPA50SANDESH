#include<stdio.h>
#include<stdlib.h>  //for malloc,calloc,realloc &free

int main()
{
   int Arr[5];    //static memory allocation
   int Size = 0;
   int *ptr = NULL;
   printf("Enter number of element : \n");
   scanf("%d",&Size);

   ptr = (int *)malloc(Size * sizeof(int));

   //use the memory

   free(ptr);

   return 0;
}