#include<iostream>
using namespace std;

class Demo
{   
    public:
        int No1, No2;       //non static charatertics  
        static int x;       //static charatertics      
        
        Demo()
        {
            No1 =10;
            No2 =20;

        }
        void fun()          //non static behaviour
        {
            cout<<"Inside fun\n";
            cout<<No1<<"\n";
        }
        static void Gun()   // static behaviour
        {
            cout<<"Inside Gun\n";
            cout<<x<<"\n";
        }
};
int Demo :: x = 11;

int main()
{
    cout<<"Value of x is : "<<Demo::x<<"\n";
    Demo::Gun();

    Demo obj1;
    Demo obj2;

    cout<<"Size of object is : "<<sizeof(obj1)<<"\n";
    cout<<obj1.No1<<"\t"<<obj1.No2<<"\n";
    cout<<obj2.No1<<"\t"<<obj2.No2<<"\n";

    obj1.fun();
    obj2.fun();

    obj1.Gun();
    cout<<"Value of x using object is : "<<obj1.x<<"\n";

    return 0;
}