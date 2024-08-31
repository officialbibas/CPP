#include<iostream>
using namespace std;

int add(int x, int  y, int z=0)
{
    return x+y+z;
}
int max(int a=0, int b=0, int c=0)
{
    return a>b && a>c?a:b>c?b:c;
}

int main()
{
    cout<<add(5,8)<<endl;
    cout<<add(5,9,1)<<endl;
    cout<<max(6,8,9)<<endl;
    cout<<max(9,4,32)<<endl;
    cout<<max()<<endl;

}
