#include<iostream>
using namespace std;
int main(){
    float basicSalary, percentAllowance, percentDeduction, netSalary;
    cout << "Enter Basic Salary "<< endl;
    cin >> basicSalary;
    cout << " Enter Percentage of Allowance "<< endl;
    cin >> percentAllowance;
    cout << "Enter Percentage of Deduction " << endl;
    cin >> percentDeduction;
    netSalary = basicSalary + percentAllowance*basicSalary/100 -percentDeduction*basicSalary/100;
    cout << "Net Salary: "<< netSalary<< endl;
    return ;
}