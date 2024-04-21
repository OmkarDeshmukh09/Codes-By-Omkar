#include<stdio.h>

struct Demo
{
    int data;
    struct Demo obj;  // ERROR
};

int main()
{


    return 0;
}