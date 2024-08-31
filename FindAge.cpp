#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age: "<< endl;
    cin >> age;
    if(age>=13 && age<=19)
    {
        cout<< "Teenage"<< endl;
    }
    else if(age>=0 && age<=12)
    {
        cout << "Child"<< endl;
    }
    else if(age>=20 && age<=50)
    {
        cout << "Young"<< endl;
    }
    else
    {
        cout << "Old" << endl;
    }
    return 0;
}