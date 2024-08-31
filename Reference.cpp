#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;
    x++;
    y++;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<&x<<"  "<<&y<<endl;
    int a;
    a=x;
    x=25;
    cout<<x;

    return 0;

}