#include<iostream>
#include<fstream>

using namespace std;

class Student
{
    public:   
        string name;
        int roll;
        string branch;
        friend ofstream & operator<<(ofstream &outfile, Student &s);
        //friend ifstream & operator>>(ifstream &infile, Student &s);
};
ofstream & operator<<(ofstream &outfile, Student &s)
{
    outfile<<s.name<<endl;
    outfile<<s.branch<<endl;
    outfile<<s.roll<<endl;
    return outfile;
}
/*
ifstream & operator>>(ifstream &infile, Student &s)
{
    infile>>s.name>>s.branch>>s.roll;
}
*/

int main()
{
    Student s1;
    s1.name="Bibas", s1.branch="Physics", s1.roll=25;
    ofstream outfile("Student.txt", ios::trunc);
    outfile<<s1;

    outfile.close();

    /*
        ifstream infile("Student.txt");
        
        infile>>s1;

        cout<<"Name "<<name<<endl;
        cout<<"Branch "<<branch<<endl;
        cout<<"Roll "<<roll<<endl;

    infile.close();

    */

}