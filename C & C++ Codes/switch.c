#include<stdio.h>

int main()
{
    int Standard = 0;

    printf("Enter your standard ; \n");
    scanf("%d",&Standard);

    switch (Standard)
    
    {
    case 1 :
            printf("YOur exam is at 7Am\n");
            break;
        case 2 :
            printf("YOur exam is at 8Am\n");
            break;
        case 3 :
            printf("YOur exam is at 9Am\n");
            break;
         case 4 :
            printf("YOur exam is at 10Am\n");
            break;
        default:
            printf("Wrong choice\n");
            
    }


    return 0;
}