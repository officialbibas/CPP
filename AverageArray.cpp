#include<iostream>
using namespace std;
int main()
{
  int n;
  float A[100], sum=0.0, average;
 
  cout<<"Enter the number of array. "<<endl;
  cin>>n;
  
  for(int i=0; i<n; i++)
  {
    cout<<i+1<<". Enter Elements of the array. "<<endl;
    cin>>A[i];
    sum+=A[i];
  } 
   average = sum/n;
  cout<< "The sum is: "<<sum<<endl;
  cout<<"The average is: "<<average<<endl;
  return 0;

}