#include<iostream>
using namespace std;
int main ()
{
    float u, v, a;
    float speed;
    cout << "Enter u, v, a " << endl;
    cin >> u >> v >> a;
    speed = (v*v - u*u)/ (2*a);
    cout  << "Speed is " << speed;
    return speed;
}