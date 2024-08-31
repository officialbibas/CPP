#include<iostream>
using namespace std;
class Student
{
    private:
    int roll;
    string name;
    double phyMarks, chemMarks,mathMarks;
    
    public:
    Student(int r, string n, double p, double c, double m)
    {
       roll = r;
       name = n;
       phyMarks = p;
       chemMarks = c;
       mathMarks = m; 
    }
    
     double totalMarks()
     {
       return phyMarks+chemMarks+mathMarks;
     }
     char grade()
     {
        float average = totalMarks()/3;
        if(average>=80)
        {
            return 'A';
        }
        else if(average<80 && average>=60)
        {
            return 'B';
        }
        else
        return 'C';
     }
};

int main()
{
    int roll;
    string name;
    cout<<"Enter the roll Number of Student: "<<endl;
    cin>>roll;
    cout<<"Enter the Name of Student: "<<endl;
    cin>>name;
    double p, m ,c;
    cout<<"Enter the marks of Phy, Chem and Maths respectively: "<<endl;
    cin>>p>>c>>m;
    Student s(roll, name, p, c, m);
    cout<<"Total Marks: "<<s.totalMarks()<<endl;
    cout<<"Grade: "<<s.grade()<<endl;

    return 0;
}