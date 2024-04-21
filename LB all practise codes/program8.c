//Q -> Accept A number from user and display is it even or odd
#include<stdio.h>
#include<stdbool.h>

//Algorithm
/*
    Start
        Accept one number as No
        Divide that number No by 2
        if remainder is 0
        then display the result as Even number
        otherwise display the No as Odd Number
    Stop
*/
///////////////////////////////////////////////////////////
//   
//   Function Name :    Check Even Odd
//   Description:       Used to check whether number is even or odd 
//   Input :            Integer
//   Output :           Boolean
//   Author :           Omkar Balasaheb Deshmukh
//  Date :              16/05/2024
//   
//////////////////////////////////////////////////////////

bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number\n",iValue);
    }
    else
    {
        printf("%d is Odd Number\n",iValue); 
    }

    return 0;
}