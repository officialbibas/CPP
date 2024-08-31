#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

    public:
  /*  Rectangle() //non-parameterized constructor
    {
        length=0;
        breadth=0;
    }  */
    Rectangle(int l=0, int b=0)//parameterized constructor
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle (Rectangle &r) //copy constructor
    {
        length = r.length;
        breadth = r.breadth;
    }
    
    void setLength(int l)
    {
        if(l>=0)
        length = l;
        else
        { 
            cout<<"Length cannot be negative"<<endl;
            length = 0;
        }
    }
    void setBreadth(int b)
    {
        if(b>=0)
        {
            breadth = b;
        }
        else
        cout<<"Breadth cannot be negative"<<endl;
        breadth = 0;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }
};

int main()
{
    Rectangle r1(3,6);
    Rectangle r2(r1);
    cout<<r1.area()<<endl;
    cout<<r2.area();

    return 0;
}

