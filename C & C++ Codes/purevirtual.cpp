#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        Base()
        {  cout<<"Base constructor\n";}
        int Addition(int i, int j)
        {return i=j;}
        virtual int Substraction (int i,int j)
        {return i-j ;}
        virtual int Multiplication (int i,int j) = 0;
        
};
class Derived :public Base
{
    int X,Y;
    Derived()
    {  cout<<"Derived constructor\n";}
};
int main()
{


    return 0;
}