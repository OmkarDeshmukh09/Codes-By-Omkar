#include<stdio.h>

int main()
{
    int No = 0;
    int Ans = 0;

    printf("Enter number : \n");
    scanf("%d",&No);

    Ans = No % 2;

    if(Ans == 0)  //jar ans madhe 0 asel tr
    {
        printf("number is even\n");
    }
    else    //jr ans madhe 0 nasel tr
    {
        printf("Number is odd\n");
    }

    return 0;
}