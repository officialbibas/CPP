#include<iostream>
using namespace std;
int main()
{
    int n, r, rev=0;
    
    cout<<"Enter n: "<<endl;
    cin>> n;
    while (n>0)
    {
       r=n%10;
       n=n/10;
       rev=rev*10+r;    //Palindrome== (n==rev)
    }
    cout<<"Reverse is: "<<rev<<endl;
    if (n=rev)
    
        cout<< "This is a Plaindrome ";
    
    else
        cout<<"This is not a palindrome ";
    
    return 0;
}