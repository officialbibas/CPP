#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter Two Numbers "<< endl;
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << "Maximum Numbers is: " << num1 << endl;
    }
    else
    {
        cout << "Maximum number is "<< num2 << endl;
    }
    return 0;
}