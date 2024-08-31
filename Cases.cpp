#include<iostream>
using namespace std;
int main()
{
    cout << "Menu "<<endl;
    cout << "1. Add "<<endl <<"2. Subtract"<<endl<< "3.Multiply "<<endl<<"4.Divide "<<endl;
    int option;
    cout<<"Enter Your Choice: "<<endl;
    cin>> option;
    int a, b, c;
    cout <<"Enter Two Numbers: "<<endl;
    cin>> a>> b;
    switch (option)
    {
    case 1: c=a+b;
        break;
    case 2: c=a-b;
        break;
    case 3: c=a*b;
        break;
    case 4: c=a/b;
        break;
    default : cout<<"Invalid Choice "<<endl;
        break;
    }
    cout << "Your Result is: "<<c<<endl;
    return 0;
}