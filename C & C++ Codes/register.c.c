#include<stdio.h>

void Maravellous()
{
    int i =11;
    register int j = 21;
    register int k;
    printf("%d\n",k);
}

int main()
{
    printf("Demonstration of auto storage class...\n");

    Maravellous();

    return 0;
}