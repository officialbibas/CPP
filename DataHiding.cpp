#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:
    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }

    //Property Functions

    void setLength(int l) //accessor
    {
        if(l>=0)
        length = l;
        else
        { 
            cout<<"Length cannot be negative"<<endl;
            length = 0;
        }
    }
    void setBreadth(int b) //accessor
    {
        if(b>=0)
        breadth = b;
        else breadth = 0;
    }
    int getLength() //mutator
    {
        return length;
    }
    int getBreadth() //mutator
    {
        return breadth;
    }
};
int main()
{
    Rectangle *p = new Rectangle;
    p->setLength(15);
    p->setBreadth(10);
    cout<<p->area()<<endl;
    cout<<"Length is: "<<p->getLength()<<endl;
    return 0;
}