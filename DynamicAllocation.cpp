#include<iostream>
using namespace std;
int main()
{
   /* int *p = new int[5];
    p[0]=12;
    p[1]=13;
    cout<<p[1];
    delete []p;
    p = nullptr;
    */
   int size;
   cout<<"Enter number of Elements ";
   cin>>size;
   int *p = new int[size];
   cout<<sizeof p;
   delete []p;
   p = new int[size];

    return 0;
}