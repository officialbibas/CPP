#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
    vector<int> v={10,20,40,28};
    v.push_back(25);
    v.push_back(30);
    v.pop_back();
    vector<int>::iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++)
   { 
    cout<<*itr<<" ";
   }
cout<<endl;
    // or

    for(int x:v)
    {
        cout<<x<<" ";
    }

    //list

 /*
 list<int> v={10,20,40,28};
    v.push_back(25);
    v.push_back(30);
    v.pop_back();
    list<int>::iterator itr;

    cout<<"Linked List"<<endl;
    for(itr=v.begin(); itr!=v.end(); itr++)
   { 
    cout<<*itr<<" ";
   }

*/

   
    
}