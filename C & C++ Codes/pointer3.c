#include<stdio.h>

int main()
{
    int no = 11;
    int *p =&no;
    int **q = &p;
    int ***x = &q;
    int ****y = &x;
    int *****z = &y;

    return 0;
}
/*
no=11
p=100
q=200
x=300
y=400
z=500
&no=100
&p=200
&q=300
&x=400
&y=500
&z=600
sizeof(no)=4
sizeof(p)=8
sizeof(q)=8
sizeof(x)=8
sizeof(y)=8
sizeof(z)=8
*p      =
***y    =
****z   =
**q     =
***x    =
**x     =
*x      =
*****z  =
****y   =
*/