#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int *p =A, *q=&A[4];
    /*cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;  */
    for(int i=0; i<5;i++)
    {
        cout<<*p<<endl;
        p++;
    }
   // cout<<"d is "<<q-p;
    return 0;
}