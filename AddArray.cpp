#include<iostream>
using namespace std;
int main()
{
    int A[] = {4,6,8,9,5,7,2};
    int n=7, sum=0;
    for (int i = 0; i < 7; i++)
    {
        sum+=A[i];
    }
    cout<<sum;
    return 0;
    
}