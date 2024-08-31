#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout<<"Non-Param Base"<<endl;
        }

        Base(int x)
        {
            cout<<"Param of Base "<<x<<endl;
        }
};

class Derived:public Base
{
    public:
        Derived()
        {
            cout<<"Non-Param Derived"<<endl;
        }
        Derived(int a)
        {
            cout<<"Param of Derived "<<a<<endl;
        }
        Derived(int x, int a):Base(x)   ///constructors in inheritance
        {
            cout<<"Param of Derived "<<a<<endl;
        }
};
int main() 
{
    Derived d(10,15);
}