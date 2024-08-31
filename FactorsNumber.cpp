#include<iostream>
using namespace std;
int main()
{
    int n, i, sum=0;
    cout<<"Enter n: "<<endl;
    cin>> n;
    for(i=1;i<=n; i++)
    {
        if (n%i==0)
        {
            sum += i;
            cout<<"Factor of "<<n<<" = "<<i<<endl;
            
        }
    }
    cout<<sum<<endl;
    cout<<2*n<<endl;
    if (sum==2*n)
    cout<<n<<" is a perfect Number. "<<endl;
    else
    cout<<n<<" is not a perfect Number. "<<endl;
    
    return 0;
        
}