#include<iostream>
using namespace std;
class Parent
{
    public:
   virtual void display()
    {
        cout<<"Display of Parent"<<endl;
    }
};
class Child:public Parent
{
    public:
    void display()
    {
        cout<< "Display of Child"<<endl;
    }
};
int main()
{
   Parent p;
   p.display();
    Child c;
    c.display(); // call the function of child classs // function overrriding
    
    //calling overridded method
    Parent *q = new Child();
    q->display();  //virtual helps to call the function of child class
    //virtual helps in polymorphism if there is many class
    return 0;
}