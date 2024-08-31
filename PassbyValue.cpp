#include<iostream>
using namespace std;

//Pass By Value
/*
void swap(int a, int b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
*/

//Pass By address
/*
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b = temp;
}
*/

//Pass By Reference

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    
}

int main()
{
    int x=10, y=20;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}