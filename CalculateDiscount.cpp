#include<iostream>
using namespace std;
int main()
{
    float billAmount;
    float discount = 0.0;
    cout<<"Enter Bill Amount: "<<endl;
    cin>>billAmount;
    if (billAmount>=500)
    {
        discount = 20*billAmount/100;
    }
    else if(billAmount>=100 && billAmount<500)
    {
        discount = 10*billAmount/100;
    }
    cout<<"Bill Amount: "<<billAmount<<endl;
    cout << "Discount: "<<discount<<endl;
    cout <<"Total: "<<billAmount-discount<<endl;
    return 0;
    
    
    
}