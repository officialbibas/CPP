#include<iostream>
using namespace std;

int main()
{
    [](){cout<<"Hello"<<endl;}();
    [](int x, int y){cout<<"Sum is "<<x+y<<endl;}(10,5);
    int a= [](int x, int y){return x+y;}(10,5);
    cout<<a;

}