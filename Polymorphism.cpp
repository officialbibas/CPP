#include<iostream>
using namespace std;

class Car  //Abstract Classs having some concrete fun & some virtual or all virtual function
{
    public:
        virtual void start()=0; //pure virtual function

        virtual void stop()=0; //==0 doesnot need body
};
class Toyota:public Car
{
    public:
     void start()
     {
        cout<<"Toyota Started"<<endl;
     }
     void stop()
     {
        cout<<"Toyota Stopped"<<endl;
     }
};
class BMW:public Car
{
    public:
     void start()
     {
        cout<<"BMW Started"<<endl;
     }
     void stop()
     {
        cout<<"BMW Stopped"<<endl;
     } 
};
int main()
{
    //Car c; cannot create object of car class due to pure virtual function
    //Runtime Polymorphism
    Car *p = new Toyota();
    p->start();

    p = new BMW();
    p->start();
}
