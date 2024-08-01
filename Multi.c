#include<stdio.h>

int main()
{
    int Arr[4] [5];

    int Arr[2] [2] = 11;
    int Arr[0] [3] = 21;
    int Arr[1] [4] = 51;
    int Arr[3] [3] = 101;
    int Arr[2] [1] = 111;
    int Arr[3] [0] = 121;
    int Arr[3] [4] = 151;
    int Arr[1] [2] = 201;

    printf("%d",Arr[3] [4]);
    printf("%d",Arr[1] [2]);
    printf("%d",Arr[0] [3]);

     return 0;
}