#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("My.txt");

    if(infile)
    cout<<"FIle is opened"<<endl;
    string name;
    string branch;
    int roll;

    infile>>name>>branch>>roll;

    infile.close();

    cout<<"Name "<<name<<endl;
    cout<<"Branch "<<branch<<endl;
    cout<<"Roll "<<roll<<endl;
}