//Q -> Accept A number from user and display is it even or odd
#include<stdio.h>
#include<stdbool.h>

//Algorithm
/*
    Start
        Accept one number as No
        Divide that number No by 3
        if remainder is 0
        then peint  number is divisiable by 3 and 5 
        otherwise display the it is not divisble by 3, 5
    Stop
*/
///////////////////////////////////////////////////////////
//   
//   Function Name :    Check Even Odd
//   Description:       Used to check whether number is divisiable by 3 and 5 
//   Input :            Integer
//   Output :           Boolean
//   Author :           Omkar Balasaheb Deshmukh
//  Date :              16/05/2024
//   
//////////////////////////////////////////////////////////

bool CheckDivisiable(unsigned int iNo)
{
    if((iNo % 3  == 0) && (iNo % 5 == 0 ))
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
    scanf("%d",iValue);

    bRet = CheckDivisiable(iValue);

    if(bRet == true)
    {
        printf("%d is divisable by 3 & 5 Number\n",iValue);
    }
    else
    {
        printf("%d is not dividable by either 3 or 5\n",iValue); 
    }

    return 0;
}


/*
        Logical && operator

        first   second      &&          ||
        true    true        true        
*/