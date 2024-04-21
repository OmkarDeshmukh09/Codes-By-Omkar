#include<studio.h>

    int main()
{
    char ch ='A';
    int i = 11;
    float f = 89.99f;
    double d = 90.9999;

    char *cptr = &ch;
    int *iptr =&i;
    float *fptr =&f;
    double *dptr =&d;

    return 0;
}

/*
i    =11
f    =89.99
&f   =300
&i   =200
ch   =A
&ch  =100
sizeof(ch)  =1byte
sizeof(f)   =4byte
sizeof(d)   =8byte
sizeof(iptr)=8byte
sizeof(cptr)=8byte
sizeof(fptr)8byte
*iptr   =11
*fptr   =89.99
*dptr   =90.9999
*cptr   =A
d       =90.9999
sizeof(*ch)=1byte
sizeof(*f)=4byte
sizeof(*iptr)=4byte
sizeof(*cptr)=4byte
sizeof(*fptr)=4byte
sizeof(*dptr)=8byte
*/