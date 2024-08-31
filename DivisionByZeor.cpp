#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a and b "<< endl;
    cin >> a >> b;
   
    if(b==0)
    {
        cout << "Divisible by zero"<< endl;
    }
    else
    {
        c= a/b;
        cout << c;
    }
    return 0;
}