#include<iostream>
using namespace std;
int main()
{
    int n, r, sum=0, m;
    cout<<"Enter n: ";
    cin>>n;
    m=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r*r*r;
    }
    if(m==sum)
        cout<<"Armstrog Number "<<endl; 
    else
        cout<<"Not armstrong Number "<<endl;

    return 0;
   
    
}