#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    string rev="";
    
    cout<<"Enter the string:"<<endl;
    getline(cin,s);
    int len = (int)s.length();
    rev.resize(len);
    int j, i;
    for(i=0;j=len-1;i<len;i++;j--)
    {
        rev[i]=s[j];
    }
    rev[len]='\0';
    cout<<rev<<endl;



    return 0;
}