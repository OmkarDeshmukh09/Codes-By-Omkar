#include<stdio.h>

int x = 101;

void Maravellous()
{
    int i = 21; 
    int No =51;

    printf("from Marvelous value of no is : %d\n",no);
    printf("from Marvelous value of no is : %d\n",i);
    printf("from Marvelous value of no is : %d\n",x);
}

void main()
{
    int No = 11;

    printf("from main value of no is : %d\n",no);
    printf("from main value of no is : %d\n",x);

    Marvelous();

    return 0;
}