#include<iostream>
using namespace std;
class Employee
{
    private:
        int eid;
        string ename;
    
    public:
        Employee(int e, string n)
        {
            eid = e;
            ename = n;
        }

        void setEmployeID(int e)
        {
            eid = e;
        }
        void setEmployeName(string n)
        {
            ename = n;
        }
        int getEmployeID()
        {
            return eid;
        } 
        string getEmployeName()
        {
            return ename;
        }
};
class FultimeEmployee:public Employee
{
    private:
        int salary;

    public:
        FultimeEmployee(int e, string n, int s):Employee(e,n)
        {
            salary = s;
        }
        void setEmployeSalary(int s)
        {
            salary = s;
        }
        int getEmployeSalary()
        {
            return salary;
        }
};
class ParttimeEmployee: public Employee
{
    private:
        int wages;
    public:
        ParttimeEmployee(int e, string n, int w):Employee(e,n)
        {
            wages = w;
        }
        void setEmpolyeWage(int w)
        {
            wages = w;
        }
        int getEmployeWage()
        {
            return wages;
        }
};

int main()
{
    int e, sal, w;
    string n;
    ParttimeEmployee p1(e,n,sal);//(1,"Bibas", 300);
    //FultimeEmployee p2(2, "Shishir", 4000);
    cout<<"Enter Employee id, name and wages "<<endl;
    cin>>e>>n>>w;
    p1.setEmployeID(e);
    p1.setEmployeName(n);
    p1.setEmpolyeWage(w);
   // cout<<"Salary of "<<p2.getEmployeID()<<". "<<p2.getEmployeName()<<" = "<<p2.getEmployeSalary()<<endl;

    cout<<"Daily Wages of "<<p1.getEmployeID()<<". "<<p1.getEmployeName()<<" = "<<p1.getEmployeWage()<<endl;
}