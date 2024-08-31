#include<iostream>
using namespace std;
int main()
{
    int A[10] = {6,8,17,8,20,22,24,45,50,66};
    int first =0, last=9, key, mid;
    cout<<"Enter Key Number: ";
    cin>> key;
    while(first<=last)
   { 
    mid = (first+last)/2;
    
    if(key == A[mid])
    {
        cout<<"found at "<<mid;
        return 0;
    }
    else if(key<A[mid])
    {
        last = mid-1;
    }
    else{
        first = mid+1;
    }
    }
    cout<<"Not Found ";
    return 0;
   
}