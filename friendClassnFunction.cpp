#include<iostream>
using namespace std;
class MyTest;
class Test
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    friend Mytest;

    friend void func();
};
class Mytest
{
    Test x;
    void fun()
    {
        x.a=17;
        x.b=18;
        x.c=25;
    }
};
void func()
    {
        Test t;
        t.a=15;
        t.b=5;
        t.c=20;
    }

int main()
{
    func();
}