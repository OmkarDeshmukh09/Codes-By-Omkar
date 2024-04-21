//Problem statement--Accept two numbers from user and perform its addition...

#include<stdio.h>

int main()
{
    //int i, j, k;
    float fValue1 = 0.0, fValue2 = 0.0;  // need to initlize with( = 0 ) 
    float fResult = 0.0;               // to reduce garbage values

    printf("Input  first number : \n");
    scanf("%f",&fValue1);

    printf("Input  first number : \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;

    printf("Addition is: %f\n",fResult);

    return 0;
}
/*
changed with data types to make more better
*/