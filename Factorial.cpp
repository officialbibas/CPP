#include<iostream>
using namespace std;
int main()
{
    int n, i, fact=1;
    cout<<"Enter n: "<<endl;
    cin>>n;
    
    for ( i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout<<"Factorial = "<<fact<<endl;
    return 0;
    
}