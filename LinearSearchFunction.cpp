#include<iostream>
using namespace std;

int search(int A[], int n, int key)
{
    for(int i=0; i<n;i++)
    {
       if(key ==A[i])
       return i;
       
    }
           cout<<"Not Found"<<endl;

    return 0;
    
}

int main()
{
    int A[]={1,2,3,4,5,6,7,8};
    int k;
    cout<< "Enter the element "<<endl;
    cin>>k;
    int index=search(A,8,k);
    cout<<"The element is at: "<<index<<endl;
}