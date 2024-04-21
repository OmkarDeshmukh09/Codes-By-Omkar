#include<iostream>
using namespace std;

class  Base
{
    public:
        int A,B;
        Base()
        {
            cout<<"Inside Base constructor\n";
            A=11;
            B=21;
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }

};
class Derived:public Base
{
    public:
        int x,y;
        Derived()
        {
            cout<<"Inside Derived constructor\n";
            x=51;
            y=101;
        }
        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }

};

class Derivedx:public Base
{
    public:
        int p;
        Derivedx()
        {
            cout<<"Inside Derivedx constructor\n";
        }
        ~Derivedx()
        {
            cout<<"Inside Derivedx destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Derivedx Sun\n";
        }

};

int main()
{
    Derived dobj;
    Derivedx d1obj;
    cout<<"size of object is :"<<sizeof(dobj)<<"\n";
    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    cout<<d1obj.p<<"\n";

    dobj.Fun();
    dobj.Gun();
    d1obj.Sun();

    return 0;
}