#include<iostream>
using namespace std;

int max(int x, int y)
{
    return x>y?x:y;
}

int min(int x, int y)
{
    return x<y?x:y;
}

int main()
{
   int (*fp)(int, int);
    fp=max;
    (*fp)(10,5);
    fp=min;
    int a= (*fp)(10,5);
    cout<<"min: "<<a;

}