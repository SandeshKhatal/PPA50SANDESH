#include<stdio.h>

int main()
{
    int i = 11;
    char ch = 'A';
    float f = 90.89;
    double d =90.768459;

    int Arr[5];
    double Brr[5];
    float Crr[5];
    char Drr[5];

    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));

    printf("%d\n",sizeof(Arr));
    printf("%d\n",sizeof(Brr));
    printf("%d\n",sizeof(Crr));
    printf("%d\n",sizeof(Drr));
    

    return 0;
}