#include<iostream>
using namespace std;
int main()
{
    int i = 5, j;
   // j = i++; post iuncrement
   // j = ++i; // pre increment
    j= 2* ++i + 2* i++;
    cout << i <<" " << j<<endl;
    return 0;
}