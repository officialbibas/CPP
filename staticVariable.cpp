#include<iostream>
using namespace std;

void fun()
{
    int a=5;
    static int v=0; //act as global variables
    v++;
    cout<<a<<" "<<v<<endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}