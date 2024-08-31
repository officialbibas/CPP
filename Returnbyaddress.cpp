#include<iostream>
using namespace std;

int * func(int size)
{
    int *p = new int[size]; 
    for(int i = 0; i<size; i++)
    {
        p[i]=5*i;
    }
    return p;
}

int main()
{
    int *q=func(5);
    for(int i=0; i<5;i++)
    {
        cout<<q[i]<<endl;
    }

}