#include<iostream>
using namespace std;
int main()
{
    char s[20];
    char s2[20];
    cout<<"Enter your name: "<<endl;
  //  cin>>s;
    cin.getline(s,20);
    cout<<"Welcome "<<s<<endl;
    //cin.ignore(); (for cin.get)
    cout<<"Enter your name again: "<<endl;
    cin.getline(s2,20);
    return 0;
}