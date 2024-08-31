#include<iostream>
using namespace std;
int main()
{
    int A[]={2,5,6,7,3,4,-9,1};
    int n=8, max = INT8_MIN;
    max = A[0];
    for(int i=0; i<8;i++)
    {
        if(A[i]>max)
            {
                max = A[i];
            }
    }
    cout<<"Maximum Element of an array ="<<max<<endl;
    return 0;
}