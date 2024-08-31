#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cout<<"Enter m and n: ";
    cin>>m>>n;
    while (m!=n)
    {
        if(m>n)
            m=m-n;
        else

            n=n-m;
    }
    cout<<"HCF is: "<<m;
    return 0;
    
}