#include<stdio.h>

#pragma pack(1)

struct Demo
{
    int no;         //4
    float f;        //4
    int data;       //4
    char ch;        //1
};                  //(13 total size)

union Hello
{
    int no;
    float f;
    int data;
    char ch;
};
int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("Size of structure is : %d\n",sizeof(dobj));  //13
    printf("Size of union is : %d\n",sizeof(hobj));

    return 0;
}