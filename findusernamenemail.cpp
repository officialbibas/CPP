#include<iostream>
using namespace std;
int main()
{
    string email;
    cout<<"Enter the email address:"<<endl;
    cin>>email;
    int i = (int)email.find('@');
    string uname = email.substr(0,i);
    cout<<"user Name is: "<<uname<<endl;
    return 0;


}