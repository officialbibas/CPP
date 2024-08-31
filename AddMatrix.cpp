#include<iostream>
using namespace std;
int main()
{
    int A[2][3]={{2,4,6},{4,6,9}};
    int B[2][3]={{3,5,1},{7,9,1}};
    int C[2][3];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}