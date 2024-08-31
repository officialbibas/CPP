#include<iostream>
using namespace std;

class Student
{
    public:
    int roll;
    string name;
    static int addNo;

    Student(string n)
    {
        addNo++;
        roll = addNo;
        name = n;
    }
    void display()
    {
        cout<<"Name "<<name<<endl<<"Roll No "<<roll<<endl;
    }
};
int Student::addNo=0;
int main()
{
    Student s1("Ram");
    Student s2("Hari");
    Student s3("Shyam");
    Student s4("Kumar");
    s1.display();
    s2.display();
    s4.display();

    cout<<Student::addNo<<endl;
}