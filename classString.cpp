#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout <<"Enter a String: "<<endl;
    getline(cin,str);
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;

    str.resize(50);
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;

    if(str.empty())
    cout<<"String is Empty"<<endl;
    else
    cout<<str<<endl;

    

    return 0;
}