#include<stdio.h>
#include<stdlib.h>   // for malloc, calloc, realloc & free

int main()
{
    int Arr[5];     //Static memory allocation
    int Size = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&Size);

    ptr =(int *) calloc(size , Sizeof(int));
    //ptr =(int *) calloc(12 packet of milk , 500ml);

    // Use the memory

    free(ptr);
    return 0;
}
