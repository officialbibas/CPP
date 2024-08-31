#include<iostream>
using namespace std;

class Demo
{
    int *p;
    public:
    Demo()
    {
        p = new int[10];
        cout<<"Demo created"<<endl;

    }
    ~Demo()
    {
        delete []p;
        cout<<"Demo Destructed"<<endl;
    }
};
void fun()
{
    Demo *p=new Demo();
    delete p;
}
int main()
{
    fun();
}