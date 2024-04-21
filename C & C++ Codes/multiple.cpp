#include<iostream>
using namespace std;

class Demo
{
public:
    int A;
    demo()
    {
        A =10;
        cout<<"Inside Demo constructor\n";
    }
    ~Demo()
    { cout<<"Inside Demo Destructor\n";  }
    void Fun()
    { cout<<"Inside Fun of Demo\n"; }
};

class Hello
{
    public:
        int B;
        Hello()
        {
            B = 20;
        cout<<"Inside Hello constructor\n";
        }
        ~Hello()
        { cout<<"Inside Hello Destructor\n";  }
        void Gun()
        { cout<<"Inside Gun of Hello\n"; }
};

class Marvellous : public Demo, Hello
{
    public :
        int C;
        Marvellous()
        {
            c =30;
            cout<<"Inside Marvellous constructor\n";
        }
        ~Marvellous()
        {  cout<<"Inside Marvellous destructor\n"; }
        void Sun()
        {  cout<<"Inside Sun of Marvellous \n"; }
};

int main()
{
    Marvellous mobj;

    mobj.Fun();
    mobj.Gun();
    mobj.Sun();

    return 0;
}