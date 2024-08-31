#include<iostream>
using namespace std;
int main()
{
    int Year;
    cout<<"Enter Year: "<<endl;
    cin>>Year;
    if (Year%4==0)
    {
        if (Year%100==0)
        {
           if (Year%400==0)
           {
                cout<<Year <<" is Leap Year."<<endl;
           }
            else
            {
                cout<<Year<<" is not Leap Year."<<endl;
            }
           
        }    
        else
    {
        cout<<Year<<" is Leap Year."<<endl;
    } 
    }
    
    
        return 0;
    
}