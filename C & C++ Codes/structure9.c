#include<stdio.h>

struct Demo
{
    int no;
    int data;
};

int main()
{
    struct Demo obj;

    struct Demo *ptr = &obj;

    // . is direct accessing operator
    obj.data=11;
    //-> is
    ptr->data=11;
    return 0;
}