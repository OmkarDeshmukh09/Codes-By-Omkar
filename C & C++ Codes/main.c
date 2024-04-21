#include<stdio.h>

int x = 21;

extern int No;

extern void Maravellous();

int main()
{
    printf("Value of x is: %d\n",x);
    printf("Value of No is: %d\n",No);

    Maravellous();

return 0;
}