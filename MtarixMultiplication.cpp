#include<iostream>
using namespace std;
int main()
{
    int A[10][10], B[10][10], mul[10][10], r1, r2,c1,c2,i ,j, k;
   
    cout<<"Enter rows and column of matix A: "<<endl;
    cin>>r1>>c1;
    cout<<"Enter rows and column of matrix B: "<<endl;
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<" ! Error ! Column of first matrix is not equal to rows of second matrix. "<<endl;
        return 0;
    }
       
    //Storing element of first matrix
    cout<<endl<<"Enter the element of matrix A: "<<endl;
    for(i= 0; i<r1;i++)
    {
        for(j=0; j<c1;j++)
        {
            cout<<"Enter element A"<<i+1<<j+1<<": ";
            cin>>A[i][j];
        }
    }
    //Storing second element matrix
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
        cout<<"Enter element B"<<i+1<<j+1<<": ";
        cin>>B[i][j];
        }
    }

    //Multiplying matrix A and B
   
    for(i=0;i<r1; i++)
    {
        for(j=0;j<c2;j++)
        {
           mul[i][j]=0;
           for(k=0;k<c1;k++)
           {
            mul[i][j]+=A[i][k]*B[k][j];
           }

        }
    }
    //Displaying output
    cout<<"Multiplication of matrix: "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<" "<<mul[i][j];
            if(j==c2-1)
            cout<<endl;
            
        }
    }
    return 0;

}