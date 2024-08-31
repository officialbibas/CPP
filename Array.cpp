#include<iostream>
using namespace std;
int main()
{
    int A[5] = {2, 4, 6,8,10};
    int B[] = {1, 2, 3, 4 ,5, 6,7,8};
   for (int i = 0; i < 5; i++)
    {
        cout<<A[i]<<endl;
    } 
    for(int x:B)
    {
        cout<<x<<endl;
    }
    return 0;
}