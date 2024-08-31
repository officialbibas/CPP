#include<iostream>
using namespace std;
int main()
{
    int A[10], n=10;
    int key;
    cout<<"Enter Numnbers: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>> A[i];
    }
    cout<<"Enter Key Number: "<<endl;
    cin>>key;
    for(int i=0;i<10; i++)
    {
        if(key==A[i])
        {
            cout<<"Found at "<<i<<endl;
            return 0;
        }
    }
    
        cout<<"Not Found in Array.";
   
    return 0;
}